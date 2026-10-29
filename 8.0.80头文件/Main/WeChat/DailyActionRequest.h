@interface DailyActionRequest : NSObject
{
    NSString * _commandId; // +0x8
    DailyPlatformProto * _proto; // +0x10
}
+ (id)makeWithCommandId:(id)arg1 proto:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)commandId;
- (void)setCommandId:(id)arg1;
- (id)proto;
- (void)setProto:(id)arg1;
- (void).cxx_destruct;
@end
