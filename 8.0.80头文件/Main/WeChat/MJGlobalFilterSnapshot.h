@interface MJGlobalFilterSnapshot : NSObject
{
    NSArray * _segmentStates; // +0x8
    NSString * _policyJSONString; // +0x10
}
- (BOOL)hasSameStateAs:(id)arg1;
- (id)description;
- (id)segmentStates;
- (void)setSegmentStates:(id)arg1;
- (id)policyJSONString;
- (void)setPolicyJSONString:(id)arg1;
- (void).cxx_destruct;
@end
