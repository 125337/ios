@interface FlutterMusicPlayerApiImplementaion : NSObject <MusicPlayerApi, MMFlutterPlugin>
{
    unsigned long long _uiStyle; // +0x8
}
+ (long long)flutterValueFromState:(unsigned long long)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (id)playerManager;
- (id)getCurrentMusicWithError:(id *)arg1;
- (void)playInfo:(id)arg1 error:(id *)arg2;
- (void)pauseWithError:(id *)arg1;
- (void)resumeWithError:(id *)arg1;
- (void)stopWithError:(id *)arg1;
- (void)seekTimeMs:(id)arg1 error:(id *)arg2;
- (id)getCurrentPositionWithError:(id *)arg1;
- (id)getDurationWithError:(id *)arg1;
- (id)getHistoryWithError:(id *)arg1;
- (void)clearHistoryWithError:(id *)arg1;
- (id)canPlayMusicWithError:(id *)arg1;
- (id)getCurrentStateWithError:(id *)arg1;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
@end
