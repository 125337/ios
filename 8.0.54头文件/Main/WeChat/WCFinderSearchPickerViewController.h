@interface WCFinderSearchPickerViewController : WCFinderSearchViewController <WCFinderSearchHistoryListViewDelegate>
{
    id <WCFinderSearchPickerViewControllerDelegate> _delegate; // +0x68
    WCFinderFeedPickerParams * _params; // +0x70
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (BOOL)shouldCustomHandleSelectedItem;
- (void)customHandleSelectedItem:(id)arg1 viewModel:(id)arg2 index:(long long)arg3;
- (id)getSearchViewModel;
- (int)searchHistoryListViewEnterScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

