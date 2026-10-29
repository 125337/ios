@interface KindaLiteAppUIPage : NSObject <MMLiteAppExt>
{
    BOOL _animated; // +0x8
    BOOL _kitOwned; // +0x9
    BOOL _kitCloseRequested; // +0xa
    BOOL _halfScreen; // +0xb
    BOOL _presentModally; // +0xc
    BOOL _transparentPage; // +0xd
    BOOL _kitLaunchFailed; // +0xe
    MMIUIPage * _kindaUIPage; // +0x10
    id <KindaLiteAppUIPageDelegate> _delegate; // +0x18
    NSString * _username; // +0x20
    KindaProxy * _kindaProxy; // +0x28
    OpenLiteAppInfo * _openInfo; // +0x30
    MMUIViewController * _loadingViewController; // +0x38
    MMLiteAppViewController * _liteappVC; // +0x40
    long long _kitCallId; // +0x48
}
- (id)init;
- (void)dealloc;
- (void)openLiteApp:(id)arg1 extraData:(id)arg2;
- (void)openViaLegacyEngine;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 extraData:(id)arg4;
- (id)dictionayToTransmitKvData:(id)arg1;
- (BOOL)handleStoreAction:(id)arg1 data:(id)arg2;
- (void)notifyLiteAppClosedWithExtraData:(id)arg1;
- (id)kitLaunchOptions;
- (void)openViaKitWithAppId:(id)arg1 page:(id)arg2 query:(id)arg3;
- (void)setStore:(id)arg1;
- (void)closeUI:(BOOL)arg1;
- (void)beginIgnoringInteractionEvents;
- (void)endEditing;
- (void)endIgnoringInteractionEvents;
- (void)refreshNavigationBar;
- (void)setBackgroundColor:(long long)arg1;
- (void)setKeyBoardShowCallbackImpl:(id)arg1;
- (void)setTopLeftBackBtnCallbackImpl:(id)arg1;
- (void)setTopRightBtnImage:(id)arg1;
- (void)setTopRightBtnTitle:(id)arg1 color:(id)arg2;
- (void)setTopRightCallbackImpl:(id)arg1;
- (id)getTitle;
- (void)setScreenBrightness:(float)arg1;
- (void)setScreenKeepOn:(BOOL)arg1;
- (id)kindaUIPage;
- (void)setKindaUIPage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)kindaProxy;
- (void)setKindaProxy:(id)arg1;
- (id)openInfo;
- (void)setOpenInfo:(id)arg1;
- (id)loadingViewController;
- (void)setLoadingViewController:(id)arg1;
- (id)liteappVC;
- (void)setLiteappVC:(id)arg1;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (BOOL)kitOwned;
- (void)setKitOwned:(BOOL)arg1;
- (long long)kitCallId;
- (void)setKitCallId:(long long)arg1;
- (BOOL)kitCloseRequested;
- (void)setKitCloseRequested:(BOOL)arg1;
- (BOOL)halfScreen;
- (void)setHalfScreen:(BOOL)arg1;
- (BOOL)presentModally;
- (void)setPresentModally:(BOOL)arg1;
- (BOOL)transparentPage;
- (void)setTransparentPage:(BOOL)arg1;
- (BOOL)kitLaunchFailed;
- (void)setKitLaunchFailed:(BOOL)arg1;
- (void).cxx_destruct;
@end
