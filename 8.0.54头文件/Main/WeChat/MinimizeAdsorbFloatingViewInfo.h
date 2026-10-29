@interface MinimizeAdsorbFloatingViewInfo : MMObject <PBCoding>
{
    double _positionX; // +0x8
    double _positionY; // +0x10
    NSString * _aggreSessionId; // +0x18
    unsigned long long _aggreSessionIdCreateTime; // +0x20
}
+ (void)PBArrayAdd_positionX;
+ (void)PBArrayAdd_positionY;
+ (void)PBArrayAdd_aggreSessionId;
+ (void)PBArrayAdd_aggreSessionIdCreateTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (double)positionX;
- (void)setPositionX:(double)arg1;
- (double)positionY;
- (void)setPositionY:(double)arg1;
- (id)aggreSessionId;
- (void)setAggreSessionId:(id)arg1;
- (unsigned long long)aggreSessionIdCreateTime;
- (void)setAggreSessionIdCreateTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

