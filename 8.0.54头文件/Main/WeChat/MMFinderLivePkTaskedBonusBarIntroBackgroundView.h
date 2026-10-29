@interface MMFinderLivePkTaskedBonusBarIntroBackgroundView : UIView <MMFinderLivePkTaskedBonusBarBackgroundView>
{
    UIView * _backgroundView; // +0x8
    UIImageView * _leftDecoratorView; // +0x10
    UIImageView * _rightDecoratorView; // +0x18
    CGRect _contentArea; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateLayoutToMatchContentView:(id)arg1;
- (void)layoutSubviews;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)leftDecoratorView;
- (void)setLeftDecoratorView:(id)arg1;
- (id)rightDecoratorView;
- (void)setRightDecoratorView:(id)arg1;
- (CGRect)contentArea;
- (void)setContentArea:(CGRect)arg1;
- (void).cxx_destruct;
@end

