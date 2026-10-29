@interface CBTForwardShareHistoryDataField : FavoritesRecordDataField
{
    unsigned int _historyFileType; // +0x8
    unsigned int _historyAppType; // +0xc
    unsigned int _historyCreateTime; // +0x10
    NSString * _historyFileId; // +0x18
    NSString * _historyAesKey; // +0x20
    NSString * _historyMd5; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)xmlTagCustomToXMLProcesslistForConfigTag:(id)arg1;
- (id)historyFileId;
- (void)setHistoryFileId:(id)arg1;
- (id)historyAesKey;
- (void)setHistoryAesKey:(id)arg1;
- (id)historyMd5;
- (void)setHistoryMd5:(id)arg1;
- (unsigned int)historyFileType;
- (void)setHistoryFileType:(unsigned int)arg1;
- (unsigned int)historyAppType;
- (void)setHistoryAppType:(unsigned int)arg1;
- (unsigned int)historyCreateTime;
- (void)setHistoryCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
