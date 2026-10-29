@interface WXChannelOpenEventReq : BaseReq
{
    NSString * _userName; // +0x18
    NSString * _eventId; // +0x20
    NSString * _extInfo; // +0x28
}
+ (id)object;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)eventId;
- (void)setEventId:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

