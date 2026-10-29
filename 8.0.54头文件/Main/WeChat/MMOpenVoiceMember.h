@interface MMOpenVoiceMember : NSObject
{
    int memberId; // +0x8
    NSString * openId; // +0x10
    unsigned int status; // +0x18
}
- (id)openId;
- (void)setOpenId:(id)arg1;
- (int)memberId;
- (void)setMemberId:(int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

