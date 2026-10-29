@interface NewLifeCommonRouter : NSObject
+ (BOOL)routeProfileWithParameter:(id)arg1 fromNavigationController:(id)arg2;
+ (BOOL)routeDetailWithFinderShareItem:(id)arg1 fromViewController:(id)arg2;
+ (BOOL)routeDetailWithFinderShareItem:(id)arg1 entryScene:(unsigned long long)arg2 fromViewController:(id)arg3;
+ (BOOL)routeDetailWithFinderShareItem:(id)arg1 entryScene:(unsigned long long)arg2 transitionView:(id)arg3 fromViewController:(id)arg4;
+ (BOOL)routeDetailWithFinderShareItem:(id)arg1 entryScene:(unsigned long long)arg2 transitionManager:(id)arg3 fromViewController:(id)arg4;
+ (BOOL)routeDetailWithShareItem:(id)arg1 entryScene:(unsigned long long)arg2 shareProtocol:(id)arg3 fromViewController:(id)arg4;
+ (BOOL)routeDetailWithParamter:(id)arg1 fromViewController:(id)arg2;
+ (BOOL)routeDetailWithParamter:(id)arg1 fromViewController:(id)arg2 completion:(id /* block */)arg3;
+ (id)preloadDetailWithParameter:(id)arg1;
+ (BOOL)routeCreateFinderContactFromViewController:(id)arg1 delegate:(id)arg2 reqInfo:(id)arg3;
+ (unsigned int)transferSourceToUserType:(unsigned int)arg1;
+ (BOOL)routePrivateContentWithParameter:(id)arg1 fromNavigationController:(id)arg2;
+ (void)appendFlutterDefaultArguments:(id)arg1;
@end

