@interface KindaLiteAppUIPage : NSObject <MMLiteAppCloseExt>
{
    BOOL _animated; // +0x8
    MMIUIPage * _kindaUIPage; // +0x10
    id <KindaLiteAppUIPageDelegate> _delegate; // +0x18
    NSString * _username; // +0x20
    KindaProxy * _kindaProxy; // +0x28
    OpenLiteAppInfo * _openInfo; // +0x30
    MMUIViewController * _loadingViewController; // +0x38
    MMLiteAppViewController * _liteappVC; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)openLiteApp:(id)arg1 extraData:(id)arg2;
- (void)onLiteAppClose:(id)arg1 appUuid:(unsigned int)arg2 extraData:(id)arg3;
- (id)dictionayToTransmitKvData:(id)arg1;
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
- (void).cxx_destruct;
@end

