@interface MsgBigFileItemCell : UITableViewCell
{
    MsgBigFileConfirmItem * _fileItem; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _sizeLabel; // +0x18
    UIImageView * _fileBgView; // +0x20
    UIImageView * _thumbImageView; // +0x28
    UIImageView * _videoIconView; // +0x30
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)updateWithItem:(id)arg1;
- (void)layoutSubviews;
- (id)fileItem;
- (void)setFileItem:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)fileBgView;
- (void)setFileBgView:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)videoIconView;
- (void)setVideoIconView:(id)arg1;
- (void).cxx_destruct;
@end
