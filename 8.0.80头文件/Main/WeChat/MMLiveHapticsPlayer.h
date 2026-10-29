@interface MMLiveHapticsPlayer : NSObject
+ (BOOL)hapticsSupported;
- (id)init;
- (void)anticipatePlayingWithinTimeInterval:(double)arg1;
- (void)playPattern:(id)arg1;
- (void)playPatternInFile:(id)arg1;
@end
