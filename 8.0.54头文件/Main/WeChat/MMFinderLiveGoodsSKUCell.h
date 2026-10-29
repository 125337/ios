@interface MMFinderLiveGoodsSKUCell : UICollectionViewCell
{
    BOOL _isSellOut; // +0x8
    UIView * _sellOutMaskView; // +0x10
    UIView * _pressedMaskView; // +0x18
    MMPaddingView * _sellOutLabel; // +0x20
    UILabel * _textLabel; // +0x28
    MMWebImageView * _imageView; // +0x30
}
+ (double)cellHeightWithoutImageSize;
+ (CGSize)cellWithoutImageSizeForText:(id)arg1;
+ (CGSize)cellWithImageSizeWithMaxNumberOfLines:(unsigned long long)arg1;
+ (id)textFont;
+ (double)widthWithImage;
+ (unsigned long long)numberOfLinesWithImageForText:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageURL:(id)arg1;
- (id)imageURL;
- (void)setText:(id)arg1;
- (id)text;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)numberOfLines;
- (void)setIsSellOut:(BOOL)arg1;
- (void)prepareForReuse;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)isSellOut;
- (id)sellOutMaskView;
- (void)setSellOutMaskView:(id)arg1;
- (id)pressedMaskView;
- (void)setPressedMaskView:(id)arg1;
- (id)sellOutLabel;
- (void)setSellOutLabel:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end

