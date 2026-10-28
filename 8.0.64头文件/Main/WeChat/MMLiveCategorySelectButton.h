@interface MMLiveCategorySelectButton : MMUIButton
{
    BOOL _hideLogo; // +0x8
    double _maxWidth; // +0x10
    FinderLiveTagInfo * _tagInfo; // +0x18
    UIImageView * _iconView; // +0x20
    UILabel * _textLabel; // +0x28
    UIImageView * _arrowImageView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)hideLogo:(BOOL)arg1 maxWidth:(double)arg2;
- (void)updateWithTag:(id)arg1;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)tagInfo;
- (void)setTagInfo:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (BOOL)hideLogo;
- (void)setHideLogo:(BOOL)arg1;
- (void).cxx_destruct;
@end
