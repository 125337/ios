@interface TSTrackedSlideItem : TSTrackedItem <TSFinalTrackedItem>
{
    NSArray * _touches; // +0x8
}
- (id)initWithTouches:(id)arg1;
- (double)timestamp;
- (double)duration;
- (double)distance;
- (id)samplingTouches;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)touches;
- (void)setTouches:(id)arg1;
- (void).cxx_destruct;
@end

