@interface WAOpenSDKJSEventHandler_BaseEvent : NSObject
{
    NSString * _transitiveData; // +0x8
    WAOpenSDKJSEventHandlerContext * _context; // +0x10
    id <WAOpenSDKJSEventHandlerDelegate> _delegate; // +0x18
    long long _resultType; // +0x20
}
+ (id)getResultDic:(id)arg1 dic:(id)arg2;
- (void)handleJSEvent:(id)arg1;
- (void)endWithSuccess:(id)arg1;
- (void)endWithErrMsg:(id)arg1;
- (void)endWithErrMsg:(id)arg1 dic:(id)arg2;
- (void)endWithCancel;
- (void)endWithCancel:(id)arg1;
- (void)endWithMsg:(id)arg1 dic:(id)arg2;
- (void)endWithResult:(id)arg1;
- (void)sendQRMsg:(id)arg1 result:(id)arg2 qrState:(long long)arg3;
- (id)transitiveData;
- (void)setTransitiveData:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)resultType;
- (void)setResultType:(long long)arg1;
- (void).cxx_destruct;
@end

