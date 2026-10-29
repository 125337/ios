@interface CommonMessageViewModelExtTarget : NSObject <IMsgRevokeExt>
{
    id <CommonMessageViewModelExtTargetDelegate> _delegate; // +0x8
}
- (id)init;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
