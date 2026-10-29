@interface OMJDashLineStyle : NSObject
{
    NSArray * _intervals; // +0x8
    double _phase; // +0x10
}
- (id)initWithIntervals:(id)arg1 phase:(double)arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)intervals;
- (double)phase;
- (void).cxx_destruct;
@end
