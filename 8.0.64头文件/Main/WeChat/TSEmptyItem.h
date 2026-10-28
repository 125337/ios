@interface TSEmptyItem : TSTrackedItem <TSFinalTrackedItem>
{
    double _timestamp; // +0x8
    double _duration; // +0x10
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
@end
