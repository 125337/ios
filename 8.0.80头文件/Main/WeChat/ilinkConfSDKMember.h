@interface ilinkConfSDKMember : NSObject
{
    int _memberId; // +0x8
    unsigned int _flags; // +0xc
    NSString * _userName; // +0x10
    NSString * _callerName; // +0x18
}
- (BOOL)isNotInWxGroup;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)callerName;
- (void)setCallerName:(id)arg1;
- (int)memberId;
- (void)setMemberId:(int)arg1;
- (unsigned int)flags;
- (void)setFlags:(unsigned int)arg1;
- (void).cxx_destruct;
@end
