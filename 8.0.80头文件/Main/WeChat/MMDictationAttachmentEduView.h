@interface MMDictationAttachmentEduView : UIView
{
    UIButton * _doneButton; // +0x8
    UILabel * _textlabel; // +0x10
    UIImageView * _imageView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadText;
- (void)traitCollectionDidChange:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)textlabel;
- (void)setTextlabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
