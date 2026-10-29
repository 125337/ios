@interface MMFinderLivePkTaskedBonusTaskItem : NSObject
{
    unsigned long long _target; // +0x8
    unsigned long long _current; // +0x10
    NSString * _targetGiftId; // +0x18
}
- (unsigned long long)target;
- (void)setTarget:(unsigned long long)arg1;
- (unsigned long long)current;
- (void)setCurrent:(unsigned long long)arg1;
- (id)targetGiftId;
- (void)setTargetGiftId:(id)arg1;
- (void).cxx_destruct;
@end
