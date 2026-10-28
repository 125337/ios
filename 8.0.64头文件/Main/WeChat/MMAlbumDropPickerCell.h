@interface MMAlbumDropPickerCell : UITableViewCell
{
    BOOL _isSelected; // +0x8
    UIView * _bgContentView; // +0x10
    UIImageView * _headImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _countLabel; // +0x28
    UIImageView * _selectedImageView; // +0x30
    UIView * _separatorView; // +0x38
    NSString * _albumId; // +0x40
}
+ (id)cellInTableView:(id)arg1 album:(id)arg2 name:(id)arg3 isSelected:(BOOL)arg4;
+ (double)height;
- (void)updateWithImage:(id)arg1 title:(id)arg2 count:(long long)arg3 isSelected:(BOOL)arg4;
- (void)updateWithImage:(id)arg1;
- (void)updateWithPhotoCount:(long long)arg1;
- (void)awakeFromNib;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layout;
- (id)headImageView;
- (id)titleLabel;
- (id)countLabel;
- (id)selectedImageView;
- (id)separatorView;
- (id)bgContentView;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void)setBgContentView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setCountLabel:(id)arg1;
- (void)setSelectedImageView:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (id)albumId;
- (void)setAlbumId:(id)arg1;
- (void).cxx_destruct;
@end
