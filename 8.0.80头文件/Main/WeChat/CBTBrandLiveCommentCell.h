@interface CBTBrandLiveCommentCell : UITableViewCell
{
    BOOL _cbt_isChattingHighlighted; // +0x8
    NSString * _traceId; // +0x10
    UIView * _cardView; // +0x18
    UILabel * _contentLabel; // +0x20
    CBTBrandBadgePrefixTextView * _badgePrefixView; // +0x28
    UILabel * _chattingBadgeLabel; // +0x30
    UIStackView * _hStack; // +0x38
    CBTBrandLiveCommentCellInfo * _info; // +0x40
    NSLayoutConstraint * _cardTopC; // +0x48
    NSLayoutConstraint * _cardBottomC; // +0x50
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)cbt_findTableView;
- (void)traitCollectionDidChange:(id)arg1;
- (double)cbt_stackAvailableWidthForTargetWidth:(double)arg1;
- (void)cbt_applyPreferredMaxWidthIfPossibleWithTargetWidth:(double)arg1;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configWithInfo:(id)arg1;
- (void)setChattingHighlighted:(BOOL)arg1;
- (void)refreshTextStyle;
- (id)item;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)badgePrefixView;
- (void)setBadgePrefixView:(id)arg1;
- (id)chattingBadgeLabel;
- (void)setChattingBadgeLabel:(id)arg1;
- (id)hStack;
- (void)setHStack:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)cardTopC;
- (void)setCardTopC:(id)arg1;
- (id)cardBottomC;
- (void)setCardBottomC:(id)arg1;
- (void).cxx_destruct;
@end
