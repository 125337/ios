@interface DailyActionResponse : NSObject
{
    NSString * _commandId; // +0x8
    NSNumber * _errorCode; // +0x10
    NSString * _errorMessage; // +0x18
    DailyPlatformProto * _proto; // +0x20
}
+ (id)makeWithCommandId:(id)arg1 errorCode:(id)arg2 errorMessage:(id)arg3 proto:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)commandId;
- (void)setCommandId:(id)arg1;
- (id)errorCode;
- (void)setErrorCode:(id)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)proto;
- (void)setProto:(id)arg1;
- (void).cxx_destruct;
@end
