@interface MMMsgCommonTipsView : TipsView
{
    BOOL _shouldDisableAccessibility; // +0x18
    MMTimer * _timer; // +0x20
    MMMsgContentTipsItem * _item; // +0x28
}
+ (id)tipsViewForTipsItem:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)hideAfterDuration:(double)arg1;
- (void)didMoveToSuperview;
- (void)setFrame:(CGRect)arg1;
- (void)animatedShowInMsgContent;
- (void)animatedHideInMsgContent;
- (double)heightToFitWidth:(double)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (void)showOrHideExpandView;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)shouldDisableAccessibility;
- (void)setShouldDisableAccessibility:(BOOL)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end

