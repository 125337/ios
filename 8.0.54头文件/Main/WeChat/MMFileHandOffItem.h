@interface MMFileHandOffItem : MMHandOffItem <YYModel, NSCopying>
{
    unsigned int _sdkversion; // +0x30
    NSString * _filetype; // +0x38
    NSString * _md5; // +0x40
    unsigned long long _size; // +0x48
    long long _source; // +0x50
    long long _id; // +0x58
    NSString * _extid; // +0x60
    NSString * _cdnurl; // +0x68
    NSString * _aeskey; // +0x70
    NSString * _authkey; // +0x78
    long long _filestatus; // +0x80
    NSString * _appid; // +0x88
    NSString * _mediaid; // +0x90
    CMessageWrap * _messageWrap; // +0x98
}
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initFromMinimizeTaskData:(id)arg1;
- (id)getChatName;
- (id)getMessageWrap;
- (id)messageWrap;
- (BOOL)canUpload;
- (id)getFilePath;
- (id)getRecordClientMsgID;
- (id)filetype;
- (void)setFiletype:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (long long)id;
- (void)setId:(long long)arg1;
- (id)extid;
- (void)setExtid:(id)arg1;
- (id)cdnurl;
- (void)setCdnurl:(id)arg1;
- (id)aeskey;
- (void)setAeskey:(id)arg1;
- (id)authkey;
- (void)setAuthkey:(id)arg1;
- (long long)filestatus;
- (void)setFilestatus:(long long)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)sdkversion;
- (void)setSdkversion:(unsigned int)arg1;
- (id)mediaid;
- (void)setMediaid:(id)arg1;
- (void)setMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end

