@interface LQTDepositPreAddPlanAfterDelete : NSObject <WCPayLQTDepositPreAddPlanCgiDelegate>
{
    id <LQTDepositPreAddPlanAfterDeleteDelegate> _delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)onWCPayLQTDepositPreAddPlanCgiReponseOK:(id)arg1;
- (void)onWCPayLQTDepositPreAddPlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
