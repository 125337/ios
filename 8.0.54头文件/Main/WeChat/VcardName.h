@interface VcardName : NSObject
{
    NSString * _firstName; // +0x8
    NSString * _middleName; // +0x10
    NSString * _lastName; // +0x18
}
+ (BOOL)isValidName:(id)arg1;
+ (BOOL)isChineseName:(id)arg1;
- (void)print;
- (id)firstName;
- (void)setFirstName:(id)arg1;
- (id)middleName;
- (void)setMiddleName:(id)arg1;
- (id)lastName;
- (void)setLastName:(id)arg1;
- (void).cxx_destruct;
@end

