@interface MMWebViewPlugin_WebNavigationPerf : MMWebViewPluginBase
{
    unsigned long long _viewControllerCreateTimeInMs; // +0x8
    unsigned long long _viewControllerCreateEndTimeInMs; // +0x10
    unsigned long long _webviewCreateTimeInMs; // +0x18
    unsigned long long _webviewCreateEndTimeInMs; // +0x20
    unsigned long long _lastGetA8KeyTimeInMs; // +0x28
    unsigned long long _lastGetA8KeyEndTimeInMs; // +0x30
    unsigned long long _firstNavigationRedirectCount; // +0x38
    NSString * _firstCommitNavigationURLString; // +0x40
    NSString * _firstCommitNavigationPerfReportString; // +0x48
}
- (id)init;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)firstNavigationPerf_onGetA8KeyStart:(id)arg1;
- (void)firstNavigationPerf_onGetA8KeyEnd:(id)arg1;
- (void)firstNavigationPerf_navigationRecieveRedirect:(id)arg1;
- (void)firstNavigationPerf_commitNavigation:(id)arg1;
- (void)onWebViewPageNavigationPerfReport:(id)arg1;
- (void)log18497FirstNavigationPerformanceStat;
- (void)common_navigationFinished:(id)arg1;
- (void)tryInjectNavigationOptimazationToDebugConsole;
- (unsigned long long)__calDurantionForEventTimeInMs:(unsigned long long)arg1;
- (unsigned long long)viewControllerCreateTimeInMs;
- (void)setViewControllerCreateTimeInMs:(unsigned long long)arg1;
- (unsigned long long)viewControllerCreateEndTimeInMs;
- (void)setViewControllerCreateEndTimeInMs:(unsigned long long)arg1;
- (unsigned long long)webviewCreateTimeInMs;
- (void)setWebviewCreateTimeInMs:(unsigned long long)arg1;
- (unsigned long long)webviewCreateEndTimeInMs;
- (void)setWebviewCreateEndTimeInMs:(unsigned long long)arg1;
- (unsigned long long)lastGetA8KeyTimeInMs;
- (void)setLastGetA8KeyTimeInMs:(unsigned long long)arg1;
- (unsigned long long)lastGetA8KeyEndTimeInMs;
- (void)setLastGetA8KeyEndTimeInMs:(unsigned long long)arg1;
- (unsigned long long)firstNavigationRedirectCount;
- (void)setFirstNavigationRedirectCount:(unsigned long long)arg1;
- (id)firstCommitNavigationURLString;
- (void)setFirstCommitNavigationURLString:(id)arg1;
- (id)firstCommitNavigationPerfReportString;
- (void)setFirstCommitNavigationPerfReportString:(id)arg1;
- (void).cxx_destruct;
@end
