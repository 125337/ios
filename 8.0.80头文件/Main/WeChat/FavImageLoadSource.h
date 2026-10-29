@interface FavImageLoadSource : NSObject
{
    long long _sourceType; // +0x8
    NSString * _localPath; // +0x10
    NSString * _cdnUrl; // +0x18
    NSString * _aesKey; // +0x20
    NSString * _clientID; // +0x28
    unsigned long long _dataSize; // +0x30
}
- (long long)sourceType;
- (void)setSourceType:(long long)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
