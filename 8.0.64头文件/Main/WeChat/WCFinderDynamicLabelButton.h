@interface WCFinderDynamicLabelButton : UIButton
{
    UIImageView * _iconImageView; // +0x8
    UILabel * _textLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 image:(id)arg2 text:(id)arg3;
- (id)iconImageView;
- (id)textLabel;
- (void)updateTextWithContent:(id)arg1;
- (void)updateImageWithNormal:(id)arg1 selected:(id)arg2 liked:(BOOL)arg3;
- (void)setIconImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
