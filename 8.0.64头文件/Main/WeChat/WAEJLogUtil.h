@interface WAEJLogUtil : NSObject
+ (void)addDelegate:(id)arg1;
+ (void)removeDelegate;
+ (void)innerLog:(const char *)arg1 line:(int)arg2 level:(int)arg3 format:(id)arg4;
+ (void)systemLog:(const char *)arg1 line:(int)arg2 format:(id)arg3 argList:(char *)arg4;
+ (void)systemLog:(const char *)arg1 line:(int)arg2 format:(id)arg3;
+ (void)logGLError:(int)arg1 name:(id)arg2;
@end
