@interface WAPNAuthResult : NSObject
{
    BOOL _isSuccess; // +0x8
    BOOL _needAuth; // +0x9
    long long _localErrno; // +0x10
    NSString * _errMsg; // +0x18
    NSString * _phoneNumType; // +0x20
    NSString * _requestId; // +0x28
    NSString * _encryptedData; // +0x30
    NSString * _iv; // +0x38
    NSString * _cloudId; // +0x40
    NSString * _data; // +0x48
}
+ (id)successWithPhoneInfo:(id)arg1 needAuth:(BOOL)arg2 phoneNumType:(id)arg3;
+ (id)failWithErrno:(long long)arg1 msg:(id)arg2;
- (id)toResultDic;
- (id)code;
- (id)toAutoAuthDic;
- (BOOL)isSuccess;
- (void)setIsSuccess:(BOOL)arg1;
- (long long)localErrno;
- (void)setLocalErrno:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (BOOL)needAuth;
- (void)setNeedAuth:(BOOL)arg1;
- (id)phoneNumType;
- (void)setPhoneNumType:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)encryptedData;
- (void)setEncryptedData:(id)arg1;
- (id)iv;
- (void)setIv:(id)arg1;
- (id)cloudId;
- (void)setCloudId:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
