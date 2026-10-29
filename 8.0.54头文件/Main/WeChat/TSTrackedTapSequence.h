@interface TSTrackedTapSequence : TSTrackedItem <TSFinalTrackedItem>
{
    NSArray * _taps; // +0x8
}
- (id)initWithTaps:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)timestamp;
- (double)duration;
- (id)taps;
- (void)setTaps:(id)arg1;
- (void).cxx_destruct;
@end

