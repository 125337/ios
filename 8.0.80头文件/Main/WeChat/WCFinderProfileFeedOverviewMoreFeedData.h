@interface WCFinderProfileFeedOverviewMoreFeedData : NSObject
{
    BOOL _isPullableModel; // +0x8
    id <WCFinderProfilePullableFeedViewModel> _feedModel; // +0x10
    WCFinderFeedArray * _feedArray; // +0x18
}
- (id)feedModel;
- (void)setFeedModel:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (BOOL)isPullableModel;
- (void)setIsPullableModel:(BOOL)arg1;
- (void).cxx_destruct;
@end
