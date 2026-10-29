@interface WCFinderHomeLifeFilter : NSObject
{
    NSArray * _filterGroup; // +0x8
    NSNumber * _hashValue; // +0x10
}
+ (id)filterWithPathArray:(id)arg1;
+ (id)filterWithPath:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFilter:(id)arg1;
- (id)description;
- (id)filterGroup;
- (void)setFilterGroup:(id)arg1;
- (id)hashValue;
- (void)setHashValue:(id)arg1;
- (void).cxx_destruct;
@end

