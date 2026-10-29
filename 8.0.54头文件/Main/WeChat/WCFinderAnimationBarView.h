@interface WCFinderAnimationBarView : UIView <WCFinderSteramProfileBarViewInterface>
{
    LOTAnimationView * _closeIcon; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)doLayout;
- (void)updateDisplayDragCloseProgress:(double)arg1;
- (id)closeIcon;
- (void)setCloseIcon:(id)arg1;
- (void).cxx_destruct;
@end

