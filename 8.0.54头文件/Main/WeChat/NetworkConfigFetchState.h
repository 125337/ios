@interface NetworkConfigFetchState : BaseState
{
    BOOL needLocalConfig; // +0x8
    NSString * appId; // +0x10
    NSString * configUrl; // +0x18
    int changePointNum; // +0x20
    NSString * extraConfig; // +0x28
    YtExtraOptions * extraOptions; // +0x30
    NSString * controlConfig; // +0x38
    NSDictionary * selectData; // +0x40
    int backendProtoType; // +0x48
}
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)enter;
- (void)moveToNextState;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (void)handleLiveFourGetReq;
- (void)handleGetLiveTypeReq;
- (void)responseHandler:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
@end

