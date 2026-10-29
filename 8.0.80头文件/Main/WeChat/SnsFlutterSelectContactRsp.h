@interface SnsFlutterSelectContactRsp : NSObject
{
    BOOL _result; // +0x8
    NSArray * _contactList; // +0x10
}
+ (id)makeWithResult:(BOOL)arg1 contactList:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)result;
- (void)setResult:(BOOL)arg1;
- (id)contactList;
- (void)setContactList:(id)arg1;
- (void).cxx_destruct;
@end
