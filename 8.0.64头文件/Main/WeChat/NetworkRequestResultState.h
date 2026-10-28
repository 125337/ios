@interface NetworkRequestResultState : BaseState
{
    UIImage * frameUIImage; // +0x8
    int finalConfidenceThreshold; // +0x10
    BOOL isManual; // +0x14
    int similarityThreshold; // +0x18
    NSDictionary * requestOptions; // +0x20
    int backendProtoType; // +0x28
    YtExtraOptions * extraOptions; // +0x30
    NSString * controlConfig; // +0x38
    NSString * _appId; // +0x40
    NSString * _secretId; // +0x48
    NSString * _secretKey; // +0x50
    NSString * _userId; // +0x58
    NSString * _resultUrl; // +0x60
}
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)enter;
- (void)handleEvent:(id)arg1;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (void)onSilentRequest;
- (void)onActionRequest;
- (void)onResponseHandle:(id)arg1 error:(id)arg2;
- (void)checkResult:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)secretId;
- (void)setSecretId:(id)arg1;
- (id)secretKey;
- (void)setSecretKey:(id)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (id)resultUrl;
- (void)setResultUrl:(id)arg1;
- (void).cxx_destruct;
@end
