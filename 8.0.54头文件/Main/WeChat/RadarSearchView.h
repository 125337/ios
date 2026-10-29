@interface RadarSearchView : MMUIImageView <IShortCutExt, ILocationMgrExt, IRadarSearchExt, IMsgExt, UIScrollViewDelegate, RSHeadImageViewDelegate, RSVerifyViewDelegate, CNetworkStatusExt, FriendAsistSessionExt>
{
    UIView * _backgroundView; // +0x8
    UIView * _tipsView; // +0x10
    UIButton * _closeBtn; // +0x18
    UIImageView * _selfHeadView; // +0x20
    UIImageView * _radarLightView; // +0x28
    SonicView * _radarAllHeadScrollView; // +0x30
    RSVerifyView * _verifyView; // +0x38
    NSMutableArray * _foundResult; // +0x40
    AVAudioPlayer * _popPlayer; // +0x48
    AVAudioPlayer * _holdPlayer; // +0x50
    id <RadarSearchViewDelegate> _delegate; // +0x58
    BOOL m_bIsRespondHeadImgClicking; // +0x60
    long long m_locationErrorCode; // +0x68
    BOOL m_bIsShowNetworkTips; // +0x70
    double m_startSearchTime; // +0x78
    BOOL m_bIsNeedToReport; // +0x80
    WCUIAlertView * _currAlertView; // +0x88
}
- (void)initSkyBackground;
- (id)init;
- (void)initBackgroundView;
- (void)initSelfHeadView;
- (void)initCloseButton;
- (void)initVerifyView;
- (id)generateCloseButton;
- (void)initTipsView;
- (void)showTipsView;
- (void)hideTipsView;
- (void)showTipsWithType:(long long)arg1;
- (void)showFindFailTips;
- (void)resetDataMember;
- (void)layoutSubviews;
- (void)initView;
- (void)onClose:(BOOL)arg1;
- (void)onClose;
- (void)startPlayPopupSound;
- (void)stopPlayPopupSound;
- (void)resumeLightAnimation;
- (void)startLightAnimation;
- (void)stopLightAnimation;
- (void)hideTipsViewIfNeed;
- (void)startSearch;
- (void)realStartSearch;
- (void)stopSearch;
- (void)handleSomeoneAppear:(id)arg1;
- (void)OnRadarSearch:(id)arg1 ErrCode:(int)arg2;
- (void)OnAddFriend:(id)arg1 ErrCode:(int)arg2;
- (void)OnVerifyUsr:(id)arg1 ErrCode:(int)arg2;
- (void)OnRetrieveLocationTimeout;
- (void)OnRetrieveLocationOk;
- (void)OnRetrieveLocationError:(int)arg1;
- (void)showAlertForLocationAuthorization;
- (void)goToSettingLocationAuthorization;
- (id)parseXML:(id)arg1;
- (void)onFriendAssistAddMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onRSHeadImageClicked:(id)arg1;
- (void)onStatusViewHidden:(id)arg1;
- (void)onRSVerifyViewHide;
- (id)getCurViewController;
- (void)onExpose:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onPerformShortCut:(id)arg1;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

