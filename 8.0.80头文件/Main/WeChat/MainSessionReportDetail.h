@interface MainSessionReportDetail : NSObject <YYModel>
{
    NSString * _username; // +0x8
    unsigned long long _msgTime; // +0x10
    long long _position; // +0x18
    long long _subPos; // +0x20
    long long _unreadCount; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)msgTime;
- (void)setMsgTime:(unsigned long long)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (long long)subPos;
- (void)setSubPos:(long long)arg1;
- (long long)unreadCount;
- (void)setUnreadCount:(long long)arg1;
- (void).cxx_destruct;
@end
