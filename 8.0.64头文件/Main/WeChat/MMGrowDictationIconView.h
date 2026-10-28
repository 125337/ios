@interface MMGrowDictationIconView : MMDictationLogicIcon
{
    UIView * _textMaskView; // +0x98
    UIImageView * _maskImageView; // +0xa0
}
- (id)initWithFrame:(CGRect)arg1 customIconImage:(id)arg2 cgiScene:(long long)arg3 uiScene:(unsigned long long)arg4 uiParentScene:(unsigned long long)arg5;
- (void)layoutSubviews;
- (void)updateMask;
- (id)textMaskView;
- (void)setTextMaskView:(id)arg1;
- (id)maskImageView;
- (void)setMaskImageView:(id)arg1;
- (void).cxx_destruct;
@end
