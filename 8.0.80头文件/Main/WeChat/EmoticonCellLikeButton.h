@interface EmoticonCellLikeButton : UIButton
{
    UIColor * _selectedColor; // +0x8
    double _animateDuration; // +0x10
    UIColor * _originBackgroundColor; // +0x18
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)cancelSelectedState;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg1;
- (double)animateDuration;
- (void)setAnimateDuration:(double)arg1;
- (id)originBackgroundColor;
- (void)setOriginBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end
