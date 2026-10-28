@interface MainFrameExposeDetailInfo : NSObject <YYModel>
{
    NSString * _username; // +0x8
    long long _unreadCount; // +0x10
    long long _mute; // +0x18
    unsigned long long _msgTime; // +0x20
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)unreadCount;
- (void)setUnreadCount:(long long)arg1;
- (long long)mute;
- (void)setMute:(long long)arg1;
- (unsigned long long)msgTime;
- (void)setMsgTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
