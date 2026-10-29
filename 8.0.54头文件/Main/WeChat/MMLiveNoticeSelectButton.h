@interface MMLiveNoticeSelectButton : MMUIButton
{
    double _maxWidth; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _textLabel; // +0x18
    UIImageView * _arrowImageView; // +0x20
}
- (id)init;
- (void)updateLiveNoticeSelectButtonTitle:(id)arg1 showArrowImageView:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

