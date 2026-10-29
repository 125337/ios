@interface WCFinderLiveTopicTemplateLargeCell : WCFinderLiveFeedGenericCdnCell <ILinkEventExt>
{
    BOOL _hideAudienceNum; // +0x8
    WCFinderHeadImageView * _avatorImageView; // +0x10
    RichTextView * _nicknameTV; // +0x18
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x20
    MMFinderLiveFeedHighlightTagView * _highlightTagView; // +0x28
    UIView * _avatorTapView; // +0x30
    UILabel * _audienceNumLabel; // +0x38
    NSMutableArray * _productViews; // +0x40
    WCFinderLiveCardProductShowcase * _curProductShowcase; // +0x48
    FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions * _hotSellingOptions; // +0x50
}
- (void)initViewsIfNeeded;
- (void)updateWithFeedVM:(id)arg1;
- (void)prepareForReuse;
- (void)updateWithProductShowcase:(id)arg1;
- (void)updateWithHotSellingOptions:(id)arg1;
- (void)resetSubviews;
- (void)initSubviewsIfNeeded;
- (void)layoutSubviews;
- (void)relayoutNickname;
- (void)setupProductsIfNeeded;
- (BOOL)isPlayingLive;
- (void)updateHighLightTag;
- (void)onFeedHighlightTagUpdate;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onAvatorTapped;
- (void)onProductTapped:(id)arg1;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (id)avatorImageView;
- (id)nicknameTV;
- (id)authInfoIconView;
- (id)audienceNumLabel;
- (id)avatorTapView;
- (id)productViews;
- (id)highlightTagView;
- (void)setHideAudienceNum:(BOOL)arg1;
- (BOOL)hideAudienceNum;
- (void)setAvatorImageView:(id)arg1;
- (void)setNicknameTV:(id)arg1;
- (void)setAuthInfoIconView:(id)arg1;
- (void)setHighlightTagView:(id)arg1;
- (void)setAvatorTapView:(id)arg1;
- (void)setAudienceNumLabel:(id)arg1;
- (void)setProductViews:(id)arg1;
- (id)curProductShowcase;
- (void)setCurProductShowcase:(id)arg1;
- (id)hotSellingOptions;
- (void)setHotSellingOptions:(id)arg1;
- (void).cxx_destruct;
@end

