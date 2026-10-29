@interface WCPayAADetailLiteAppHelper : NSObject
+ (BOOL)shouldOpenAADetailLiteApp;
+ (void)openAADetailLiteAppWithViewControllerDelegate:(id)arg1 billNum:(id)arg2 scene:(unsigned long long)arg3 groupid:(id)arg4 sign:(id)arg5 ver:(unsigned int)arg6 chatRoomContact:(id)arg7 messageWrap:(id)arg8 orderStatusDelegate:(id)arg9 forceJSParam:(BOOL)arg10;
+ (void)fallbackToNativeWithViewControllerDelegate:(id)arg1 billNum:(id)arg2 scene:(unsigned long long)arg3 groupid:(id)arg4 sign:(id)arg5 ver:(unsigned int)arg6 chatRoomContact:(id)arg7 messageWrap:(id)arg8 orderStatusDelegate:(id)arg9 forceJSParam:(BOOL)arg10;
@end
