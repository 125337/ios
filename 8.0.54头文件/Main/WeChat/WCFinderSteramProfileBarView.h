@interface WCFinderSteramProfileBarView : UIView <WCFinderSteramProfileBarViewInterface>
{
    UIImageView * _closeIcon; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initCloseIcon;
- (void)updateDisplayDragCloseProgress:(double)arg1;
- (void)doLayout;
- (void)layoutSubviews;
- (void)updateBarBGColor:(id)arg1 arrowColor:(id)arg2;
- (id)closeIcon;
- (void)setCloseIcon:(id)arg1;
- (void).cxx_destruct;
@end

