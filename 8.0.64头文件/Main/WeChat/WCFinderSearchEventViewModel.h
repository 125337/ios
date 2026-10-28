@interface WCFinderSearchEventViewModel : NSObject
{
    BOOL _hasNoMoreData; // +0x8
    id <WCFinderSearchEventViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _eventArray; // +0x18
    NSString * _flowId; // +0x20
    NSString * _eventVisitId; // +0x28
    NSString * _requestId; // +0x30
    NSString * _queryText; // +0x38
    NSData * _lastBuffer; // +0x40
    WCFinderBaseCgi * _requestCgi; // +0x48
    WCFinderFlowEventReportInfo * _reportInfo; // +0x50
}
- (void)searchEventWithText:(id)arg1;
- (void)searchNextPage;
- (BOOL)isEqualWithLastQueryText:(id)arg1;
- (void)reportFlowEventIfNeed;
- (id)eventArray;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setEventArray:(id)arg1;
- (id)flowId;
- (void)setFlowId:(id)arg1;
- (id)eventVisitId;
- (void)setEventVisitId:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)queryText;
- (void)setQueryText:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)hasNoMoreData;
- (void)setHasNoMoreData:(BOOL)arg1;
- (id)requestCgi;
- (void)setRequestCgi:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
