@interface FunctionNewXml : NSObject <PBCoding>
{
    unsigned int _cmdid; // +0x8
    unsigned int _opType; // +0xc
    unsigned int _createTime; // +0x10
    unsigned int _retryCount; // +0x14
    unsigned int _maxRetryCount; // +0x18
    unsigned int _retryInterval; // +0x1c
    unsigned int _reportid; // +0x20
    unsigned int _successkey; // +0x24
    unsigned int _failKey; // +0x28
    unsigned int _finalFailKey; // +0x2c
    unsigned int _nextRetryTime; // +0x30
    NSString * _cgiName; // +0x38
    NSString * _cgiPath; // +0x40
    NSString * _functionMsgId; // +0x48
    unsigned long long _version; // +0x50
    unsigned long long _businessId; // +0x58
    NSString * _customBuff; // +0x60
    NSData * _businessBuff; // +0x68
}
+ (void)PBArrayAdd_cmdid;
+ (void)PBArrayAdd_opType;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_retryInterval;
+ (void)PBArrayAdd_reportid;
+ (void)PBArrayAdd_successkey;
+ (void)PBArrayAdd_failKey;
+ (void)PBArrayAdd_finalFailKey;
+ (void)PBArrayAdd_nextRetryTime;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_functionMsgId;
+ (void)PBArrayAdd_cgiName;
+ (void)PBArrayAdd_cgiPath;
+ (void)PBArrayAdd_customBuff;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_businessId;
+ (void)PBArrayAdd_maxRetryCount;
+ (void)PBArrayAdd_businessBuff;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)cgiName;
- (void)setCgiName:(id)arg1;
- (id)cgiPath;
- (void)setCgiPath:(id)arg1;
- (unsigned int)cmdid;
- (void)setCmdid:(unsigned int)arg1;
- (id)functionMsgId;
- (void)setFunctionMsgId:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)businessId;
- (void)setBusinessId:(unsigned long long)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (id)customBuff;
- (void)setCustomBuff:(id)arg1;
- (id)businessBuff;
- (void)setBusinessBuff:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (unsigned int)maxRetryCount;
- (void)setMaxRetryCount:(unsigned int)arg1;
- (unsigned int)retryInterval;
- (void)setRetryInterval:(unsigned int)arg1;
- (unsigned int)reportid;
- (void)setReportid:(unsigned int)arg1;
- (unsigned int)successkey;
- (void)setSuccesskey:(unsigned int)arg1;
- (unsigned int)failKey;
- (void)setFailKey:(unsigned int)arg1;
- (unsigned int)finalFailKey;
- (void)setFinalFailKey:(unsigned int)arg1;
- (unsigned int)nextRetryTime;
- (void)setNextRetryTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
