@interface SnsPostLaunchRequest : NSObject
{
    NSString * _username; // +0x8
    NSString * _localId; // +0x10
}
+ (id)makeWithUsername:(id)arg1 localId:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (void).cxx_destruct;
@end
