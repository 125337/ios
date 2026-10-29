@interface CRChannelReportInfo : NSObject
{
    NSString * _channel; // +0x8
    NSString * _channelVersion; // +0x10
    long long _sceneID; // +0x18
    NSString * _uinType; // +0x20
    NSString * _uin; // +0x28
    NSString * _gameAppID; // +0x30
    NSString * _scenePopTime; // +0x38
    NSString * _packageID; // +0x40
    NSString * _deviceID; // +0x48
    NSString * _extra; // +0x50
    NSString * _appID; // +0x58
}
- (id)toDictionary;
- (id)description;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)channelVersion;
- (void)setChannelVersion:(id)arg1;
- (long long)sceneID;
- (void)setSceneID:(long long)arg1;
- (id)uinType;
- (void)setUinType:(id)arg1;
- (id)uin;
- (void)setUin:(id)arg1;
- (id)gameAppID;
- (void)setGameAppID:(id)arg1;
- (id)scenePopTime;
- (void)setScenePopTime:(id)arg1;
- (id)packageID;
- (void)setPackageID:(id)arg1;
- (id)deviceID;
- (void)setDeviceID:(id)arg1;
- (id)extra;
- (void)setExtra:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (void).cxx_destruct;
@end
