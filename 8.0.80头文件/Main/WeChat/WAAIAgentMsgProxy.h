@interface WAAIAgentMsgProxy : NSObject <IWAAIAgentMsgService>
+ (void)registerPendingSubAgentSheet:(id)arg1 forAppId:(id)arg2;
+ (id)consumePendingSubAgentSheetForAppId:(id)arg1;
+ (BOOL)hasPendingSubAgentSheetForAppId:(id)arg1;
+ (BOOL)isSupportAgentMiniProgramWithAppid:(id)arg1;
+ (BOOL)isSupportAgentMiniProgramWithUsername:(id)arg1;
+ (id)assistantUsernameForMiniProgram:(id)arg1;
+ (void)presentSpecializedAgentViewController:(id)arg1 withContact:(id)arg2 context:(id)arg3;
+ (void)presentSpecializedAgentViewController:(id)arg1 withContact:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
+ (void)presentSpecializedAgentViewController:(id)arg1 withContact:(id)arg2 context:(id)arg3 openAgentScene:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (void)presentSpecializedAgentViewController:(id)arg1 withContact:(id)arg2 context:(id)arg3 openAgentScene:(unsigned long long)arg4 pushCompletion:(id /* block */)arg5 contextReadyCompletion:(id /* block */)arg6;
+ (BOOL)hasActiveSpecializedAgentSessionForContact:(id)arg1;
+ (id)specializedAgentViewControllerForContact:(id)arg1;
+ (void)presentSpecializedAgentSheetForTask:(id)arg1 withContact:(id)arg2 context:(id)arg3 openAgentScene:(unsigned long long)arg4;
+ (void)dismissSpecializedAgentSheetForTask:(id)arg1;
+ (BOOL)hasActiveSpecializedAgentSheetForTask:(id)arg1;
+ (void)reattachSpecializedAgentSheetIfActiveForTask:(id)arg1;
+ (void)presentMiniToolAgentBubbleForTask:(id)arg1 withContact:(id)arg2 reappearAnimation:(BOOL)arg3;
+ (void)dismissMiniToolAgentBubbleForTask:(id)arg1;
+ (void)reattachMiniToolAgentBubbleIfActiveForTask:(id)arg1;
+ (id)miniToolAgentBubbleSessionIdForTask:(id)arg1;
+ (void)uploadScreenshotImage:(id)arg1 forContact:(id)arg2;
@end
