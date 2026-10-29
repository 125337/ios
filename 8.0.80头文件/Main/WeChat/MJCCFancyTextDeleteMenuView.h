@interface MJCCFancyTextDeleteMenuView : UIControl
{
    UIView * _bodyView; // +0x8
    UIImageView * _arrowView; // +0x10
    CGSize _preferredSize; // +0x18
}
- (id)initWithItem:(id)arg1;
- (void)updateArrowOnTop:(BOOL)arg1 centerX:(double)arg2;
- (id)bodyView;
- (void)setBodyView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (CGSize)preferredSize;
- (void).cxx_destruct;
@end
