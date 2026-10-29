@interface SnsFlutterSelectContactAndLabelRsp : NSObject
{
    BOOL _result; // +0x8
    NSArray * _contactList; // +0x10
    NSArray * _labelList; // +0x18
    NSArray * _excludeContactList; // +0x20
}
+ (id)makeWithResult:(BOOL)arg1 contactList:(id)arg2 labelList:(id)arg3 excludeContactList:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)result;
- (void)setResult:(BOOL)arg1;
- (id)contactList;
- (void)setContactList:(id)arg1;
- (id)labelList;
- (void)setLabelList:(id)arg1;
- (id)excludeContactList;
- (void)setExcludeContactList:(id)arg1;
- (void).cxx_destruct;
@end
