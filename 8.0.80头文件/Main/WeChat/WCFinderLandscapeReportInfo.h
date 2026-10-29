@interface WCFinderLandscapeReportInfo : NSObject
{
    unsigned long long _rotateToLandscapeTimeStampMs; // +0x8
    double _rotateToLandscapeVideoProgress; // +0x10
}
- (unsigned long long)landscapeStayTimeMs;
- (id)genReportDictWithLandScapeEnterType:(unsigned long long)arg1;
- (unsigned long long)rotateToLandscapeTimeStampMs;
- (void)setRotateToLandscapeTimeStampMs:(unsigned long long)arg1;
- (double)rotateToLandscapeVideoProgress;
- (void)setRotateToLandscapeVideoProgress:(double)arg1;
@end
