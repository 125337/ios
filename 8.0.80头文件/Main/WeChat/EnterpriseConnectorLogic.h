@interface EnterpriseConnectorLogic : NSObject <EnterpriseBrandContactSelectViewControllerDelegate, EnterpriseSessionSelectViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate>
{
    EnterpriseConnectorContext * _context; // +0x8
    NSString * _scopeBrand; // +0x10
    NSString * _targetBrand; // +0x18
    NSString * _targetEnterpriseChat; // +0x20
    ShareMessageConfirmLogicHelper * _jsSendAppMsgHelper; // +0x28
    JSEvent * _jsEvent; // +0x30
    id <EnterpriseConnectorLogicDelegate> delegate; // +0x38
}
- (id)initWithContextBrand:(id)arg1 contextEnterpriseChat:(id)arg2;
- (void)selectTargetInScope:(id)arg1 viewController:(id)arg2;
- (void)useContextAsTarget;
- (id)getContext;
- (void)clearTarget;
- (void)connectWithMsgWrap:(id)arg1 extraData:(id)arg2;
- (BOOL)hasEnterpriseChatContext;
- (BOOL)checkTarget;
- (void)OnEnterpriseSelectSession:(id)arg1 viewController:(id)arg2;
- (void)OnEnterpriseCancelSelectSession:(id)arg1;
- (void)onEnterpriseSelectBrandContact:(id)arg1 viewController:(id)arg2;
- (void)onEnterpriseCancelSelectBrand:(id)arg1;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(unsigned long long)arg2;
- (void)OnSendMessageCancel:(id)arg1;
- (BOOL)isSendEnterpriseChat:(id)arg1;
- (BOOL)isSendAppMessage:(id)arg1;
- (void)cancelConnect;
- (void)errorConnect;
- (void)callDelegateConnectSucceed;
- (void)callDelegateConnectFail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
