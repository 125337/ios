@interface WCFinderLiveHomePageBannerCell : WCFinderLiveFeedGenericCdnCell <WCFinderFeedContentVMLiveExt, ILinkEventExt, MMFinderLiveInfoMgrExt>
{
    BOOL _skipAsyncLoadLiveInfo; // +0x8
    BOOL _hideAudienceNum; // +0x9
    BOOL _hasRegisterNavLiveStatus; // +0xa
    BOOL _canShowLiveActivityView; // +0xb
    BOOL _canShowDesLabel; // +0xc
    id <WCFinderLiveHomePageBannerCellDelegate> _delegate; // +0x10
    RichTextView * _recommendReasonLabel; // +0x18
    UIView * _recommendReasonView; // +0x20
    RichTextView * _descLabel; // +0x28
    UIView * _authorView; // +0x30
    UIView * _avatorContainer; // +0x38
    WCFinderHeadImageView * _avatorImageView; // +0x40
    RichTextView * _nicknameTV; // +0x48
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x50
    UILabel * _audienceNumLabel; // +0x58
    MMFinderLiveActivityView * _liveActivityView; // +0x60
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)initViews;
- (void)dealloc;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)arg1;
- (void)setHideAudienceNum:(BOOL)arg1;
- (void)relayoutNickname;
- (void)willMoveToWindow:(id)arg1;
- (void)registerFetchNavLiveStatus;
- (void)checkAndUnregisterFetchNavLiveStatus;
- (void)layoutUI;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)onAuthorViewDidClick;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)liveActivityView;
- (void)layoutLiveActivityView;
- (void)updateAllUIElementsShow:(BOOL)arg1 animate:(BOOL)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFinderLiveHomePageStatusOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)skipAsyncLoadLiveInfo;
- (void)setSkipAsyncLoadLiveInfo:(BOOL)arg1;
- (BOOL)hideAudienceNum;
- (id)recommendReasonLabel;
- (void)setRecommendReasonLabel:(id)arg1;
- (id)recommendReasonView;
- (void)setRecommendReasonView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)authorView;
- (void)setAuthorView:(id)arg1;
- (id)avatorContainer;
- (void)setAvatorContainer:(id)arg1;
- (id)avatorImageView;
- (void)setAvatorImageView:(id)arg1;
- (id)nicknameTV;
- (void)setNicknameTV:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)audienceNumLabel;
- (void)setAudienceNumLabel:(id)arg1;
- (BOOL)hasRegisterNavLiveStatus;
- (void)setHasRegisterNavLiveStatus:(BOOL)arg1;
- (BOOL)canShowLiveActivityView;
- (void)setCanShowLiveActivityView:(BOOL)arg1;
- (void)setLiveActivityView:(id)arg1;
- (BOOL)canShowDesLabel;
- (void)setCanShowDesLabel:(BOOL)arg1;
- (void).cxx_destruct;
@end

