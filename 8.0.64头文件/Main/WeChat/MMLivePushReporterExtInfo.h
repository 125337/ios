@interface MMLivePushReporterExtInfo : NSObject
{
    unsigned int _sdkRoomId; // +0x8
    unsigned long long _liveId; // +0x10
    NSString * _feedId; // +0x18
    NSString * _sdkUserId; // +0x20
    NSString * _anchorNickname; // +0x28
}
- (id)initWithLiveId:(unsigned long long)arg1 feedId:(id)arg2 sdkUserId:(id)arg3 sdkRoomId:(unsigned int)arg4 andAnchorNickname:(id)arg5;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (unsigned int)sdkRoomId;
- (void)setSdkRoomId:(unsigned int)arg1;
- (id)anchorNickname;
- (void)setAnchorNickname:(id)arg1;
- (void).cxx_destruct;
@end
