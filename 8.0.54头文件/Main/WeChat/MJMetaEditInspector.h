@interface MJMetaEditInspector : UIViewController <MJPageViewDelegate, MJPageViewDataSource, MJStickerPickerViewControllerDelegate, MJMetaEditGeographicPanelDelegate>
{
    BOOL _hasChanges; // +0x8
    BOOL _bFirstAppeared; // +0x9
    id <MJMetaEditInspectorDelegate> _delegate; // +0x10
    MJPublisherInspectorContainerView * _containerView; // +0x18
    MJMetaEditViewModel * _viewModel; // +0x20
    MJPageView * _pageView; // +0x28
    MJInspectorToolBar * _toolBar; // +0x30
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupViews;
- (void)setupCallback;
- (void)callBackDateIfNeeded;
- (void)reloadEditingPage;
- (long long)numberOfPagesInPageView:(id)arg1;
- (id)pageView:(id)arg1 titleItemAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 contentItemAtIndex:(long long)arg2;
- (void)stickerPicker:(id)arg1 didChangeSelection:(id)arg2 atIndex:(long long)arg3;
- (void)didClickEditMetaEditGeographicPanel:(id)arg1;
- (void)presentLocationPickerWithPanel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasChanges;
- (void)setHasChanges:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)bFirstAppeared;
- (void)setBFirstAppeared:(BOOL)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (id)toolBar;
- (void)setToolBar:(id)arg1;
- (void).cxx_destruct;
@end

