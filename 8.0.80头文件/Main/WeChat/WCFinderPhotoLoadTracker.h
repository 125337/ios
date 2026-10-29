@interface WCFinderPhotoLoadTracker : MMUserService <MMServiceProtocol>
{
    WCFinderRedDotThreadSafeDictionary * _trackingDataDict; // +0x8
    WCFinderRedDotThreadSafeSet * _exposeFeedSet; // +0x10
}
+ (void)reportPhotoWhiteScreenDuration:(double)arg1 mediaInfo:(id)arg2 contentVM:(id)arg3 firstExpose:(BOOL)arg4 useType:(long long)arg5;
- (void)onServiceInit;
- (void)markPhotoReady:(id)arg1 contentVM:(id)arg2 useType:(long long)arg3;
- (void)markPhotoExpose:(id)arg1 contentVM:(id)arg2 isReady:(BOOL)arg3 useType:(long long)arg4;
- (void)markPhotoEndExpose:(id)arg1 contentVM:(id)arg2 isReady:(BOOL)arg3 useType:(long long)arg4;
- (id)trackingDataDict;
- (void)setTrackingDataDict:(id)arg1;
- (id)exposeFeedSet;
- (void)setExposeFeedSet:(id)arg1;
- (void).cxx_destruct;
@end
