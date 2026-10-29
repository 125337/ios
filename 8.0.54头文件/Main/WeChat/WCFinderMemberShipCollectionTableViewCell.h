@interface WCFinderMemberShipCollectionTableViewCell : UITableViewCell
{
    MMWebImageView * _coverImgView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
    WCFinderDetailTimeStringConfig * _timeStringConfig; // +0x20
    UIView * _topSeparatorLine; // +0x28
    UIView * _bottomSeparatorLine; // +0x30
}
- (void)updateWithCollectionInfo:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3;
- (id)titleLabel;
- (id)descLabel;
- (id)coverImgView;
- (id)bottomSeparatorLine;
- (id)topSeparatorLine;
- (id)timeStringConfig;
- (void)setCoverImgView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setTimeStringConfig:(id)arg1;
- (void)setTopSeparatorLine:(id)arg1;
- (void)setBottomSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end

