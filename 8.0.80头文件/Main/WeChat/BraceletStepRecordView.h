@interface BraceletStepRecordView : UIView
{
    UIView * _lineView; // +0x8
    MMWebImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIImageView * _arrowView; // +0x20
    UIButton * _buttonView; // +0x28
    SportRecord * _record; // +0x30
}
+ (double)calculateHeight;
- (id)initWithRecord:(id)arg1;
- (void)sizeToFitWidth:(double)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)buttonView;
- (void)setButtonView:(id)arg1;
- (id)record;
- (void)setRecord:(id)arg1;
- (void).cxx_destruct;
@end
