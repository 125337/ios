@interface CaraJoinLiveQualityProphetContext : NSObject <CaraNativeJoinLiveQualityProphetContextBase>
{
    int _videoQuality; // +0x8
    int _networkQuality; // +0xc
    int _scene; // +0x10
    NSString * _liveID; // +0x18
}
- (id)initWithLiveID:(id)arg1 videoQuality:(int)arg2 networkQuality:(int)arg3 scene:(int)arg4;
- (id)zidl;
- (int)videoQuality;
- (int)networkQuality;
- (id)liveID;
- (int)scene;
- (void).cxx_destruct;
@end
