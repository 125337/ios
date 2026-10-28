@interface MMWindowMgrObject : NSObject
{
    MMWindowViewController * m_windowVC; // +0x8
    MMUIWindow * m_Window; // +0x10
    BOOL isChangeStatusBarStyle; // +0x18
    BOOL isRequestKeyWindow; // +0x19
    BOOL isNeedNavCtrl; // +0x1a
    BOOL _isMakeUnVisible; // +0x1b
    BOOL _isMakeUnKey; // +0x1c
    int animationType; // +0x20
    int transitionOptions; // +0x24
    long long statusBarStyle; // +0x28
    long long lastStatusBarStyle; // +0x30
    UIImageView * blurBgImageView; // +0x38
}
- (void)setMMWindowVC:(id)arg1;
- (id)getMMWindowVC;
- (void)setMMWindow:(id)arg1;
- (id)getMMWindow;
- (BOOL)isObjectEqual:(id)arg1;
- (BOOL)isGreaterThan:(id)arg1;
- (void)makeUnKeyAndUnVisible;
- (void)recoverKeyAndVisibleIfNeeded;
- (id)description;
- (int)animationType;
- (void)setAnimationType:(int)arg1;
- (long long)statusBarStyle;
- (void)setStatusBarStyle:(long long)arg1;
- (long long)lastStatusBarStyle;
- (void)setLastStatusBarStyle:(long long)arg1;
- (BOOL)isChangeStatusBarStyle;
- (void)setIsChangeStatusBarStyle:(BOOL)arg1;
- (int)transitionOptions;
- (void)setTransitionOptions:(int)arg1;
- (BOOL)isRequestKeyWindow;
- (void)setIsRequestKeyWindow:(BOOL)arg1;
- (id)blurBgImageView;
- (void)setBlurBgImageView:(id)arg1;
- (BOOL)isNeedNavCtrl;
- (void)setIsNeedNavCtrl:(BOOL)arg1;
- (BOOL)isMakeUnVisible;
- (BOOL)isMakeUnKey;
- (void).cxx_destruct;
@end
