@interface MMUIRouteRegistry : NSObject
+ (void)initWCPayRoutes;
+ (void)initSettingPageRoutes;
+ (id)makeUIRoute:(id)arg1 handler:(id /* block */)arg2 isAddPagePrefix:(BOOL)arg3;
+ (id)makeUIRoute:(id)arg1 handler:(id /* block */)arg2;
+ (id)makeUIRoute:(id)arg1 withVCClass:(Class)arg2;
+ (id)makeUIRouteWithDeepLink:(id)arg1;
+ (void)openWebview:(id)arg1 withCurViewController:(id)arg2;
+ (void)openWebview:(id)arg1 withCurViewController:(id)arg2 webviewHandler:(id /* block */)arg3;
+ (void)openMessageView:(id)arg1 curViewController:(id)arg2;
+ (id)getFindFriendEntryViewController;
+ (void)moveToFindFriendTab;
+ (void)initMeTabRoutes;
+ (void)initFinderRoutes;
+ (void)initDeepLinkRoutes;
+ (void)initContactRoutes;
+ (void)openChatBotMessaveViewWithContact:(id)arg1 curViewController:(id)arg2;
+ (void)openPlugin:(long long)arg1 onCurViewController:(id)arg2 withRouterParameters:(id)arg3;
+ (void)initAllUIRoutes;
+ (void)tryInitAllUIRoutes;
+ (BOOL)routeURL:(id)arg1;
+ (BOOL)routeURL:(id)arg1 curViewController:(id)arg2;
+ (BOOL)routeURL:(id)arg1 curViewController:(id)arg2 withParameters:(id)arg3;
+ (BOOL)canRoute:(id)arg1;
@end
