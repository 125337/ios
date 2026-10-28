@interface WCFinderJumpMainTabHelper : NSObject
+ (void)jumpMainMsgListTabFromVC:(id)arg1 contact:(id)arg2 setupsnaptureVCNav:(id /* block */)arg3 complete:(id /* block */)arg4;
+ (void)pushVCThenJumpToFindTab:(id)arg1 currentNav:(id)arg2 complete:(id /* block */)arg3;
+ (void)moveToRootViewControllerForIndex:(long long)arg1 completion:(id /* block */)arg2;
@end
