@interface MMFinderLiveGenericPickerItemView : UIView
{
    MMFinderLiveGenericPickerItem * _item; // +0x8
    UILabel * _nameLabel; // +0x10
    UIImageView * _imgView; // +0x18
}
- (void)setItem:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id)item;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)imgView;
- (void)setImgView:(id)arg1;
- (void).cxx_destruct;
@end

