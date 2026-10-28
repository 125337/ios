@interface TPIOSHeadphoneManagerImpl : NSObject <ITPHeadphoneManagerImpl>
{
    BOOL _initialized; // +0x8
    NSMutableArray * _delegateArray; // +0x10
}
- (id)init;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)startInternal;
- (void)stopInternal;
- (void)audioRouteDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (BOOL)headphoneOn;
- (id)delegateArray;
- (void)setDelegateArray:(id)arg1;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
