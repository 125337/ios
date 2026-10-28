@interface BizShareActionResult : NSObject
{
    NSNumber * _actionType; // +0x8
    NSNumber * _success; // +0x10
}
+ (id)makeWithActionType:(id)arg1 success:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)actionType;
- (void)setActionType:(id)arg1;
- (id)success;
- (void)setSuccess:(id)arg1;
- (void).cxx_destruct;
@end
