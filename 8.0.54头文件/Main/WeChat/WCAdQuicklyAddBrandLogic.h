@interface WCAdQuicklyAddBrandLogic : WCAdvertiseOperationLogicBase <WCAdHalfScreenContainerViewDelegate, PBMessageObserverDelegate>
{
    int _uiScene; // +0x8
    int _uiSubScene; // +0xc
    id <WCAdQuicklyAddBrandLogicDelegate> _delegate; // +0x10
    WCAdQuicklyAddBrandInfo * _brandInfo; // +0x18
    WCAdHalfScreenContainerBaseView * _adBrandHalfScreenView; // +0x20
    MMTimer * _contactSyncTimer; // +0x28
    unsigned long long _enterType; // +0x30
    WCAdvertiseInfo * _adInfo; // +0x38
    NSString * _snsId; // +0x40
    NSString * _canvasDynamicInfo; // +0x48
}
- (id)initWithBrandInfo:(id)arg1 uiScene:(int)arg2 enterType:(unsigned long long)arg3 adInfo:(id)arg4 snsId:(id)arg5 canvasDynamicInfo:(id)arg6;
- (void)start;
- (void)dealloc;
- (void)onConfirmButtonClick;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onModifyContact:(id)arg1;
- (void)scheduleContactSyncTimer;
- (BOOL)checkValid:(id)arg1;
- (void)callbackResult:(long long)arg1;
- (void)callbackResultSuccess;
- (void)callbackResultFailed;
- (void)addBrandInner:(id)arg1;
- (void)enterBrandInner;
- (void)createVerify:(id)arg1 andSubScene:(unsigned int)arg2;
- (void)invalidateContactSyncTimer;
- (void)onTimeoutContactSync;
- (void)showLoadingView;
- (id)fetchMMViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)brandInfo;
- (void)setBrandInfo:(id)arg1;
- (id)adBrandHalfScreenView;
- (void)setAdBrandHalfScreenView:(id)arg1;
- (id)contactSyncTimer;
- (void)setContactSyncTimer:(id)arg1;
- (int)uiScene;
- (void)setUiScene:(int)arg1;
- (int)uiSubScene;
- (void)setUiSubScene:(int)arg1;
- (unsigned long long)enterType;
- (void)setEnterType:(unsigned long long)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (void).cxx_destruct;
@end

