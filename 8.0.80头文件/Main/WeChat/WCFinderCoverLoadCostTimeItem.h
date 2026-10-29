@interface WCFinderCoverLoadCostTimeItem : NSObject
{
    double _begin; // +0x8
    unsigned long long _cost; // +0x10
}
- (double)begin;
- (void)setBegin:(double)arg1;
- (unsigned long long)cost;
- (void)setCost:(unsigned long long)arg1;
@end
