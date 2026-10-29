@interface ilinkConfSDKMember : NSObject
{
    int _memberId; // +0x8
    NSString * _userName; // +0x10
    NSString * _callerName; // +0x18
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)callerName;
- (void)setCallerName:(id)arg1;
- (int)memberId;
- (void)setMemberId:(int)arg1;
- (void).cxx_destruct;
@end

