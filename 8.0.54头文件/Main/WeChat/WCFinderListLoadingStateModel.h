@interface WCFinderListLoadingStateModel : NSObject
{
    BOOL _loadingDown; // +0x8
    BOOL _loadingUp; // +0x9
    BOOL _continueFlagDown; // +0xa
    BOOL _continueFlagUp; // +0xb
    BOOL _loadingFailDown; // +0xc
    BOOL _loadingFailUp; // +0xd
    NSPointerArray * _observers; // +0x10
}
- (id)init;
- (BOOL)loading;
- (BOOL)loadingFail;
- (void)modifyWithUpdater:(id /* block */)arg1;
- (void)sink:(id)arg1;
- (void)_modifyObservers;
- (void)compactObservers;
- (void)updateEmptyUIStateWithEmptyLoadingBlock:(id /* block */)arg1 emptyDataBlock:(id /* block */)arg2 emptyFailBlock:(id /* block */)arg3;
- (void)updateFooterViewStateWithTableView:(id)arg1 footerView:(id)arg2 dataEmpty:(BOOL)arg3;
- (void)updateStreamFooterView:(id)arg1;
- (BOOL)canLoadDown;
- (BOOL)loadingDown;
- (void)setLoadingDown:(BOOL)arg1;
- (BOOL)loadingUp;
- (void)setLoadingUp:(BOOL)arg1;
- (BOOL)continueFlagDown;
- (void)setContinueFlagDown:(BOOL)arg1;
- (BOOL)continueFlagUp;
- (void)setContinueFlagUp:(BOOL)arg1;
- (BOOL)loadingFailDown;
- (void)setLoadingFailDown:(BOOL)arg1;
- (BOOL)loadingFailUp;
- (void)setLoadingFailUp:(BOOL)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;
- (void).cxx_destruct;
@end

