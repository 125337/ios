@interface MMFinderLiveNotifyStyleHasBoughtProductInAnchorLiveCommentPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell
{
    UILabel * _label; // +0x8
}
+ (double)cornerRadius;
+ (CGSize)preferSizeForCellFrame:(id)arg1 inWidth:(double)arg2;
+ (id)attributedStringForContent:(id)arg1;
- (id)initWithCellFrame:(id)arg1;
- (void)layoutSubviews;
- (id)finderLiveViewController;
- (void)runCustomEnterAnimation;
- (void)onTap;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
