@interface RecommendConfiguration : NSObject <PBCoding>
{
    double _showTime; // +0x8
    double _showPercentage; // +0x10
    double _preLoadTime; // +0x18
    double _preLoadPercentage; // +0x20
    NSString * _logic; // +0x28
}
+ (void)PBArrayAdd_showTime;
+ (void)PBArrayAdd_showPercentage;
+ (void)PBArrayAdd_preLoadTime;
+ (void)PBArrayAdd_preLoadPercentage;
+ (void)PBArrayAdd_logic;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (double)showTime;
- (void)setShowTime:(double)arg1;
- (double)showPercentage;
- (void)setShowPercentage:(double)arg1;
- (double)preLoadTime;
- (void)setPreLoadTime:(double)arg1;
- (double)preLoadPercentage;
- (void)setPreLoadPercentage:(double)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end

