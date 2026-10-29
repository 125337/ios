@interface WCFileBrowserToolBarCell : UITableViewCell
{
    UIView * m_contentView; // +0x8
    id /* block */ _OnClickRemoveButton; // +0x10
    id _fileInfo; // +0x18
    UIImageView * _thumbImageView; // +0x20
    SightIconView * _videoIconView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _sizeLabel; // +0x38
    MMUIButton * _removeButton; // +0x40
}
+ (id)reuseIdentifier;
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setFileInfo:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)layoutUI;
- (void)onRemove;
- (id /* block */)OnClickRemoveButton;
- (void)setOnClickRemoveButton:(id /* block */)arg1;
- (id)fileInfo;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)videoIconView;
- (void)setVideoIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)removeButton;
- (void)setRemoveButton:(id)arg1;
- (void).cxx_destruct;
@end

