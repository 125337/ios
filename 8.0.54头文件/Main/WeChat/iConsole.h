@interface iConsole : UIViewController <UITextFieldDelegate, WCActionSheetDelegate>
+ (void)initialize;
+ (void)doNSLog:(id)arg1;
+ (void)purelog:(id)arg1 arguments:(char *)arg2 isCommand:(BOOL)arg3;
+ (BOOL)isXcodeConsoleLogEnabled;
+ (BOOL)isNewXCLoggerEnabled;
+ (void)printLog:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 log:(id)arg6;
+ (void)logToConsoleWithColor:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 message:(id)arg7;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 format:(id)arg7;
+ (void)logToFile:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
+ (BOOL)shouldLog:(int)arg1;
+ (void)purelog:(id)arg1;
+ (BOOL)shouldEnableDebugLog;
@end

