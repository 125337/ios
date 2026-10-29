@interface WCFinderContactNameHeadInfo : NSObject
{
    int _type; // +0x8
    NSString * _name; // +0x10
    NSString * _headUrl; // +0x18
    NSString * _username; // +0x20
    CContact * _contact; // +0x28
    WCFinderContact * _finderContact; // +0x30
}
+ (id)infoWithWchatContact:(id)arg1;
+ (id)infoWithFinderContact:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (void).cxx_destruct;
@end

