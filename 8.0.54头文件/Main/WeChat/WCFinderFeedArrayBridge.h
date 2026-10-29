@interface WCFinderFeedArrayBridge : NSObject
{
    BOOL _modifying; // +0x8
    NSHashTable * _targetArrays; // +0x10
}
- (id)init;
- (void)recardFeedArray:(id)arg1;
- (void)onFeedArrayChanged:(id)arg1;
- (void)applyChange:(id)arg1 target:(id)arg2;
- (BOOL)modifying;
- (void)setModifying:(BOOL)arg1;
- (id)targetArrays;
- (void)setTargetArrays:(id)arg1;
- (void).cxx_destruct;
@end

