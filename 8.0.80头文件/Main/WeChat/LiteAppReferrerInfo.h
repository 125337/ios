@interface LiteAppReferrerInfo : NSObject
{
    long long _scene; // +0x8
    NSString * _sceneId; // +0x10
    NSDictionary * _extraData; // +0x18
    NSString * _scenePath; // +0x20
    NSDictionary * _innerData; // +0x28
    NSString * _snapshotInitData; // +0x30
}
- (id)init:(long long)arg1 sceneId:(id)arg2 extraData:(id)arg3;
- (id)toJSON;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)sceneId;
- (void)setSceneId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)scenePath;
- (void)setScenePath:(id)arg1;
- (id)innerData;
- (void)setInnerData:(id)arg1;
- (id)snapshotInitData;
- (void)setSnapshotInitData:(id)arg1;
- (void).cxx_destruct;
@end
