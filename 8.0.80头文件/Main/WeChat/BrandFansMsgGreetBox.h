@interface BrandFansMsgGreetBox : NSObject
{
    unsigned int _timestamp; // +0x8
    NSString * _digest; // +0x10
    unsigned long long _unreadCount; // +0x18
}
- (id)init;
- (id)digest;
- (void)setDigest:(id)arg1;
- (unsigned int)timestamp;
- (void)setTimestamp:(unsigned int)arg1;
- (unsigned long long)unreadCount;
- (void)setUnreadCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
