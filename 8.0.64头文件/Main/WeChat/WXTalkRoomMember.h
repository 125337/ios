@interface WXTalkRoomMember : NSObject
{
    unsigned int memberId; // +0x8
    NSString * username; // +0x10
}
- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)memberId;
- (void)setMemberId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
