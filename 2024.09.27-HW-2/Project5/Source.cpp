#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int i1 = 0;
    int w1 = 0;
    int h1 = 0;
    int i2 = 0;
    int w2 = 0;
    int h2 = 0;
    int i3 = 0;
    int w3 = 0;
    int h3 = 0;
    scanf_s("%d", &i1);
    scanf_s("%d", &w1);
    scanf_s("%d", &h1);
    scanf_s("%d", &i2);
    scanf_s("%d", &w2);
    scanf_s("%d", &h2);
    scanf_s("%d", &i3);
    scanf_s("%d", &w3);
    scanf_s("%d", &h3);
	bool hf = (h1 > h2 ? h1 : h2) <= h3;
	bool hllw = (i1 > w2 ? i1 : w2) <= i3;
	bool hwlw = (i2 > w1 ? i2 : w1) <= w3;
	bool hlwl = (i1 > w2 ? i1 : w2) <= w3;
	bool hwwl = (i2 > w1 ? i2 : w1) <= i3;
	bool hlf = (i1 > i2 ? i1 : i2) <= w3;
	bool hwf = (w1 > w2 ? w1 : w2) <= i3;
	bool lf = (i1 > i2 ? i1 : i2) <= i3;
	bool wf = (w1 > w2 ? w1 : w2) <= w3;
	bool lls = (i1 + i2) <= i3;
	bool lws = (w1 + w2) <= i3;
	bool lwswf = (i1 > i2 ? i1 : i2) <= w3;
	bool llw = (i1 + w2) <= i3;
	bool llwwf = (w1 > i2 ? w1 : i2) <= w3;
	bool lwl = (i2 + w1) <= i3;
	bool lwlwf = (i1 > w2 ? i1 : w2) <= w3;
	bool wls = (i1 + i2) <= w3;
	bool wlslf = (w1 > w2 ? w1 : w2) <= i3;
	bool wws = (w1 + w2) <= w3;
	bool wlw = (i1 + w2) <= w3;
	bool wlwlf = (w1 > i2 ? w1 : i2) <= i3;
	bool wwl = (i2 + w1) <= w3;
	bool wwllf = (i1 > w2 ? i1 : w2) <= i3;
	if ((((h1 + h2) <= h3) && ((lf && wf) || (hllw && hwlw) || (hlwl && hwwl) || (hlf && hwf))) || (hf && ((lls && wf) || (lws && lwswf) || (llw && llwwf) || (lwl && lwlwf)) || (hf && ((wls && wlslf) || (wws && lf) || (wlw && wlwlf) || (wwl && wwllf)))))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}