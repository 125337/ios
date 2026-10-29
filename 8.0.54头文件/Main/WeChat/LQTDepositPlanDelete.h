@interface LQTDepositPlanDelete : NSObject <WCPayLQTDepositManagePlanCgiDelegate>
{
    id <LQTDepositPlanDeleteDelegate> _delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)onWCPayLQTDepositManagePlanCgiResponseOK:(id)arg1;
- (void)onWCPayLQTDepositManagePlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

