@interface WCCanvasClickEventManager : MMObject <WCCanvasImageLoaderObserver, WCCanvasDynamicDataLoaderDelegate, WCAdQuicklyAddBrandLogicDelegate, WCAdAppointmentLogicDelegate, WCAdFinderFollowLogicDelegate, WCAdFinderLiveNoticePolymericLogicDelegate, WCActionSheetDelegate, LocationRetrieveDelegate, WCAdDetermineHalfScreenViewDelegate, WCAdConfirmHalfScreenAdapterDelegate>
{
    BOOL _qrCodeProcessing; // +0x8
    WCCanvasComponentItem * _componentItem; // +0x10
    id <WCCanvasClickEventManagerDelegate> _delegate; // +0x18
    id <WCCanvasComponentDelegate> _canvasDelegate; // +0x20
    WCCanvasDynamicDataLoader * _dataLoader; // +0x28
    LocationRetriever * _locationRetriever; // +0x30
    WCAdDetermineHalfScreenView * _determineHalfScreenView; // +0x38
    unsigned long long _clickSource; // +0x40
    WCAdQuicklyAddBrandLogic * _addBrandLogic; // +0x48
    WCAdAppointmentLogic * _appointmentLogic; // +0x50
    WCAdFinderFollowLogic * _adFinderFollowLogic; // +0x58
    WCAdFinderLiveNoticePolymericLogic * _finderLiveNoticeLogic; // +0x60
    WCAdCombineFollowLogic * _combineFollowLogic; // +0x68
    WCAdConfirmHalfScreenAdapter * _phoneNumAdapter; // +0x70
}
- (id)initWithComponentItem:(id)arg1 delegate:(id)arg2 canvasDelegate:(id)arg3;
- (void)dealloc;
- (void)onClickEventWithSource:(unsigned long long)arg1;
- (void)onClickEvent;
- (id)fetchRelatedComponent;
- (BOOL)doGameCenterJump;
- (BOOL)doCanvasJump;
- (BOOL)doWeAppJump;
- (BOOL)doLocalJump;
- (BOOL)doWaBizJump;
- (BOOL)doProductActionJump;
- (BOOL)doSmartPhoneJump:(id)arg1;
- (BOOL)doPhoneCallJump;
- (void)doQrCodeScan;
- (void)setQrCodeScanProcessing;
- (void)getLocationForQrCodeUpdate;
- (void)updateQrCodeUrlFromServer:(id)arg1;
- (void)doScanGoodJump:(id)arg1;
- (void)doQuicklyAddBrandJump:(id)arg1 needJumpCompatiblePage:(BOOL)arg2;
- (void)doJumpPersonalProfile:(id)arg1;
- (void)setQrCodeProcessingAutoFinishAfter:(double)arg1;
- (void)setQrCodeProcessFinished;
- (void)loadAndScanQrCodeImage;
- (void)doQrScanBegin:(id)arg1;
- (void)onUxCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (void)onFavProductReturn:(unsigned int)arg1 errMsg:(id)arg2;
- (void)onGetSmartPhoneNumber:(id)arg1;
- (void)onUpdateQrCode:(id)arg1 componentId:(id)arg2 snsId:(id)arg3;
- (void)onUpdateProfileUsername:(id)arg1;
- (void)onGetRedPacketCoverUrlResult:(id)arg1 autoJump:(BOOL)arg2;
- (id)dataLoader;
- (id)addBrandLogic;
- (id)appointmentLogic;
- (id)adFinderFollowLogic;
- (id)combineFollowLogic;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)showLoading;
- (void)showLoadingAutoHideAfter:(double)arg1;
- (void)hideLoading;
- (void)doAdChannelReport:(id)arg1;
- (id)getAddBrandNavigationController;
- (void)doGetCoupon;
- (void)onGetCouponWithResult:(long long)arg1 errMsg:(id)arg2;
- (void)doOnGetCouponSuccess;
- (void)doFinderLiveNoticeReserve;
- (void)doJumpFinderProfileWithUsername:(id)arg1;
- (BOOL)shouldOnlyShowBrandInfo;
- (void)tryToUpdateQuicklyAddBrandStatus;
- (void)tryToQueryRedPackCoverUrlWithAutoJump:(BOOL)arg1;
- (void)doJumpFinderFeed;
- (id)getViewController;
- (id)getNavigationController;
- (id)getUxInfoWithShared:(BOOL)arg1;
- (BOOL)isCanvasInHalfScreenMode;
- (void)doJumpEmotionStore;
- (void)doOpenCustomerService;
- (void)tryToQueryAppointmentStatus;
- (void)doAppointment;
- (void)onAppointmentSubmitForType:(int)arg1 isSuccess:(BOOL)arg2;
- (void)onAppointmentUpdatingStatus:(int)arg1;
- (int)fetchDestAppointmentOpType;
- (void)showAppointmentPhoneNumberRequestView:(id)arg1;
- (void)confirmAdapterClosedWithResult:(long long)arg1 extInfo:(id)arg2;
- (void)tryToQueryFinderFollowStatus;
- (void)doJumpFinderFollow;
- (void)doJumpFinderProfileByFollowing;
- (void)onFinderFollowingStateChanged:(BOOL)arg1 byUser:(BOOL)arg2;
- (id)finderLiveNoticeLogic;
- (void)tryToQueryFinderLiveNoticePolymericStatus;
- (void)doFinderLiveNoticePolymeric;
- (void)onFinderLiveNoticePolymericStatusUpdatedWith:(int)arg1;
- (void)onFinderLiveNoticePolymericJumpToProfile:(id)arg1;
- (void)tryToQueryCombineFollowStatus;
- (void)doCombineFollow;
- (void)doJumpStatePublish;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showLocationPermissionView;
- (void)onDetermineViewButtonClickedWithType:(long long)arg1 determineInfo:(id)arg2;
- (void)onDetermineViewDidClose:(BOOL)arg1;
- (void)retrieveLocation;
- (void)reportLocationAuthResultWithName:(id)arg1 status:(id)arg2;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)doNextAction:(id)arg1;
- (void)doRedEnvelopesRepeatPick;
- (id)componentItem;
- (void)setComponentItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)canvasDelegate;
- (void)setCanvasDelegate:(id)arg1;
- (void)setDataLoader:(id)arg1;
- (BOOL)qrCodeProcessing;
- (void)setQrCodeProcessing:(BOOL)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (id)determineHalfScreenView;
- (void)setDetermineHalfScreenView:(id)arg1;
- (unsigned long long)clickSource;
- (void)setClickSource:(unsigned long long)arg1;
- (void)setAddBrandLogic:(id)arg1;
- (void)setAppointmentLogic:(id)arg1;
- (void)setAdFinderFollowLogic:(id)arg1;
- (void)setFinderLiveNoticeLogic:(id)arg1;
- (void)setCombineFollowLogic:(id)arg1;
- (id)phoneNumAdapter;
- (void)setPhoneNumAdapter:(id)arg1;
- (void).cxx_destruct;
@end
