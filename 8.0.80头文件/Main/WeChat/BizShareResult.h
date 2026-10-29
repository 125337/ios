@interface BizShareResult : NSObject
{
    NSNumber * _totalCount; // +0x8
    NSNumber * _successCount; // +0x10
}
+ (id)makeWithTotalCount:(id)arg1 successCount:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)totalCount;
- (void)setTotalCount:(id)arg1;
- (id)successCount;
- (void)setSuccessCount:(id)arg1;
- (void).cxx_destruct;
@end
