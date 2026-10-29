@interface EcsRichTextLabel : UIView
{
    EcsRichLabelViewModel * _dataVM; // +0x8
    long long _numberOfLines; // +0x10
    long long _textAlignment; // +0x18
    YYLabel * _label; // +0x20
    long long _lastWidth; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setDataVM:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)updateLabel;
- (id)dataVM;
- (long long)numberOfLines;
- (long long)textAlignment;
- (id)label;
- (void)setLabel:(id)arg1;
- (long long)lastWidth;
- (void)setLastWidth:(long long)arg1;
- (void).cxx_destruct;
@end
