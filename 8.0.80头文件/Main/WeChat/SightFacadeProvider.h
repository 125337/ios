@interface SightFacadeProvider : NSObject
{
    unsigned long long _currentMode; // +0x8
    SightFacade * _currentInstance; // +0x10
}
+ (id)sharedProvider;
- (id)init;
- (void)setupForMode:(unsigned long long)arg1;
- (id)getCurrentFacade;
- (void)resetProvider;
- (unsigned long long)currentMode;
- (void)setCurrentMode:(unsigned long long)arg1;
- (id)currentInstance;
- (void)setCurrentInstance:(id)arg1;
- (void).cxx_destruct;
@end
