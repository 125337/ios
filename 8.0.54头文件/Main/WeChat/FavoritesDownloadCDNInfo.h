@interface FavoritesDownloadCDNInfo : NSObject
{
    BOOL _isThumb; // +0x8
    unsigned int _localItemId; // +0xc
    int _dataType; // +0x10
    NSString * _favItemChectId; // +0x18
    NSString * _localDataID; // +0x20
    unsigned long long _size; // +0x28
    NSString * _cdnUrl; // +0x30
    NSString * _cdnKey; // +0x38
    NSString * _md5; // +0x40
    NSString * _head256Md5; // +0x48
    NSString * _dataFmt; // +0x50
    NSString * _streamWebUrl; // +0x58
}
+ (id)CreatFavDownloadCDNInfoForData:(id)arg1 inFavItem:(id)arg2 isThumb:(BOOL)arg3;
- (unsigned int)localItemId;
- (void)setLocalItemId:(unsigned int)arg1;
- (id)favItemChectId;
- (void)setFavItemChectId:(id)arg1;
- (id)localDataID;
- (void)setLocalDataID:(id)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)cdnKey;
- (void)setCdnKey:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)head256Md5;
- (void)setHead256Md5:(id)arg1;
- (BOOL)isThumb;
- (void)setIsThumb:(BOOL)arg1;
- (int)dataType;
- (void)setDataType:(int)arg1;
- (id)dataFmt;
- (void)setDataFmt:(id)arg1;
- (id)streamWebUrl;
- (void)setStreamWebUrl:(id)arg1;
- (void).cxx_destruct;
@end

