@interface WCFinderShareFeedCacheInfo : NSObject
{
    NSString * _feedId; // +0x8
    double _feedEndExposureTimeInMs; // +0x10
}
- (id)description;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (double)feedEndExposureTimeInMs;
- (void)setFeedEndExposureTimeInMs:(double)arg1;
- (void).cxx_destruct;
@end
