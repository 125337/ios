@interface BrsOpenResult : NSObject
{
    NSNumber * _success; // +0x8
    NSString * _errMsg; // +0x10
}
+ (id)makeWithSuccess:(id)arg1 errMsg:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)success;
- (void)setSuccess:(id)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (void).cxx_destruct;
@end
