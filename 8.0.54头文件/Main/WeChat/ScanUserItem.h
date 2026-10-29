@interface ScanUserItem : NSObject <NSCoding>
{
    NSString * _username; // +0x8
    NSString * _nickname; // +0x10
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (void).cxx_destruct;
@end

