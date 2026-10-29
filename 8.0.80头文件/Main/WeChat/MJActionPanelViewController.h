@interface MJActionPanelViewController : UIViewController <MJActionPanelMainMenuViewDelegate>
{
    MJActionPanelViewModel * _viewModel; // +0x8
    MJSegmentInspectorView * _inspectorView; // +0x10
    id <MJActionPanelViewControllerDelegate> _delegate; // +0x18
    MJActionPanelMainMenuView * _mainMenuView; // +0x20
    MJSegmentInspectorViewModel * _bindedSegmentInspectorVM; // +0x28
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)setupViews;
- (void)updateMainMenuWithSegmentVM:(id)arg1;
- (void)updateMainMenuWithPlaybackTime:(struct)arg1;
- (void)reloadMainMenuWithPlaybackTime:(struct)arg1;
- (unsigned long long)actionPanelConfigurationForCurrentSegmnt;
- (void)mainMenuView:(id)arg1 didSelectItem:(id)arg2;
- (void)didSelectCropMenuItem;
- (void)didSelectFilterMenuItem;
- (id)createFilterInspectorView;
- (id)createVolumeInspectorView;
- (void)updateInspectorView:(id)arg1;
- (void)didSelectPictureMenuItem;
- (void)didSelectSpeedMenuItem;
- (void)didSelectVolumeMenuItem;
- (void)bindInspectorViewModel:(id)arg1;
- (void)cancelInspectorForSizeTransition;
- (BOOL)willLeaveClipEditing;
- (void)handleInspectorValueDidChange:(id)arg1;
- (void)showInspectorView:(id)arg1;
- (void)dismissInspectorView:(id)arg1 isFinished:(BOOL)arg2;
- (void)didSelectCanvasMenuItem;
- (void)didSelectDigiZoomMenuItem;
- (void)didSelectBatchClippingMenuItem;
- (void)didSelectDeleteMenuItem;
- (void)didSelectReorderMenuItem;
- (void)didSelectContentRangeMenuItem;
- (void)didSelectSplitMenuItem;
- (void)didSelectOrientationMenuItem;
- (void)didSelectEditCaptionTextMenuItem;
- (void)didSelectEditCaptionStyleMenuItem;
- (void)didSelectVoiceChangeMenuItem;
- (void)didSelectVoiceReadMenuItem;
- (void)didSelectSpeechRecognitionMenuItem;
- (void)showTransitionInspector:(id)arg1;
- (void)showVoiceChagneInspector:(id)arg1;
- (void)showVoiceChagneInspector:(id)arg1 withExtraOptions:(unsigned long long)arg2;
- (void)setupVoiceChangeInspectorWithExtraOptions:(unsigned long long)arg1;
- (id)viewModel;
- (id)inspectorView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mainMenuView;
- (void)setMainMenuView:(id)arg1;
- (id)bindedSegmentInspectorVM;
- (void)setBindedSegmentInspectorVM:(id)arg1;
- (void).cxx_destruct;
@end
