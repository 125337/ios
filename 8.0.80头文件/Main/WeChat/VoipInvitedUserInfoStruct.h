@interface VoipInvitedUserInfoStruct : NSObject
{
    int _type; // +0x8
    NSString * _username; // +0x10
    long long _source; // +0x18
}
+ (id)initWithUserName:(id)arg1 type:(int)arg2;
+ (id)initWithUserName:(id)arg1 type:(int)arg2 source:(long long)arg3;
- (id)username;
- (void)setUsername:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (void).cxx_destruct;
@end
