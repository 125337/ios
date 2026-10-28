@interface MJMaterialLoadingStatusCoordinator : NSObject
{
    id <MJMaterialLoadingStatusViewModel> _viewModel; // +0x8
    NSMutableDictionary * _loadingViews; // +0x10
    NSString * _lastSelectedID; // +0x18
}
- (id)initWithViewModel:(id)arg1;
- (void)didSelectWithID:(id)arg1 forView:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateLoadingStyleWithID:(id)arg1 forView:(id)arg2;
- (void)removeLoadingStyleWithID:(id)arg1 forView:(id)arg2;
- (void)attachLoadingVieWithID:(id)arg1 forView:(id)arg2;
- (void)setupLoadingViewWithID:(id)arg1 forView:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)freeLoadingStyleWithID:(id)arg1 forView:(id)arg2;
- (id)loadingViews;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setLoadingViews:(id)arg1;
- (id)lastSelectedID;
- (void)setLastSelectedID:(id)arg1;
- (void).cxx_destruct;
@end
