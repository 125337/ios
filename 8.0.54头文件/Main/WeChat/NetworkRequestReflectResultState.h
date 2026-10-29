@interface NetworkRequestReflectResultState : BaseState
{
    UIImage * frameUIImage; // +0x8
    BOOL isManual; // +0x10
    int similarityThreshold; // +0x14
    NSString * sessionId; // +0x18
    BOOL needEncrypt; // +0x20
    NSString * config; // +0x28
    int backendProtoType; // +0x30
    int changePointNum; // +0x34
    NSString * extraConfig; // +0x38
    NSString * controlConfig; // +0x40
    YtExtraOptions * extraOptions; // +0x48
    NSDictionary * extraOptionsDict; // +0x50
    NSString * _appId; // +0x58
    NSString * _secretId; // +0x60
    NSString * _secretKey; // +0x68
    NSString * _userId; // +0x70
    NSString * _resultUrl; // +0x78
}
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)enter;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (void)onReflectRequest;
- (void)onResponseHandle:(id)arg1 error:(id)arg2;
- (void)onActionReflectRequest;
- (void)checkResult:(id)arg1;
- (id)ComposePersonLiveRequestWith:(id)arg1;
- (id)ComposeReflectRequestWith:(id)arg1;
- (id)ComposeActionReflectRequestWith:(id)arg1;
- (id)imageWithImage:(id)arg1 scaledToSize:(CGSize)arg2;
- (id)CppStructToObjC:(YTDataPack)arg1;
- (id)getBase64BestImage:(YTFullPack)arg1;
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

