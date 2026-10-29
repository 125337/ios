@interface FCBetaContactSearchFilter : NSObject
{
    long long _requireStatus; // +0x8
    NSArray * _tagFilters; // +0x10
    NSArray * _addSceneFilters; // +0x18
    double _addTimeStart; // +0x20
    double _addTimeEnd; // +0x28
    NSArray * _regionFilters; // +0x30
    long long _genderFilter; // +0x38
}
- (BOOL)hasAnyFilter;
- (long long)requireStatus;
- (void)setRequireStatus:(long long)arg1;
- (id)tagFilters;
- (void)setTagFilters:(id)arg1;
- (id)addSceneFilters;
- (void)setAddSceneFilters:(id)arg1;
- (double)addTimeStart;
- (void)setAddTimeStart:(double)arg1;
- (double)addTimeEnd;
- (void)setAddTimeEnd:(double)arg1;
- (id)regionFilters;
- (void)setRegionFilters:(id)arg1;
- (long long)genderFilter;
- (void)setGenderFilter:(long long)arg1;
- (void).cxx_destruct;
@end
