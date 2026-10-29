@interface SpamVerifyResult : NSObject
{
    BOOL _success; // +0x8
    NSString * _nextAction; // +0x10
    NSString * _errorMessage; // +0x18
}
+ (id)makeWithSuccess:(BOOL)arg1 nextAction:(id)arg2 errorMessage:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)nextAction;
- (void)setNextAction:(id)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (void).cxx_destruct;
@end
