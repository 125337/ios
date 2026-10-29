@interface StorageResourceInfoCell : UITableViewCell
{
    shared_ptr<ChatLogSessionItem> m_curSessionItem; // +0x8
    id <StorageResourceInfoCellDelegate> _delegate; // +0x18
    UIImageView * _selectImageView; // +0x20
    UIImageView * _resourceIcon; // +0x28
    MMUIButton * _detailButton; // +0x30
    UILabel * _sourceLabel; // +0x38
    UILabel * _sizeLabel; // +0x40
    UIView * _seperateLine; // +0x48
    ResourceCountView * _resCountView; // +0x50
    UIView * _bottomSeperateLine; // +0x58
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateWithSessionItem:(const void *)arg1 selected:(BOOL)arg2 selectType:(unsigned long long)arg3;
- (const void *)sessionItem;
- (void)onClickDetailButton;
- (void)onClickArrowButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
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
- (id)resCountView;
- (void)setResCountView:(id)arg1;
- (id)bottomSeperateLine;
- (void)setBottomSeperateLine:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

