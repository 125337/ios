@interface MMFinderLiveLotteryRecordExpiredTipView : MMPageSheetBaseView
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _detailLabel; // +0x10
    MMUIButton * _cancelButton; // +0x18
    CAShapeLayer * _shapeLayer; // +0x20
    UIView * _contentView; // +0x28
    NSString * _detailText; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateDetailText:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (id)contentView;
- (id)titleLabel;
- (id)detailLabel;
- (id)cancelButton;
- (void)onCancel;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)detailText;
- (void)setDetailText:(id)arg1;
- (void).cxx_destruct;
@end
