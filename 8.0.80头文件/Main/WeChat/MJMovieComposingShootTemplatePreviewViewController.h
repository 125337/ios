@interface MJMovieComposingShootTemplatePreviewViewController : UIViewController <MJShootComposingTemplateListViewDelegate>
{
    BOOL _hasFetchedTemplateItemsForDefaultTab; // +0x8
    BOOL _isFetchingTemplateItemsForDefaultTab; // +0x9
    BOOL _isApplyingTemplate; // +0xa
    BOOL _automaticTemplateApplying; // +0xb
    BOOL _isShowingExportProgress; // +0xc
    id <MJMovieComposingShootTemplatePreviewViewControllerDelegate> _delegate; // +0x10
    MJMovieComposingShootTemplatePreviewViewModel * _viewModel; // +0x18
    UIView * _renderViewContainer; // +0x20
    UIImage * _initialTransitionSnapshotImage; // +0x28
    UIView * _transitionSnapshotContainerView; // +0x30
    MJPassthroughButton * _backgroundButton; // +0x38
    MJShootComposingTemplateListView * _templateListView; // +0x40
    UIView * _bottomBar; // +0x48
    MMUIButton * _cancelButton; // +0x50
    MMUIButton * _confirmButton; // +0x58
    UILabel * _titleLabel; // +0x60
    UIView * _loadingContainerView; // +0x68
    MMUIActivityIndicatorView * _loadingView; // +0x70
    MJExportProgressMaskView * _exportProgressView; // +0x78
    double _previewPanelContentHeight; // +0x80
    CGSize _previewLayoutSize; // +0x88
}
- (id)initWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1 transitionSnapshotImage:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)registerNotifications;
- (void)unregisterNotifications;
- (void)setupSubviews;
- (void)setupConstraints;
- (void)reloadData;
- (void)fetchTemplateItemsForDefaultTabIfNeeded;
- (void)hideTemplateListForPreparing;
- (void)showTemplateListIfNeeded;
- (void)updateInitialTransitionSnapshotImage:(id)arg1;
- (void)showInitialTransitionSnapshotIfNeeded;
- (void)showExitTransitionSnapshot;
- (void)dismissTransitionSnapshot;
- (void)dismissTransitionSnapshotAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dismissPreviewAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)showApplyingTemplateLoading;
- (void)hideApplyingTemplateLoading;
- (void)setAutomaticTemplateApplying:(BOOL)arg1;
- (void)showExportProgress;
- (void)dismissExportProgress;
- (void)dismissExportProgressForApplicationWillResignActive;
- (void)updateSelectedTemplateItem:(id)arg1;
- (void)selectTemplateItemFromPanel:(id)arg1;
- (void)showCamoRenderView:(id)arg1;
- (void)dismissCamoRenderView;
- (void)showTransitionSnapshotImage:(id)arg1;
- (void)showTransitionSnapshotImage:(id)arg1 inView:(id)arg2;
- (void)showTransitionBlurInView:(id)arg1;
- (void)hidePreviewContentForExit;
- (void)updateLoadingVisibility;
- (void)layoutCamoPreviewContainerWithPanelContentHeight:(double)arg1 animated:(BOOL)arg2;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (void)onApplicationDidBecomeActiveNotification:(id)arg1;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (void)confirmButtonDidTouchUpInside:(id)arg1;
- (void)notifyConfirmAction;
- (void)setupRenderViewContainerConstraints;
- (void)remakeRenderViewContainerConstraintsWithPanelContentHeight:(double)arg1;
- (void)shootComposingTemplateListView:(id)arg1 didManuallyTapTemplateItem:(id)arg2;
- (void)shootComposingTemplateListView:(id)arg1 didSelectTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListViewFetchDataDidFail:(id)arg1;
- (void)shootComposingTemplateListView:(id)arg1 didTapMoreEntry:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(id)arg1 didTapTitleEntry:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListViewRecommendationsDidChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)renderViewContainer;
- (void)setRenderViewContainer:(id)arg1;
- (id)initialTransitionSnapshotImage;
- (void)setInitialTransitionSnapshotImage:(id)arg1;
- (id)transitionSnapshotContainerView;
- (void)setTransitionSnapshotContainerView:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)templateListView;
- (void)setTemplateListView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)loadingContainerView;
- (void)setLoadingContainerView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)exportProgressView;
- (void)setExportProgressView:(id)arg1;
- (BOOL)hasFetchedTemplateItemsForDefaultTab;
- (void)setHasFetchedTemplateItemsForDefaultTab:(BOOL)arg1;
- (BOOL)isFetchingTemplateItemsForDefaultTab;
- (void)setIsFetchingTemplateItemsForDefaultTab:(BOOL)arg1;
- (BOOL)isApplyingTemplate;
- (void)setIsApplyingTemplate:(BOOL)arg1;
- (BOOL)automaticTemplateApplying;
- (BOOL)isShowingExportProgress;
- (void)setIsShowingExportProgress:(BOOL)arg1;
- (CGSize)previewLayoutSize;
- (void)setPreviewLayoutSize:(CGSize)arg1;
- (double)previewPanelContentHeight;
- (void)setPreviewPanelContentHeight:(double)arg1;
- (void).cxx_destruct;
@end
