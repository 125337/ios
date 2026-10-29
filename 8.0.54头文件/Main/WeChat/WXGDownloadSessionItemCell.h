@interface WXGDownloadSessionItemCell : MMTableViewCell
{
    UIImageView * _selectedImage; // +0x8
    UIImageView * _resourceIcon; // +0x10
    UILabel * _sizeLabel; // +0x18
    UILabel * _sourceLabel; // +0x20
    NSString * _userName; // +0x28
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateSessionItem:(id)arg1 size:(unsigned long long)arg2 selected:(BOOL)arg3;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)resourceIcon;
- (void)setResourceIcon:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void).cxx_destruct;
@end

