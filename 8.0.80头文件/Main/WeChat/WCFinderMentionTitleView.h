@interface WCFinderMentionTitleView : UIView <RichTextLayoutDelegate>
{
    id <WCFinderMentionTitleViewDelegate> _delegate; // +0x8
    WCFinderAggregatedTitleView * _titleView; // +0x10
    RichTextView * _aggregatedContactTitleView; // +0x18
    UILabel * _aggregatedCountLabel; // +0x20
    UILabel * _timestampLabel; // +0x28
    WCFinderInteractionLabelGroupView * _aboveInteractionLabel; // +0x30
    WCFinderInteractionLabelGroupView * _belowInteractionLabel; // +0x38
    MMUIButton * _followButton; // +0x40
    WCFinderMentionTitleModel * _model; // +0x48
    double _layoutWidth; // +0x50
    double _intrinsicHeight; // +0x58
    double _aggregatedTimestampReservedLineY; // +0x60
    double _aggregatedTimestampReservedWidth; // +0x68
}
+ (double)titleHeightWithModel:(id)arg1 width:(double)arg2;
+ (id)followBtnBgColor;
+ (double)titleMinWidthWithModel:(id)arg1;
+ (double)titleAccessoryWidthWithModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithModel:(id)arg1;
- (void)updateInteractionLabel;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutLegacyUI;
- (void)layoutSimplifiedUI;
- (void)layoutUIWhenAggregated;
- (void)layoutSimplifiedAggregatedTitle;
- (id)simplifiedAggregatedTitleWithDisplayNames:(id)arg1 suffix:(id)arg2;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)updateHeight:(double)arg1;
- (CGSize)intrinsicContentSize;
- (id)aggregatedContactDisplayContent:(id)arg1;
- (void)clickUserRelationshipTag;
- (void)followButtonClicked;
- (void)clickTitleNameAction;
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
- (double)aggregatedTimestampReservedLineY;
- (void)setAggregatedTimestampReservedLineY:(double)arg1;
- (double)aggregatedTimestampReservedWidth;
- (void)setAggregatedTimestampReservedWidth:(double)arg1;
- (void).cxx_destruct;
@end
