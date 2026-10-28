@interface MenuButton : UIButton
{
    double _targetWidth; // +0x8
    MMMultiMenuItem * _menuItem; // +0x10
}
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)onSwipeToTriggerFullfill:(BOOL)arg1;
- (double)targetWidth;
- (void)setTargetWidth:(double)arg1;
- (id)menuItem;
- (void)setMenuItem:(id)arg1;
- (void).cxx_destruct;
@end
