@interface TingBizAudioStateReporter : NSObject
{
    BOOL _started; // +0x8
    BOOL _appForeground; // +0x9
}
+ (id)sharedInstance;
- (id)init;
- (void)start;
- (void)dealloc;
- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)reportAppState;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (BOOL)appForeground;
- (void)setAppForeground:(BOOL)arg1;
@end
