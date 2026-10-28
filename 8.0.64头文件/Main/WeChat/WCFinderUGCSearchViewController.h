@interface WCFinderUGCSearchViewController : WCFinderFeedListViewController <WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderJumpSearchUGCParams * _params; // +0x70
    NSString * _requestId; // +0x78
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (void)requestPageData:(BOOL)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)params;
- (void)setParams:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (void).cxx_destruct;
@end
