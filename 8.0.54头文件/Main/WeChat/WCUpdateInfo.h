@interface WCUpdateInfo : NSObject
{
    unsigned int _NewClientVersion; // +0x8
    unsigned int _LogLevel; // +0xc
    UUIDInfo * _uuidInfo; // +0x10
    NSString * _pid; // +0x18
    NSString * _minIOSVersion; // +0x20
    NSString * _maxIOSVersion; // +0x28
}
- (id)uuidInfo;
- (void)setUuidInfo:(id)arg1;
- (unsigned int)NewClientVersion;
- (void)setNewClientVersion:(unsigned int)arg1;
- (unsigned int)LogLevel;
- (void)setLogLevel:(unsigned int)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (id)minIOSVersion;
- (void)setMinIOSVersion:(id)arg1;
- (id)maxIOSVersion;
- (void)setMaxIOSVersion:(id)arg1;
- (void).cxx_destruct;
@end

