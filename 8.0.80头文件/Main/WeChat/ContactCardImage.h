@interface ContactCardImage : NSObject
{
    UIImage * _image; // +0x8
    NSString * _imagePath; // +0x10
    CardImgItemInfo * _cardItem; // +0x18
}
+ (id)cardImageWithImage:(id)arg1;
- (id)description;
- (id)image;
- (void)setImage:(id)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)cardItem;
- (void)setCardItem:(id)arg1;
- (void).cxx_destruct;
@end
