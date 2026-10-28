@interface MMFinderLiveVoteDurationPickerViewConfig : NSObject
{
    unsigned long long _minDuration; // +0x8
    unsigned long long _maxDuration; // +0x10
    unsigned long long _currentDuration; // +0x18
}
- (unsigned long long)minDuration;
- (void)setMinDuration:(unsigned long long)arg1;
- (unsigned long long)maxDuration;
- (void)setMaxDuration:(unsigned long long)arg1;
- (unsigned long long)currentDuration;
- (void)setCurrentDuration:(unsigned long long)arg1;
@end
