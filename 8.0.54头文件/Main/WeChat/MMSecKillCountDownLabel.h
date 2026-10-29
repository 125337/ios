@interface MMSecKillCountDownLabel : UIView
{
    UIView * _line; // +0x8
    UILabel * _suffixLabel; // +0x10
    MMCountDownLabel * _countDownLabel; // +0x18
}
+ (double)widthWithSuffix:(id)arg1 font:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)line;
- (id)suffixLabel;
- (id)countDownLabel;
- (void).cxx_destruct;
@end

