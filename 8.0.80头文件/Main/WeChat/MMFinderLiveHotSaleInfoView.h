@interface MMFinderLiveHotSaleInfoView : UIView
{
    BOOL _isDuringUpdate; // +0x8
    unsigned long long _value; // +0x10
    RichTextView * _richTextView; // +0x18
    MMGradientView * _gradientView; // +0x20
    UILabel * _valueLabel; // +0x28
}
- (id)initWithWording:(id)arg1 value:(unsigned long long)arg2;
- (id)valueTextForValue:(unsigned long long)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateValue:(unsigned long long)arg1;
- (BOOL)isDuringUpdate;
- (void)setIsDuringUpdate:(BOOL)arg1;
- (unsigned long long)value;
- (void)setValue:(unsigned long long)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (void).cxx_destruct;
@end
