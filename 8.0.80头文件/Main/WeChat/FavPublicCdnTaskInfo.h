@interface FavPublicCdnTaskInfo : NSObject
{
    int _retryCount; // +0x8
    int _dataType; // +0xc
    unsigned long long _size; // +0x10
    NSString * _md5; // +0x18
    NSString * _cdnUrl; // +0x20
    NSString * _cdnKey; // +0x28
    NSString * _streamWebUrl; // +0x30
    NSString * _localDataID; // +0x38
    NSString * _dataFmt; // +0x40
    NSString * _htmlId; // +0x48
    NSString * _targetLocalPath; // +0x50
    id /* block */ _completion; // +0x58
}
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)cdnKey;
- (void)setCdnKey:(id)arg1;
- (id)streamWebUrl;
- (void)setStreamWebUrl:(id)arg1;
- (id)localDataID;
- (void)setLocalDataID:(id)arg1;
- (int)dataType;
- (void)setDataType:(int)arg1;
- (id)dataFmt;
- (void)setDataFmt:(id)arg1;
- (id)htmlId;
- (void)setHtmlId:(id)arg1;
- (id)targetLocalPath;
- (void)setTargetLocalPath:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
