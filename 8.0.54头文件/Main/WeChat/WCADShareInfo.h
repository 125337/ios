@interface WCADShareInfo : NSObject
{
    NSString * userName; // +0x8
    unsigned int memberCount; // +0x10
}
- (id)init;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)memberCount;
- (void)setMemberCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

