@interface GameCenterAPI : NSObject
+ (id)getGameTabBarVcWithParams:(id)arg1 extra:(id)arg2 onCloseBlock:(id /* block */)arg3;
+ (BOOL)openGameTabHome:(id)arg1 withExtra:(id)arg2 withVC:(id)arg3 retErrorMsg:(id *)arg4;
+ (BOOL)openGameCenterView:(id)arg1 openType:(int)arg2 extInfo:(id)arg3 retErrorMsg:(id *)arg4;
+ (int)openMainPage:(id)arg1;
+ (int)openGameLibrary:(id)arg1;
+ (int)openGameDetail:(id)arg1 extInfo:(id)arg2 retErrorMsg:(id *)arg3;
+ (int)openGameMsgCenter:(id)arg1 extInfo:(id)arg2;
@end

