@interface LiteAppReferrerInfo : NSObject
{
    unsigned long long _scene; // +0x8
    NSString * _sceneId; // +0x10
    NSDictionary * _extraData; // +0x18
}
- (id)init:(unsigned long long)arg1 sceneId:(id)arg2 extraData:(id)arg3;
- (id)toJSON;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sceneId;
- (void)setSceneId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (void).cxx_destruct;
@end

