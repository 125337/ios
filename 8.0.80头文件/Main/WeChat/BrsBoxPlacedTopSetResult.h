@interface BrsBoxPlacedTopSetResult : NSObject
{
    NSNumber * _localApplied; // +0x8
    NSNumber * _actualIsTop; // +0x10
}
+ (id)makeWithLocalApplied:(id)arg1 actualIsTop:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)localApplied;
- (void)setLocalApplied:(id)arg1;
- (id)actualIsTop;
- (void)setActualIsTop:(id)arg1;
- (void).cxx_destruct;
@end
