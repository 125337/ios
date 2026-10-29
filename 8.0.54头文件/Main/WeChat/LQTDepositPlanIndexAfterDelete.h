@interface LQTDepositPlanIndexAfterDelete : NSObject <WCPayLQTDepositPlanIndexCgiDelegate>
{
    id <LQTDepositPlanIndexAfterDeleteDelegate> _delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)onWCPayLQTDepositPlanIndexCgiResponseOK:(id)arg1 fromServer:(BOOL)arg2;
- (void)onWCPayLQTDepositPlanIndexCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

