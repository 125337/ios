@interface WCAssetFetchingOptions : NSObject
{
    BOOL _fetchesLivePhotoInfo; // +0x8
    double _timeoutInterval; // +0x10
}
- (BOOL)fetchesLivePhotoInfo;
- (void)setFetchesLivePhotoInfo:(BOOL)arg1;
- (double)timeoutInterval;
- (void)setTimeoutInterval:(double)arg1;
@end
