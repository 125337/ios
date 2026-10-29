@interface WCFinderLiveHomePageFeedFlowLoadingStatus : NSObject
{
    int _loadingType; // +0x8
    unsigned long long _loadingStartTimeMS; // +0x10
    unsigned long long _loadingEndTimeMS; // +0x18
    id _loadingContext; // +0x20
}
- (id)description;
- (unsigned long long)loadingStartTimeMS;
- (void)setLoadingStartTimeMS:(unsigned long long)arg1;
- (unsigned long long)loadingEndTimeMS;
- (void)setLoadingEndTimeMS:(unsigned long long)arg1;
- (int)loadingType;
- (void)setLoadingType:(int)arg1;
- (id)loadingContext;
- (void)setLoadingContext:(id)arg1;
- (void).cxx_destruct;
@end

