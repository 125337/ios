@interface WCFinderMyTabFinderSection : WCFinderMyTabSectionController <WCFinderMyTabFinderCardViewDelegate, WCFinderUserPrepareExt, WCFinderContactExt, WCFinderRedDotNotifyExt>
{
    WCFinderMyTabEntranceParams * _params; // +0x8
    WCFinderContact * _contact; // +0x10
    PrepareFinder * _prepare; // +0x18
    WCFinderPersonalCenterContactData * _data; // +0x20
    WCFinderMyTabFinderCardView * _cardView; // +0x28
    WCFinderPersonalCenterCameraActionHandle * _cameraHandle; // +0x30
    WCFinderPersonalCenterLiveActionHandle * _liveHandle; // +0x38
}
+ (Class)paramsClass;
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (id)displayTitle;
- (id)createDisplayCard;
- (int)commentScene;
- (void)_updateCardView;
- (void)_setupData;
- (long long)_cameraButtonState;
- (long long)_liveButtonState;
- (void)onViewDidBePushOrPresent;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderNotifyFansCountNeedReload;
- (void)onFinderCardViewClickContact:(id)arg1;
- (void)onFinderCardViewClickWording:(id)arg1;
- (void)setupCleanWordingParamsAfterPushOtherPage;
- (id)creatorCenterURL;
- (id)appendReportArgumentToUrl:(id)arg1;
- (void)onProfileEntranceCreatorWordingReadInfoChanged;
- (id)params;
- (void)setParams:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)prepare;
- (void)setPrepare:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)cameraHandle;
- (void)setCameraHandle:(id)arg1;
- (id)liveHandle;
- (void)setLiveHandle:(id)arg1;
- (void).cxx_destruct;
@end
