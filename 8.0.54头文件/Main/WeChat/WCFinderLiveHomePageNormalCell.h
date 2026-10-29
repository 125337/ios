@interface WCFinderLiveHomePageNormalCell : WCFinderLiveFeedGenericCdnCell <WCFinderFeedContentVMLiveExt, ILinkEventExt>
{
    BOOL _hideAudienceNum; // +0x8
    BOOL _canShowLiveActivityView; // +0x9
    id <WCFinderLiveHomePageNormalCellDelegate> _delegate; // +0x10
    RichTextView * _recommendReasonLabel; // +0x18
    UIView * _recommendReasonView; // +0x20
    UIView * _authorView; // +0x28
    UIView * _avatorContainer; // +0x30
    WCFinderHeadImageView * _avatorImageView; // +0x38
    RichTextView * _nicknameTV; // +0x40
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x48
    UILabel * _audienceNumLabel; // +0x50
    MMFinderLiveActivityView * _liveActivityView; // +0x58
    MMFinderLiveFeedHighlightTagView * _highlightTagView; // +0x60
    RichTextView * _mediaTitleTextView; // +0x68
}
+ (id)cellIdentifier;
+ (double)maxRecommendWidthInCellWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)updateStyle;
- (void)initViews;
- (void)prepareForReuse;
- (void)updateSkeletonable:(id)arg1;
- (void)updateWithFeedVM:(id)arg1;
- (void)setHideAudienceNum:(BOOL)arg1;
- (void)updateHighLightTag;
- (void)relayoutNickname;
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
- (void)onFeedHighlightTagUpdate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hideAudienceNum;
- (id)recommendReasonLabel;
- (void)setRecommendReasonLabel:(id)arg1;
- (id)recommendReasonView;
- (void)setRecommendReasonView:(id)arg1;
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
- (BOOL)canShowLiveActivityView;
- (void)setCanShowLiveActivityView:(BOOL)arg1;
- (void)setLiveActivityView:(id)arg1;
- (id)highlightTagView;
- (void)setHighlightTagView:(id)arg1;
- (id)mediaTitleTextView;
- (void)setMediaTitleTextView:(id)arg1;
- (void).cxx_destruct;
@end

