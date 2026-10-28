@interface MMWebViewPlugin_UI : MMWebViewPluginBase
{
    BOOL _hasLongPress; // +0x8
    BOOL _hasAppear; // +0x9
    BOOL _isAnimate; // +0xa
    double _lastScrollOffset; // +0x10
    double _fullHeight; // +0x18
    double _webBottomBarHeight; // +0x20
    long long _didStartLoadTime; // +0x28
    UIView * _navigationBarView; // +0x30
}
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)clearScrollBackgroundColor;
- (BOOL)handleNewWebBarBottomEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)handleTopBarAlphaByEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (BOOL)hasLongPress;
- (void)setHasLongPress:(BOOL)arg1;
- (double)lastScrollOffset;
- (void)setLastScrollOffset:(double)arg1;
- (double)fullHeight;
- (void)setFullHeight:(double)arg1;
- (double)webBottomBarHeight;
- (void)setWebBottomBarHeight:(double)arg1;
- (BOOL)hasAppear;
- (void)setHasAppear:(BOOL)arg1;
- (long long)didStartLoadTime;
- (void)setDidStartLoadTime:(long long)arg1;
- (BOOL)isAnimate;
- (void)setIsAnimate:(BOOL)arg1;
- (id)navigationBarView;
- (void)setNavigationBarView:(id)arg1;
- (void).cxx_destruct;
@end
