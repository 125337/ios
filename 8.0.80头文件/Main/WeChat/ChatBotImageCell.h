@interface ChatBotImageCell : UICollectionViewCell
{
    MMWebImageView * _imageView; // +0x8
    NSURL * _imageURL; // +0x10
}
- (void)layoutImageView;
- (void)layoutSubviews;
- (void)setImagePath:(id)arg1;
- (void)prepareForReuse;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (void).cxx_destruct;
@end
