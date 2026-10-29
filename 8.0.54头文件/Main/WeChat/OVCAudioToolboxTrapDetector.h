@interface OVCAudioToolboxTrapDetector : NSObject
+ (void)initialize;
+ (void)enable;
+ (void)disable;
+ (BOOL)didCrashDuringPreviousExecution;
@end

