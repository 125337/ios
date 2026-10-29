@interface ICCollectionStatInfo : NSObject
{
    NSDate * _firstScreenStartTime; // +0x8
    NSDate * _firstScreenEndTime; // +0x10
}
- (void)markFirstScreenStart;
- (void)markFirstScreenEnd;
- (double)firstScreenCost;
- (void)clear;
- (id)firstScreenStartTime;
- (void)setFirstScreenStartTime:(id)arg1;
- (id)firstScreenEndTime;
- (void)setFirstScreenEndTime:(id)arg1;
- (void).cxx_destruct;
@end

