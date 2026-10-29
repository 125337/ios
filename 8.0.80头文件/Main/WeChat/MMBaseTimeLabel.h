@interface MMBaseTimeLabel : UIView
{
    NSString * _prefix; // +0x8
    BOOL _hideHours; // +0x10
    UILabel * _label; // +0x18
    UILabel * _suffixLabel; // +0x20
    unsigned long long _seconds; // +0x28
    NSString * _maxWidthTime; // +0x30
}
+ (double)widthWithPrefix:(id)arg1 font:(id)arg2 maxWidthTime:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)setSeconds:(unsigned long long)arg1;
- (void)updateText;
- (void)setPrefix:(id)arg1;
- (id)prefix;
- (id)maxWidthTime;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (id)label;
- (id)suffixLabel;
- (unsigned long long)seconds;
- (void)setMaxWidthTime:(id)arg1;
- (BOOL)hideHours;
- (void)setHideHours:(BOOL)arg1;
- (void).cxx_destruct;
@end
