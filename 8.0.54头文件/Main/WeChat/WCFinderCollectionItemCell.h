@interface WCFinderCollectionItemCell : UITableViewCell
{
    MMWebImageView * _coverImgView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
    WCFinderDetailTimeStringConfig * _timeStringConfig; // +0x20
}
- (void)updateWithCollectionInfo:(id)arg1;
- (id)titleLabel;
- (id)descLabel;
- (id)coverImgView;
- (id)timeStringConfig;
- (void)setCoverImgView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setTimeStringConfig:(id)arg1;
- (void).cxx_destruct;
@end

