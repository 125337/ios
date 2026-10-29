@interface MMLiteAppHalfScreenDragBarView : UIView
{
    UIImageView * _closeIcon; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initCloseIcon;
- (void)updateDisplayDragCloseProgress:(double)arg1;
- (void)layoutSubviews;
- (id)closeIcon;
- (void)setCloseIcon:(id)arg1;
- (void).cxx_destruct;
@end
