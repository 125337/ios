@interface MMCPUPeriodicEventConfig : NSObject <PBCoding>
{
    double _samplingInterval; // +0x8
}
+ (void)PBArrayAdd_samplingInterval;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithConfigDict:(id)arg1;
- (double)samplingInterval;
- (void)setSamplingInterval:(double)arg1;
@end
