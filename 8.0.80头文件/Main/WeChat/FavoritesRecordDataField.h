@interface FavoritesRecordDataField : FavoritesItemDataField
{
    unsigned int _msgLocalId; // +0x2b8
    unsigned int _msgCreateTime; // +0x2bc
    NSString * _chatName; // +0x2c0
}
+ (id)xmlTagCustomToXMLProcesslistForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (void)setMsgLocalId:(unsigned int)arg1;
- (BOOL)needDownloadData;
- (BOOL)isRawData;
- (id)GetThumbPath;
- (id)GetMiddleDataPath;
- (id)GetDataPath;
- (id)getAutoCleanRawPath;
- (id)GetLivePhotoVideoPath;
- (id)middlePathForDisplay;
- (int)superCdnDataFileType;
- (id)superCdnDataUrl;
- (id)superCdnThumbUrl;
- (int)superCdnThumbFileType;
- (unsigned long long)superDataSize;
- (id)superCdnDataKey;
- (id)superCdnThumbKey;
- (id)superDataMd5;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setGroupCdn:(id)arg1;
- (id)groupCdn;
- (unsigned long long)dataSize;
- (BOOL)checkGroupMiddleValidate;
- (BOOL)checkGroupValidate;
- (id)cdnDataUrl;
- (id)cdnDataKey;
- (int)cdnDataFileType;
- (id)dataMd5;
- (id)sourceDataPath;
- (void)setSourceDataPath:(id)arg1;
- (unsigned long long)middleDataSize;
- (id)cdnMiddleDataUrl;
- (id)cdnMiddleDataKey;
- (int)cdnMiddleDataFileType;
- (id)middleDataMd5;
- (id)sourceMiddleDataPath;
- (void)setSourceMiddleDataPath:(id)arg1;
- (unsigned long long)thumbSize;
- (id)cdnThumbUrl;
- (id)cdnThumbKey;
- (int)cdnThumbFileType;
- (id)thumbMd5;
- (id)sourceThumbPath;
- (void)setSourceThumbPath:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)msgLocalId;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
