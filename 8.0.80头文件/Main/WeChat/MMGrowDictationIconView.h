@interface MMGrowDictationIconView : MMDictationLogicIcon
{
    BOOL _disableTextMask; // +0xd8
    UIView * _textMaskView; // +0xe0
    UIImageView * _maskImageView; // +0xe8
}
- (id)initWithFrame:(CGRect)arg1 customIconImage:(id)arg2 cgiScene:(long long)arg3 uiScene:(unsigned long long)arg4 uiParentScene:(unsigned long long)arg5;
- (void)setDisableTextMask:(BOOL)arg1;
- (void)layoutSubviews;
- (void)updateMask;
- (id)textMaskView;
- (void)setTextMaskView:(id)arg1;
- (id)maskImageView;
- (void)setMaskImageView:(id)arg1;
- (BOOL)disableTextMask;
- (void).cxx_destruct;
@end
