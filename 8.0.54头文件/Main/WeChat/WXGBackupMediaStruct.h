@interface WXGBackupMediaStruct : NSObject
{
    int _mediaType; // +0x8
    long long _createTime; // +0x10
    long long _msgSvrID; // +0x18
    unsigned long long _mediaSize; // +0x20
    NSString * _mediaPath; // +0x28
    NSString * _mediaID; // +0x30
    NSString * _md5; // +0x38
}
- (long long)createTime;
- (void)setCreateTime:(long long)arg1;
- (long long)msgSvrID;
- (void)setMsgSvrID:(long long)arg1;
- (unsigned long long)mediaSize;
- (void)setMediaSize:(unsigned long long)arg1;
- (id)mediaPath;
- (void)setMediaPath:(id)arg1;
- (id)mediaID;
- (void)setMediaID:(id)arg1;
- (int)mediaType;
- (void)setMediaType:(int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (void).cxx_destruct;
@end

