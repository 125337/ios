@interface FaceRecogCTIDGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    UIView * _contentView; // +0x8
    id /* block */ _onDismiss; // +0x10
}
- (id)initWithDismiss:(id /* block */)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (id)createDescriptionLabel;
- (id)createStepViewWithStepText:(id)arg1 stepFont:(id)arg2 stepImageUrl:(id)arg3;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id /* block */)onDismiss;
- (void)setOnDismiss:(id /* block */)arg1;
- (void).cxx_destruct;
@end
