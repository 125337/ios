@interface FlutterLabelInfo : NSObject
{
    long long _labelId; // +0x8
    NSString * _name; // +0x10
    NSArray * _userList; // +0x18
}
+ (id)makeWithLabelId:(long long)arg1 name:(id)arg2 userList:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)labelId;
- (void)setLabelId:(long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)userList;
- (void)setUserList:(id)arg1;
- (void).cxx_destruct;
@end
