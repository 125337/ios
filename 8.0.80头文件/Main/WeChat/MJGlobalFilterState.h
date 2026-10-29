@interface MJGlobalFilterState : NSObject <NSCopying>
{
    BOOL _enabled; // +0x8
    float _intensity; // +0xc
    OMJID * _segmentID; // +0x10
    NSString * _filterID; // +0x18
    NSString * _options; // +0x20
}
+ (id)stateFromPolicyJSONString:(id)arg1;
- (id)init;
- (id)initWithFilter:(id)arg1 segmentID:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)hasSameParametersAs:(id)arg1;
- (void)applyToFilter:(id)arg1;
- (id)policyJSONString;
- (id)description;
- (id)segmentID;
- (void)setSegmentID:(id)arg1;
- (id)filterID;
- (void)setFilterID:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (float)intensity;
- (void)setIntensity:(float)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
