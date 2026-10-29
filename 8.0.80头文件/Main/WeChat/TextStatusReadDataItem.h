@interface TextStatusReadDataItem : NSObject
{
    BOOL _notifyFlag; // +0x8
    BOOL _deleteFlag; // +0x9
    unsigned int _type; // +0xc
    unsigned int _createTime; // +0x10
    unsigned int _readCount; // +0x14
    unsigned int _source; // +0x18
    unsigned long long _readId; // +0x20
    NSString * _hashUsername; // +0x28
    NSString * _textStateId; // +0x30
    NSString * _nickname; // +0x38
    NSString * _headImageURL; // +0x40
    NSString * _username; // +0x48
    unsigned long long _version; // +0x50
    unsigned long long _readCountVersion; // +0x58
    NSString * _encryptUsername; // +0x60
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)description;
- (BOOL)isValid;
- (unsigned long long)readId;
- (void)setReadId:(unsigned long long)arg1;
- (id)hashUsername;
- (void)setHashUsername:(id)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (BOOL)notifyFlag;
- (void)setNotifyFlag:(BOOL)arg1;
- (BOOL)deleteFlag;
- (void)setDeleteFlag:(BOOL)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headImageURL;
- (void)setHeadImageURL:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)readCount;
- (void)setReadCount:(unsigned int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)readCountVersion;
- (void)setReadCountVersion:(unsigned long long)arg1;
- (id)encryptUsername;
- (void)setEncryptUsername:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (void).cxx_destruct;
@end
