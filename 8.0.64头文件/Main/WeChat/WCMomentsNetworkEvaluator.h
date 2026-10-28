@interface WCMomentsNetworkEvaluator : MMUserService <INetworkStatusMgrExt, MMServiceProtocol>
{
    unsigned int _networkConnectionStatus; // +0x8
    long long _networkLinkCondition; // +0x10
}
- (id)init;
- (void)initEvaluator;
- (unsigned int)getNetworkConnectionStatus;
- (long long)getNetworkLinkCondition;
- (id)descriptionForNetworkStatus;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (unsigned int)networkConnectionStatus;
- (long long)networkLinkCondition;
@end
