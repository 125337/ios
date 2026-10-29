@interface CBTXiaoweiTitleEasterEggHelper : NSObject
+ (id)xiaoweiTitleEasterEggTriggeredKey;
+ (BOOL)hasTriggeredXiaoweiTitleEasterEgg;
+ (void)markXiaoweiTitleEasterEggTriggered;
+ (BOOL)tryAcquireXiaoweiTitleEasterEggTrigger;
+ (void)clearXiaoweiTitleEasterEggFlag;
@end
