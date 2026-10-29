@interface WAAppItemOperation : MMObject <PBCoding>
{
    BOOL _excuteSync; // +0x8
    BOOL _isOperating; // +0x9
    unsigned int _appType; // +0xc
    unsigned int _opType; // +0x10
    unsigned int _retryCount; // +0x14
    unsigned int _scene; // +0x18
    unsigned int _isFromBackground; // +0x1c
    unsigned int _recordType; // +0x20
    unsigned int _reason; // +0x24
    unsigned int _commuseFlag; // +0x28
    NSString * _usrname; // +0x30
    NSString * _sessionId; // +0x38
    NSString * _appMd5Str; // +0x40
}
+ (void)PBArrayAdd_usrname;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_opType;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_isFromBackground;
+ (void)PBArrayAdd_recordType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)appMd5Str;
- (id)usrname;
- (void)setUsrname:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)isFromBackground;
- (void)setIsFromBackground:(unsigned int)arg1;
- (unsigned int)recordType;
- (void)setRecordType:(unsigned int)arg1;
- (unsigned int)reason;
- (void)setReason:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void)setAppMd5Str:(id)arg1;
- (BOOL)excuteSync;
- (void)setExcuteSync:(BOOL)arg1;
- (BOOL)isOperating;
- (void)setIsOperating:(BOOL)arg1;
- (unsigned int)commuseFlag;
- (void)setCommuseFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end
