@interface WCFinderMentionTitleView : UIView
{
    id <WCFinderMentionTitleViewDelegate> _delegate; // +0x8
    WCFinderAggregatedTitleView * _titleView; // +0x10
    RichTextView * _aggregatedContactTitleView; // +0x18
    UILabel * _aggregatedCountLabel; // +0x20
    UILabel * _timestampLabel; // +0x28
    UIImageView * _logoImageView; // +0x30
    WCFinderInteractionLabelGroupView * _aboveInteractionLabel; // +0x38
    WCFinderInteractionLabelGroupView * _belowInteractionLabel; // +0x40
    MMUIButton * _followButton; // +0x48
    WCFinderMentionTitleModel * _model; // +0x50
    double _layoutWidth; // +0x58
    double _intrinsicHeight; // +0x60
}
+ (double)titleHeightWithModel:(id)arg1 width:(double)arg2;
+ (id)followBtnBgColor;
+ (double)titleMinWidthWithModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithModel:(id)arg1;
- (void)updateInteractionLabel;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutUIWhenAggregated;
- (void)updateHeight:(double)arg1;
- (CGSize)intrinsicContentSize;
- (id)aggregatedSuffixContentWithEllipsis:(BOOL)arg1;
- (id)aggregatedContactDisplayContent:(id)arg1;
- (void)clickUserRelationshipTag;
- (void)followButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)aggregatedContactTitleView;
- (void)setAggregatedContactTitleView:(id)arg1;
- (id)aggregatedCountLabel;
- (void)setAggregatedCountLabel:(id)arg1;
- (id)timestampLabel;
- (void)setTimestampLabel:(id)arg1;
- (id)logoImageView;
- (void)setLogoImageView:(id)arg1;
- (id)aboveInteractionLabel;
- (void)setAboveInteractionLabel:(id)arg1;
- (id)belowInteractionLabel;
- (void)setBelowInteractionLabel:(id)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (double)intrinsicHeight;
- (void)setIntrinsicHeight:(double)arg1;
- (void).cxx_destruct;
@end

