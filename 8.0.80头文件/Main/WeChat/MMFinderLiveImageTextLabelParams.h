@interface MMFinderLiveImageTextLabelParams : NSObject
{
    NSString * _leftImageURL; // +0x8
    double _imageToText; // +0x10
    UIFont * _font; // +0x18
    UIColor * _textColor; // +0x20
    NSString * _text; // +0x28
    UIImage * _rightImage; // +0x30
    CGSize _leftImageSize; // +0x38
    UIEdgeInsets _padding; // +0x48
}
- (UIEdgeInsets)padding;
- (void)setPadding:(UIEdgeInsets)arg1;
- (id)leftImageURL;
- (void)setLeftImageURL:(id)arg1;
- (double)imageToText;
- (void)setImageToText:(double)arg1;
- (CGSize)leftImageSize;
- (void)setLeftImageSize:(CGSize)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)rightImage;
- (void)setRightImage:(id)arg1;
- (void).cxx_destruct;
@end
