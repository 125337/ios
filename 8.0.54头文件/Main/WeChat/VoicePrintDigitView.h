@interface VoicePrintDigitView : UIView
{
    NSString * _digits; // +0x8
    NSString * _title; // +0x10
    MMUILabel * _digitsLabel; // +0x18
    MMUILabel * _titleLabel; // +0x20
    NSNumber * _digitsAlone; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setDigits:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)updateTitleSize;
- (void)setDigitsAlone:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)digits;
- (id)title;
- (id)digitsLabel;
- (void)setDigitsLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)isDigitsAlone;
- (void).cxx_destruct;
@end

