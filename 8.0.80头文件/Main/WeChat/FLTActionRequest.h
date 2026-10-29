@interface FLTActionRequest : NSObject
{
    NSString * _cmdId; // +0x8
    FLTPlatformProto * _proto; // +0x10
}
+ (id)makeWithCmdId:(id)arg1 proto:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)cmdId;
- (void)setCmdId:(id)arg1;
- (id)proto;
- (void)setProto:(id)arg1;
- (void).cxx_destruct;
@end
