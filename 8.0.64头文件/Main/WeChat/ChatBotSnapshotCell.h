@interface ChatBotSnapshotCell : UICollectionViewCell
{
    MMUILabel * _originLabel; // +0x8
    MMUILabel * _dateLabel; // +0x10
    MMUILabel * _countLabel; // +0x18
    ChatBotSnapLinksCellData * _data; // +0x20
    NSMutableArray * _imageViews; // +0x28
}
- (void)layoutSubviews;
- (void)setCellData:(id)arg1;
- (void)layoutCell;
- (void)prepareForReuse;
- (id)formatTimestampToDateString:(double)arg1;
- (id)originLabel;
- (void)setOriginLabel:(id)arg1;
- (id)dateLabel;
- (void)setDateLabel:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (void).cxx_destruct;
@end
