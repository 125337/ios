@interface FunctionCallBetaCallBack : FunctionCallBack
{
    FunctionCallBack * _originCallBack; // +0x8
}
- (id)initWithOriginCallBack:(id)arg1;
- (void)notifyTaskFinish:(id)arg1;
- (id)originCallBack;
- (void)setOriginCallBack:(id)arg1;
- (void).cxx_destruct;
@end
