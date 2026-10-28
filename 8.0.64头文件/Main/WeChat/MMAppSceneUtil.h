@interface MMAppSceneUtil : NSObject
+ (BOOL)isMultiSceneSupported;
+ (BOOL)isSubSceneActive;
+ (BOOL)isMainSceneActive;
+ (BOOL)isShowInSubScene:(id)arg1;
+ (id)mainWindowScene;
+ (id)subWindowScene;
+ (id)lastActiveWindowScene;
+ (id)lastActiveSceneRootWindow;
+ (BOOL)isMainScene:(id)arg1;
+ (BOOL)isExternalDisplayConnected;
+ (BOOL)isMainSceneInExternalDisplay;
+ (BOOL)isiPadLayoutScene:(id)arg1;
@end
