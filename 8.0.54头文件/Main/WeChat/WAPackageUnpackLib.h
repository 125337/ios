@interface WAPackageUnpackLib : NSObject
{
    void * _unpackLib; // +0x8
    NSString * _appId; // +0x10
    unsigned long long _debugModeType; // +0x18
    unsigned long long _version; // +0x20
}
- (id)initWithAppId:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3;
- (id)getFileContent:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void *)unpackLib;
- (void)setUnpackLib:(void *)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)debugModeType;
- (void)setDebugModeType:(unsigned long long)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

