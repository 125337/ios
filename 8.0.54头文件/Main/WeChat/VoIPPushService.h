@interface VoIPPushService : MMRootService <PKPushRegistryDelegate, MMServiceProtocol>
{
    NSData * m_token; // +0x8
    PKPushRegistry * m_tokenRetriver; // +0x10
}
- (void)registerVoIP;
- (id)voipToken;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;
- (void).cxx_destruct;
@end

