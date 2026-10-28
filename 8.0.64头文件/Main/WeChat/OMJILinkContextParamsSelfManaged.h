@interface OMJILinkContextParamsSelfManaged : NSObject
{
    BOOL _useDebugServer; // +0x8
    unsigned long long _sessionModuleType; // +0x10
    NSString * _debugServerIP; // +0x18
}
- (id)initWithSessionModuleType:(unsigned long long)arg1 useDebugServer:(BOOL)arg2 debugServerIP:(id)arg3;
- (unsigned long long)sessionModuleType;
- (BOOL)useDebugServer;
- (id)debugServerIP;
- (void).cxx_destruct;
@end
