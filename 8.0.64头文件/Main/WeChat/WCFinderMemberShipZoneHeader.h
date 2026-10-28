@interface WCFinderMemberShipZoneHeader : UIView <WCFinderMemberShipZoneHeaderDataDelegate, WCFinderProfileCardContainerExposeDelegate, WCFinderFeedContentTextClickActionDelegate>
{
    BOOL _descContentLabelIsExpand; // +0x8
    WCFinderMemberShipZoneHeaderData * _data; // +0x10
    id <WCFinderMemberShipZoneHeaderDelegate> _delegate; // +0x18
    WCFinderMemberShipZoneReporter * _reporter; // +0x20
    RichTextView * _benefitsLabel; // +0x28
    UILabel * _titleLabel; // +0x30
    WCFinderFeedContentTextView * _descContentLabel; // +0x38
    WCFinderProfileCardContainer * _cardContainer; // +0x40
    UIButton * _postBtn; // +0x48
    UIButton * _liveBtn; // +0x50
    RichTextView * _centerDataLabel; // +0x58
    UIButton * _activityBtn; // +0x60
    WCFinderMSInteractionView * _interactionView; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setData:(id)arg1;
- (void)update;
- (void)configButton:(id *)arg1 display:(BOOL)arg2;
- (id)createButton:(void *)arg1;
- (id)genRichTextView;
- (id)genContentTextView;
- (id)buttonTitleColor;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onClickActivity;
- (void)onClickPost;
- (void)onClickLive;
- (void)onClickFansEntrance;
- (void)onMemberShipZoneHeaderDataChanged;
- (void)onCardView:(id)arg1 expose:(long long *)arg2 exposeCount:(long long)arg3 unExpose:(long long *)arg4 unExposeCount:(long long)arg5;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (id)data;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)benefitsLabel;
- (void)setBenefitsLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descContentLabel;
- (void)setDescContentLabel:(id)arg1;
- (id)cardContainer;
- (void)setCardContainer:(id)arg1;
- (id)postBtn;
- (void)setPostBtn:(id)arg1;
- (id)liveBtn;
- (void)setLiveBtn:(id)arg1;
- (id)centerDataLabel;
- (void)setCenterDataLabel:(id)arg1;
- (id)activityBtn;
- (void)setActivityBtn:(id)arg1;
- (BOOL)descContentLabelIsExpand;
- (void)setDescContentLabelIsExpand:(BOOL)arg1;
- (id)interactionView;
- (void)setInteractionView:(id)arg1;
- (void).cxx_destruct;
@end
