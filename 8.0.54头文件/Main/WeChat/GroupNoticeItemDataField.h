@interface GroupNoticeItemDataField : FavoritesItemDataField
{
    NSString * _sourceId; // +0x8
    NSString * _chatRoomName; // +0x10
}
+ (id)convertFromData:(id)arg1;
- (id)GetDataPath;
- (id)GetThumbPath;
- (id)GetTmpDataPath;
- (id)GetTmpThumbPath;
- (BOOL)needDownloadData;
- (BOOL)needDownloadThumb;
- (id)uploadIdentifier;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (void).cxx_destruct;
@end

