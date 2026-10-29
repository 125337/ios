@interface BizPrivateMsgTracer : NSObject
+ (void)reportAction:(long long)arg1 context:(id)arg2;
+ (void)reportSwitchInput:(long long)arg1 context:(id)arg2;
+ (void)reportMenuClickWithMenuName:(id)arg1 subMenuName:(id)arg2 context:(id)arg3;
+ (void)emitWithContext:(id)arg1 action:(long long)arg2 switchType:(long long)arg3 menuName:(id)arg4 subMenuName:(id)arg5;
@end
