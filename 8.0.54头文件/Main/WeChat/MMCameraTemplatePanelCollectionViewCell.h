@interface MMCameraTemplatePanelCollectionViewCell : UICollectionViewCell
{
    BOOL _isSelected; // +0x8
    UIView * _borderView; // +0x10
    MMWebImageView * _imageView; // +0x18
    UILabel * _nonImageView; // +0x20
    UILabel * _titleLabel; // +0x28
}
+ (id)cellID;
+ (CGSize)getCellSize;
+ (id)genLabel;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setTemplateItem:(id)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)nonImageView;
- (void)setNonImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)isSelected;
- (void).cxx_destruct;
@end

