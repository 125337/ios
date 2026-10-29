@interface JSWatchdog : NSObject
+ (void)setupWithTime:(double)arg1 strip:(BOOL)arg2 callback:(void * *)arg3;
+ (void)hook4Watchdog;
+ (void)setupWithCallback:(void * *)arg1;
+ (BOOL)isEnable;
+ (id)nameForVM:(OpaqueJSContextGroup *)arg1;
+ (void)setName:(id)arg1 forVM:(OpaqueJSContextGroup *)arg2;
+ (void)hook;
@end

