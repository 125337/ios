@interface MMPageSheetProgressiveAnimationView : UIView
{
    LOTAnimationView * _closeIcon; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onPageSheetDragToDismissOffset:(double)arg1 animated:(BOOL)arg2;
- (id)closeIcon;
- (void)setCloseIcon:(id)arg1;
- (void).cxx_destruct;
@end

