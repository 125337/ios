@interface WAWebViewPlugin_PullRefresh : WAWebViewPluginBase <WAWebViewPullDownRefreshViewDelegate>
{
    BOOL _isReflashingHead; // +0x8
    BOOL _isEnablePullRefresh; // +0x9
    WAWebViewPullDownRefreshView * _headRefreshView; // +0x10
}
- (id)init;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)changePullRefreshMode:(long long)arg1;
- (void)genHeaderRefreshViewWithMode:(long long)arg1;
- (void)delHeaderRefreshView;
- (void)enablePullRefresh:(double)arg1 mode:(long long)arg2;
- (void)disablePullRefresh;
- (void)startPullRefresh;
- (void)stopPullRefresh;
- (void)onStartRefreshing;
- (BOOL)isReflashingHead;
- (void)setIsReflashingHead:(BOOL)arg1;
- (BOOL)isEnablePullRefresh;
- (void)setIsEnablePullRefresh:(BOOL)arg1;
- (id)headRefreshView;
- (void)setHeadRefreshView:(id)arg1;
- (void).cxx_destruct;
@end
