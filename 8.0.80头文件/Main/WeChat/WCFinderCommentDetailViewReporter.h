@interface WCFinderCommentDetailViewReporter : NSObject
{
    WCFinderCommentDetailViewModel * _viewModel; // +0x8
}
- (id)initWithViewModel:(id)arg1;
- (void)comment:(id)arg1 viewType:(unsigned long long)arg2 receiveEvent:(unsigned long long)arg3;
- (void)_cgiResportWithEventID:(id)arg1 viewID:(id)arg2 params:(id)arg3;
- (id)_eventIDForEvent:(unsigned long long)arg1;
- (id)_viewIDForViewType:(unsigned long long)arg1;
- (id)_viewParamWithType:(unsigned long long)arg1 comment:(id)arg2;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
