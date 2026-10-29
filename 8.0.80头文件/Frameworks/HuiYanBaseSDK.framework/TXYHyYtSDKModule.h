@interface TXYHyYtSDKModule : NSObject
{
    BOOL _isDeInit; // +0x8
    BOOL _isInit; // +0x9
    TXYHyYtInitModel * _initModel; // +0x10
    BOOL _enterBOT; // +0x18
    BOOL _isDoingRetry; // +0x19
    id <TXYHyYtSDKModuleDelegate> _delegate; // +0x20
    long long _currentRetryCount; // +0x28
    long long _currentAction; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)resetRetryState;
- (BOOL)isCanRetry;
- (void)doRetry;
- (void)finishRetry;
- (void)deInit;
- (BOOL)isDeInit;
- (void)setPlatformError:(int)arg1 code:(int)arg2 msg:(id)arg3;
- (void)callbackToPPLWithMsg:(id)arg1;
- (void)callbackToPPLWithType:(int)arg1 msg:(id)arg2;
- (int)initYtFrameworkWithMode:(id)arg1;
- (id)createUploadVideoData:(id)arg1;
- (id)getOperationInfo;
- (void)updateWithFrameData:(void *)arg1 ciimage:(id)arg2;
- (void)saveImage:(id)arg1;
- (BOOL)setLiveData:(id)arg1 riskResult:(id)arg2 isUseBackCamera:(BOOL)arg3;
- (void)startAction:(unsigned long long)arg1;
- (void)endAction:(unsigned long long)arg1;
- (void)ytActionChanged:(unsigned long long)arg1;
- (unsigned long long)converActionType:(long long)arg1;
- (void)handleActionSwitchMessage:(id)arg1;
- (void)handleStateChangedMessage:(id)arg1;
- (void)notifyStateChangedFrom:(long long)arg1 to:(long long)arg2;
- (long long)pplErrorToHuiYanErrorCode:(id)arg1;
- (id)pplErrorToHuiYanErrorMsg:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)currentRetryCount;
- (void)setCurrentRetryCount:(long long)arg1;
- (long long)currentAction;
- (void)setCurrentAction:(long long)arg1;
- (BOOL)enterBOT;
- (void)setEnterBOT:(BOOL)arg1;
- (BOOL)isDoingRetry;
- (void)setIsDoingRetry:(BOOL)arg1;
- (void).cxx_destruct;
@end
