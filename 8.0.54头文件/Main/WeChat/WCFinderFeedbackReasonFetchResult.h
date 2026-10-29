@interface WCFinderFeedbackReasonFetchResult : NSObject
{
    BOOL _fetching; // +0x8
    BOOL _fetchSuccess; // +0x9
    NSArray * _feedbackReasons; // +0x10
}
+ (id)resultForSuccessWith:(id)arg1;
+ (id)resultForFail;
+ (id)resultForFetching;
- (BOOL)needFetch;
- (BOOL)readyToShow;
- (BOOL)fetching;
- (void)setFetching:(BOOL)arg1;
- (BOOL)fetchSuccess;
- (void)setFetchSuccess:(BOOL)arg1;
- (id)feedbackReasons;
- (void)setFeedbackReasons:(id)arg1;
- (void).cxx_destruct;
@end

