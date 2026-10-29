@interface WCFinderDynamicTabButton : UIControl
{
    BOOL _tabSelected; // +0x8
    WCFinderSizingRichTextView * _titleView; // +0x10
    NSString * _richTitle; // +0x18
}
- (id)initWithRichTitle:(id)arg1;
- (double)preferredWidth;
- (double)preferredHeight;
- (void)layoutSubviews;
- (void)applySelected:(BOOL)arg1;
- (void)applyTransitionProgress:(double)arg1 becomingSelected:(BOOL)arg2;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)richTitle;
- (void)setRichTitle:(id)arg1;
- (BOOL)isTabSelected;
- (void)setTabSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
