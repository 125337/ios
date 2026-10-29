@interface MMFinderLivePurchaseTicketPayButton : MMUIButton
{
    NSString * _rightText; // +0x8
    UIColor * _labelColor; // +0x10
    MMUILabel * _leftLabel; // +0x18
    MMUIImageView * _coinImageView; // +0x20
    MMUILabel * _rightLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateRightText:(id)arg1 labelColor:(id)arg2;
- (void)layoutUI;
- (void)creatUI;
- (id)leftLabel;
- (id)coinImageView;
- (id)rightLabel;
- (id)rightText;
- (void)setRightText:(id)arg1;
- (id)labelColor;
- (void)setLabelColor:(id)arg1;
- (void)setLeftLabel:(id)arg1;
- (void)setCoinImageView:(id)arg1;
- (void)setRightLabel:(id)arg1;
- (void).cxx_destruct;
@end

