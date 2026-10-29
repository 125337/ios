@interface WxpayKitPresentationCoordinator : NSObject
{
    NSMutableArray * _callStack; // +0x8
    NSMutableSet * _occludedCallIds; // +0x10
}
- (id)init;
- (BOOL)hasAnyCall;
- (void)setCall:(id)arg1 occluded:(BOOL)arg2;
- (id /* block */)wrapCompletion:(id /* block */)arg1 scene:(id)arg2 slot:(id)arg3 onKeepAlive:(id /* block */)arg4;
- (id)callWithId:(long long)arg1;
- (void)openScene:(id)arg1 params:(id)arg2 traceId:(id)arg3 parentCallId:(long long)arg4 onCreated:(id /* block */)arg5 onKeepAlive:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)attachScene:(id)arg1 params:(id)arg2 toView:(id)arg3 parentViewController:(id)arg4 traceId:(id)arg5 onCreated:(id /* block */)arg6 onKeepAlive:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)cancelCallId:(long long)arg1;
- (BOOL)hasCallId:(long long)arg1;
- (void)cancelCallIdAndAbove:(long long)arg1;
- (void)cancelAll;
- (id)callStack;
- (void)setCallStack:(id)arg1;
- (id)occludedCallIds;
- (void)setOccludedCallIds:(id)arg1;
- (void).cxx_destruct;
@end
