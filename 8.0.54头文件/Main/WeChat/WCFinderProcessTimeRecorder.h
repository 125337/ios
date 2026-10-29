@interface WCFinderProcessTimeRecorder : NSObject
{
    BOOL _observed; // +0x8
    unsigned long long _enterTime; // +0x10
    id /* block */ _onEnterBackground; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)setupNotifications;
- (void)removeNotifications;
- (void)onVCEnterBackground;
- (void)onVCEnterForeground;
- (unsigned long long)currentTime;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id /* block */)onEnterBackground;
- (void)setOnEnterBackground:(id /* block */)arg1;
- (BOOL)observed;
- (void)setObserved:(BOOL)arg1;
- (void).cxx_destruct;
@end

