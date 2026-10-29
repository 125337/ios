@interface StorageDeleteInfoCell : UITableViewCell
{
    shared_ptr<ChatLogSessionItem> m_curSessionItem; // +0x8
    id <StorageDeleteInfoCellDelegate> _delegate; // +0x18
    NSString * _userName; // +0x20
    UIImageView * _selectImageView; // +0x28
    UIImageView * _resourceIcon; // +0x30
    MMUIButton * _detailButton; // +0x38
    UILabel * _sourceLabel; // +0x40
    UILabel * _sizeLabel; // +0x48
    UIView * _seperateLine; // +0x50
    UILabel * _msgCountLabel; // +0x58
    UIView * _bottomSeperateLine; // +0x60
}
+ (double)cellHeight;
- (const void *)sessionItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateCellWithSessionItem:(const void *)arg1 sizeString:(id)arg2 selected:(BOOL)arg3;
- (void)onClickResourceImage;
- (void)onClickShowDetail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)selectImageView;
- (void)setSelectImageView:(id)arg1;
- (id)resourceIcon;
- (void)setResourceIcon:(id)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)seperateLine;
- (void)setSeperateLine:(id)arg1;
- (id)msgCountLabel;
- (void)setMsgCountLabel:(id)arg1;
- (id)bottomSeperateLine;
- (void)setBottomSeperateLine:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
