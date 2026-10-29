@interface CBTBrandBadgePrefixTextView : UIView
{
    BOOL _highlighted; // +0x8
    UILabel * _label; // +0x10
    CBTBrandLiveBadgeView * _badge; // +0x18
    NSLayoutConstraint * _badgeWidthC; // +0x20
    NSLayoutConstraint * _badgeHeightC; // +0x28
    NSLayoutConstraint * _badgeTopC; // +0x30
    NSLayoutConstraint * _badgeLeadingC; // +0x38
    NSString * _badgeText; // +0x40
    BizAgentLiveChatRoomResp_QueryItem * _item; // +0x48
    double _badgeSpacing; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configWithItem:(id)arg1 badgeText:(id)arg2 highlighted:(BOOL)arg3;
- (double)firstLineHeight;
- (CGSize)measureForWidth:(double)arg1;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)layoutSubviews;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (id)badgeWidthC;
- (void)setBadgeWidthC:(id)arg1;
- (id)badgeHeightC;
- (void)setBadgeHeightC:(id)arg1;
- (id)badgeTopC;
- (void)setBadgeTopC:(id)arg1;
- (id)badgeLeadingC;
- (void)setBadgeLeadingC:(id)arg1;
- (id)badgeText;
- (void)setBadgeText:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (double)badgeSpacing;
- (void)setBadgeSpacing:(double)arg1;
- (BOOL)highlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void).cxx_destruct;
@end
