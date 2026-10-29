@interface VoiceRecordArcButton : UIView
{
    BOOL _selected; // +0x8
    UIImageView * _imageView; // +0x10
    UILabel * _textLabel; // +0x18
    UIView * _backgroundView; // +0x20
    CAShapeLayer * _arcLayer; // +0x28
    UIImage * _defaultImage; // +0x30
    UIImage * _highlightedImage; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 image:(id)arg2 highlightedImage:(id)arg3 text:(id)arg4;
- (void)layoutUI;
- (void)setSelected:(BOOL)arg1;
- (BOOL)selected;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)arcLayer;
- (void)setArcLayer:(id)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (id)highlightedImage;
- (void)setHighlightedImage:(id)arg1;
- (void).cxx_destruct;
@end
