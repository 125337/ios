@interface MMImageDetectMediaInfo : MMObject
{
    BOOL _mayUseCDNCache; // +0x8
    BOOL _isReuploadFileOK; // +0x9
    BOOL _isCdnCacheExpired; // +0xa
    unsigned int _encodeIdx; // +0xc
    NSString * _clientMsgID; // +0x10
    NSString * _snsFileUrl; // +0x18
    NSString * _snsToken; // +0x20
    unsigned long long _encodeKey; // +0x28
    NSString * _forwardFileID; // +0x30
    NSString * _forwardAesKey; // +0x38
    NSString * _reuplodFileID; // +0x40
    NSString * _reuploadAaesKey; // +0x48
    NSString * _hdFilePath; // +0x50
    NSString * _middleFilePath; // +0x58
    NSString * _reuploadFilePath; // +0x60
}
- (id)generateChatImageInfoList;
- (id)generateSnsImageInfoList;
- (id)generateFileImageInfoList;
- (id)clientMsgID;
- (void)setClientMsgID:(id)arg1;
- (id)snsFileUrl;
- (void)setSnsFileUrl:(id)arg1;
- (id)snsToken;
- (void)setSnsToken:(id)arg1;
- (unsigned int)encodeIdx;
- (void)setEncodeIdx:(unsigned int)arg1;
- (unsigned long long)encodeKey;
- (void)setEncodeKey:(unsigned long long)arg1;
- (BOOL)mayUseCDNCache;
- (void)setMayUseCDNCache:(BOOL)arg1;
- (BOOL)isReuploadFileOK;
- (void)setIsReuploadFileOK:(BOOL)arg1;
- (BOOL)isCdnCacheExpired;
- (void)setIsCdnCacheExpired:(BOOL)arg1;
- (id)forwardFileID;
- (void)setForwardFileID:(id)arg1;
- (id)forwardAesKey;
- (void)setForwardAesKey:(id)arg1;
- (id)reuplodFileID;
- (void)setReuplodFileID:(id)arg1;
- (id)reuploadAaesKey;
- (void)setReuploadAaesKey:(id)arg1;
- (id)hdFilePath;
- (void)setHdFilePath:(id)arg1;
- (id)middleFilePath;
- (void)setMiddleFilePath:(id)arg1;
- (id)reuploadFilePath;
- (void)setReuploadFilePath:(id)arg1;
- (void).cxx_destruct;
@end
