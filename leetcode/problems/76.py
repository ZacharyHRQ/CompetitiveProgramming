#Minimum Window Substring
#https://leetcode.com/problems/minimum-window-substring/

from collections import Counter

def minWindow( s, t):
        beg, end = 0, 0
        ans, found = (float("inf"), 0), 0
        cnt_t, cnt_s = Counter(t), Counter()
        while end <= len(s):
            if found == len(cnt_t):
                ans = min(ans, (end - beg, beg))
                old = s[beg]
                if cnt_s[old] == cnt_t[old]: found -= 1
                cnt_s[old] -= 1
                beg += 1
            else:
                if end == len(s): break
                new = s[end]
                if cnt_s[new] == cnt_t[new] - 1: found += 1
                cnt_s[new] += 1
                end += 1
            print(ans)
        
        return s[ans[1]:ans[0]+ans[1]] if ans[0] != float("inf") else ""

ans = minWindow("ADOBECODEBANC","ABC")

print(ans)
