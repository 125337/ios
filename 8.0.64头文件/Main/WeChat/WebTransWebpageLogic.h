@interface WebTransWebpageLogic : NSObject <WebTransCgiLogicDelegate>
{
    BOOL _hasInjected; // +0x8
    BOOL _doingAnimationNow; // +0x9
    BOOL _isTransOrderFromMenuBtn; // +0xa
    BOOL _hasShownBtnOnceInThisPage; // +0xb
    int _residueReTryNum; // +0xc
    id <WebTransPageLogicDelegate> _delegate; // +0x10
    WebTransCgiLogic * _cgiMgr; // +0x18
    NSString * _curRandomUUID; // +0x20
    double _dynamicRatio; // +0x28
    long long _thisPageCheckResult; // +0x30
    long long _transHelpButtonStatus; // +0x38
    long long _curPageStatus; // +0x40
    MMWebViewController * _webViewController; // +0x48
    NSString * _brand; // +0x50
}
- (void)initSetting;
- (id)webView;
- (void)stop;
- (void)checkByNLPIdentifier:(id /* block */)arg1;
- (void)handleTransData:(id)arg1;
- (void)onClickTransBtn;
- (void)onClickRevertBtn:(id /* block */)arg1;
- (void)onGotoAnotherPage:(BOOL)arg1;
- (void)onGetTriggerInModeNone;
- (void)onGetTriggerInModeTrans;
- (void)Prehandle_and_CallTransjsapi;
- (void)callJSRevertApi;
- (void)callJSTransApi;
- (void)injectTransJsWithCuruuid:(id)arg1 andBlock:(id /* block */)arg2;
- (void)checkHasInjectedBefore:(id /* block */)arg1;
- (void)bounceAfterCgiReturn:(id)arg1;
- (id)UnzipAndSotreCache:(id)arg1;
- (void)replaceHTML:(id)arg1;
- (void)tryCancelLoading;
- (void)cancelLoading;
- (void)titleViewCalculator;
- (void)enterUpStatus;
- (void)enterDownStatus;
- (void)animationChangeTitleView:(id)arg1 toView:(id)arg2 duration:(double)arg3;
- (void)onTranslateNaviTtileAnimationStart;
- (void)onTranslateNaviTtileAnimationEnd;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cgiMgr;
- (void)setCgiMgr:(id)arg1;
- (id)curRandomUUID;
- (void)setCurRandomUUID:(id)arg1;
- (double)dynamicRatio;
- (void)setDynamicRatio:(double)arg1;
- (long long)thisPageCheckResult;
- (void)setThisPageCheckResult:(long long)arg1;
- (long long)transHelpButtonStatus;
- (void)setTransHelpButtonStatus:(long long)arg1;
- (long long)curPageStatus;
- (void)setCurPageStatus:(long long)arg1;
- (BOOL)hasInjected;
- (void)setHasInjected:(BOOL)arg1;
- (id)webViewController;
- (id)brand;
- (void)setBrand:(id)arg1;
- (BOOL)doingAnimationNow;
- (void)setDoingAnimationNow:(BOOL)arg1;
- (BOOL)isTransOrderFromMenuBtn;
- (void)setIsTransOrderFromMenuBtn:(BOOL)arg1;
- (BOOL)hasShownBtnOnceInThisPage;
- (void)setHasShownBtnOnceInThisPage:(BOOL)arg1;
- (int)residueReTryNum;
- (void)setResidueReTryNum:(int)arg1;
- (void).cxx_destruct;
@end
