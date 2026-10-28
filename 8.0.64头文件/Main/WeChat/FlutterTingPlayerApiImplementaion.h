@interface FlutterTingPlayerApiImplementaion : NSObject <MusicPlayerApi, MMFlutterPlugin>
{
    int _scene; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (id)player;
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
- (int)scene;
- (void)setScene:(int)arg1;
@end
