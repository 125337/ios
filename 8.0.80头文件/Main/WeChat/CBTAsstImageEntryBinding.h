@interface CBTAsstImageEntryBinding : NSObject
{
    BOOL _started; // +0x8
    CBTAsstFullScreenImageViewController * _viewer; // +0x10
    CBTAsstBoardImageViewModel * _viewModel; // +0x18
    NSArray * _entryInfos; // +0x20
    id _observer; // +0x28
    unsigned long long _uin; // +0x30
}
- (void)startObserving;
- (void)refresh;
- (void)dealloc;
- (id)viewer;
- (void)setViewer:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)entryInfos;
- (void)setEntryInfos:(id)arg1;
- (id)observer;
- (void)setObserver:(id)arg1;
- (unsigned long long)uin;
- (void)setUin:(unsigned long long)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
