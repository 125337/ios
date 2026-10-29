@interface WxpayHostConfiguration : NSObject <NSCopying>
{
    BOOL _sceneInspectorAllowed; // +0x8
    unsigned int _clientVersion; // +0xc
    NSString * _engineRoot; // +0x10
    NSString * _buildType; // +0x18
    long long _channelId; // +0x20
}
- (id)initWithEngineRoot:(id)arg1;
- (id)initWithEngineRoot:(id)arg1 sceneInspectorAllowed:(BOOL)arg2;
- (id)initWithEngineRoot:(id)arg1 sceneInspectorAllowed:(BOOL)arg2 buildType:(id)arg3 channelId:(long long)arg4;
- (id)initWithEngineRoot:(id)arg1 sceneInspectorAllowed:(BOOL)arg2 buildType:(id)arg3 channelId:(long long)arg4 clientVersion:(unsigned int)arg5;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)engineRoot;
- (void)setEngineRoot:(id)arg1;
- (BOOL)sceneInspectorAllowed;
- (void)setSceneInspectorAllowed:(BOOL)arg1;
- (id)buildType;
- (long long)channelId;
- (unsigned int)clientVersion;
- (void).cxx_destruct;
@end
