@interface WCFinderDiscoveryLiveTabPageViewModel : WCFinderLiveTabPageBaseViewModel
{
    id <WCFinderDiscoveryLiveTabPageViewModelDelegate> _delegate; // +0x8
    NSString * _byPassInfo; // +0x10
}
- (id)initWithPassInfo:(id)arg1;
- (void)requestLiveTabList;
- (void)requestLiveTabListWithScene:(long long)arg1 title:(id)arg2 feedExportId:(id)arg3 feedNonceId:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (void).cxx_destruct;
@end

