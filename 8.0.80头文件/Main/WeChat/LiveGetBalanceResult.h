@interface LiveGetBalanceResult : NSObject
{
    NSNumber * _number; // +0x8
    NSNumber * _success; // +0x10
}
+ (id)makeWithNumber:(id)arg1 success:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)number;
- (void)setNumber:(id)arg1;
- (id)success;
- (void)setSuccess:(id)arg1;
- (void).cxx_destruct;
@end
