@interface BrsBoxPlacedTopInfo : NSObject
{
    NSNumber * _enabled; // +0x8
    NSNumber * _isPlacedTop; // +0x10
}
+ (id)makeWithEnabled:(id)arg1 isPlacedTop:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)enabled;
- (void)setEnabled:(id)arg1;
- (id)isPlacedTop;
- (void)setIsPlacedTop:(id)arg1;
- (void).cxx_destruct;
@end
