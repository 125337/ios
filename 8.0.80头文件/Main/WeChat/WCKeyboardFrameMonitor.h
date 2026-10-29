@interface WCKeyboardFrameMonitor : NSObject
+ (BOOL)installKeyboardMonitor:(id)arg1 notifyDelegate:(id)arg2;
+ (BOOL)installKeyboardMonitor:(id)arg1 onKeyboardFrameChange:(id /* block */)arg2;
+ (BOOL)installKeyboardMonitor:(id)arg1 onKeyboardFrameChange:(id /* block */)arg2 notifyDelegate:(id)arg3;
@end
