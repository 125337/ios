@interface WCFinderCachedLocation : NSObject
{
    CLLocation * _location; // +0x8
    double _cachedTimeStamp; // +0x10
}
+ (id)cachedLocationWithLocation:(id)arg1;
+ (id)cachedLocationWithLocation:(id)arg1 cachedTime:(double)arg2;
- (void)updateCachedTimeToNow;
- (id)location;
- (void)setLocation:(id)arg1;
- (double)cachedTimeStamp;
- (void)setCachedTimeStamp:(double)arg1;
- (void).cxx_destruct;
@end
