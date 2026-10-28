@interface GroupNoticeItem : FavoritesItem
{
    NSString * _itemID; // +0x28
    NSArray * _skipDownloadType; // +0x30
}
+ (id)itemFromFavItem:(id)arg1;
+ (id)itemFromText:(id)arg1;
+ (id)itemFromXml:(id)arg1;
- (id)description;
- (BOOL)isEmptyContent;
- (id)generateAbstractSummary;
- (id)generateDetailSummary;
- (BOOL)hasMediaItem;
- (BOOL)isSameItem:(id)arg1;
- (BOOL)isHtmlDataField:(id)arg1;
- (BOOL)shouldDownloadData:(id)arg1;
- (void)bindWithMsgWrap:(id)arg1;
- (void)moveDataFromTmpPathToFormalPathIfNeed;
- (void)setToUsr:(id)arg1;
- (void)setSourceId:(id)arg1;
- (void)setMsgLocalId:(unsigned int)arg1;
- (BOOL)needDownLoad;
- (id)itemID;
- (void)setItemID:(id)arg1;
- (id)skipDownloadType;
- (void)setSkipDownloadType:(id)arg1;
- (void).cxx_destruct;
@end
