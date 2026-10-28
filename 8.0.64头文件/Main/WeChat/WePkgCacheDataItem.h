@interface WePkgCacheDataItem : NSObject
{
    NSString * _pkgId; // +0x8
    NSString * _rid; // +0x10
    NSString * _mimeType; // +0x18
    NSString * _textEncodingName; // +0x20
    NSMutableArray * _extraHeaderList; // +0x28
    NSData * _data; // +0x30
}
+ (id)responseFromUrl:(id)arg1 cacheItem:(id)arg2 pkgData:(id)arg3;
- (id)getFileData;
- (id)fileNameFromRid:(id)arg1;
- (void)loadFileData:(id)arg1;
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (id)rid;
- (void)setRid:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (id)textEncodingName;
- (void)setTextEncodingName:(id)arg1;
- (id)extraHeaderList;
- (void)setExtraHeaderList:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
