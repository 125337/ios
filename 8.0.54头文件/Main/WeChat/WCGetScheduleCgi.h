@interface WCGetScheduleCgi : WCBaseCgi
{
    BOOL _firstPageOnly; // +0x8
    BOOL _isRunning; // +0x9
    BOOL _isCancel; // +0xa
    id <WCGetScheduleCgiDelegate> _delegate; // +0x10
    NSData * _pageContext; // +0x18
    NSMutableArray * _scheduleItems; // +0x20
}
- (id)init;
- (void)requestFirstPageItems;
- (void)requestAllScheduleItems;
- (void)requestAllScheduleItemsWithPageContext:(id)arg1;
- (void)requestScheduleItemsWithPage:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (BOOL)firstPageOnly;
- (void)setFirstPageOnly:(BOOL)arg1;
- (id)scheduleItems;
- (void)setScheduleItems:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (void).cxx_destruct;
@end

