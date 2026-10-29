@interface WCAdExpParamsReportInfo : NSObject
{
    double _feedWidth; // +0x8
    double _feedHeight; // +0x10
    double _lastTouchX; // +0x18
    double _lastTouchY; // +0x20
}
- (double)feedWidth;
- (void)setFeedWidth:(double)arg1;
- (double)feedHeight;
- (void)setFeedHeight:(double)arg1;
- (double)lastTouchX;
- (void)setLastTouchX:(double)arg1;
- (double)lastTouchY;
- (void)setLastTouchY:(double)arg1;
@end

