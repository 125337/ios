@interface SightThumbModel : NSObject
{
    UIImage * _thumb; // +0x8
    double _thumbTimeStamp; // +0x10
    double _timeCost; // +0x18
}
- (id)thumb;
- (void)setThumb:(id)arg1;
- (double)thumbTimeStamp;
- (void)setThumbTimeStamp:(double)arg1;
- (double)timeCost;
- (void)setTimeCost:(double)arg1;
- (void).cxx_destruct;
@end
