@interface WCFinderIntervalManager : NSObject
{
    NSMutableArray * _intervals; // +0x8
}
- (id)init;
- (void)addIntervalFrom:(long long)arg1 to:(long long)arg2;
- (BOOL)isNumberInIntervals:(long long)arg1;
- (id)intervals;
- (void)setIntervals:(id)arg1;
- (void).cxx_destruct;
@end

