@interface MultiTalkConfSDKMemberQuality : NSObject
{
    unsigned int memberId; // +0x8
    unsigned int quality; // +0xc
    NSString * userName; // +0x10
}
- (unsigned int)memberId;
- (void)setMemberId:(unsigned int)arg1;
- (unsigned int)quality;
- (void)setQuality:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void).cxx_destruct;
@end

