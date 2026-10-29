@interface MJComposingMusicVolumeViewController : MMPageSheetBaseViewController <MJComposingMusicVolumePanelViewDelegate>
{
    BOOL _isShowingInView; // +0x70
    float _bgmVolumeBeforePresentation; // +0x74
    float _ostVolumeBeforePresentation; // +0x78
    MJComposingMusicVolumePanelViewModel * _viewModel; // +0x80
    unsigned long long _scene; // +0x88
    id <MJComposingMusicVolumeViewControllerDelegate> _delegate; // +0x90
    MJComposingMusicVolumePanelView * _panelView; // +0x98
    UIView * _pageSheetHostView; // +0xa0
}
- (id)initWithViewModel:(id)arg1 scene:(unsigned long long)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)pageSheetContentHeight;
- (double)pageSheetContentWidth;
- (void)setupPageSheetConfig;
- (void)updatePanelMode:(unsigned long long)arg1;
- (double)p_contentHeightForMode:(unsigned long long)arg1;
- (void)didCloseInMusicVolumePanelView:(id)arg1;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)cancelForSizeTransition;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)viewModel;
- (unsigned long long)scene;
- (BOOL)isShowingInView;
- (void)setIsShowingInView:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)pageSheetHostView;
- (void)setPageSheetHostView:(id)arg1;
- (float)bgmVolumeBeforePresentation;
- (void)setBgmVolumeBeforePresentation:(float)arg1;
- (float)ostVolumeBeforePresentation;
- (void)setOstVolumeBeforePresentation:(float)arg1;
- (void).cxx_destruct;
@end
