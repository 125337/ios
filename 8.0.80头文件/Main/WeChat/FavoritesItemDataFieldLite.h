@interface FavoritesItemDataFieldLite : NSObject
{
    int _dataType; // +0x8
    unsigned long long _thumbSize; // +0x10
    NSString * _thumbMd5; // +0x18
    NSString * _cdnThumbUrl; // +0x20
    NSString * _cdnThumbKey; // +0x28
    unsigned long long _dataSize; // +0x30
    NSString * _dataMd5; // +0x38
    NSString * _cdnDataUrl; // +0x40
    NSString * _cdnDataKey; // +0x48
    NSString * _streamWebUrl; // +0x50
    NSString * _dataId; // +0x58
    NSString * _dataFmt; // +0x60
}
+ (id)liteFromDataField:(id)arg1;
- (unsigned long long)thumbSize;
- (void)setThumbSize:(unsigned long long)arg1;
- (id)thumbMd5;
- (void)setThumbMd5:(id)arg1;
- (id)cdnThumbUrl;
- (void)setCdnThumbUrl:(id)arg1;
- (id)cdnThumbKey;
- (void)setCdnThumbKey:(id)arg1;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (id)dataMd5;
- (void)setDataMd5:(id)arg1;
- (id)cdnDataUrl;
- (void)setCdnDataUrl:(id)arg1;
- (id)cdnDataKey;
- (void)setCdnDataKey:(id)arg1;
- (id)streamWebUrl;
- (void)setStreamWebUrl:(id)arg1;
- (id)dataId;
- (void)setDataId:(id)arg1;
- (int)dataType;
- (void)setDataType:(int)arg1;
- (id)dataFmt;
- (void)setDataFmt:(id)arg1;
- (void).cxx_destruct;
@end
