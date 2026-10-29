@interface MJComposingMusicClipViewController : MMPageSheetBaseViewController <MJComposingMusicClipViewDelegate>
{
    BOOL _isShowingInView; // +0x70
    BOOL _isCancelledForSizeTransition; // +0x71
    MJComposingMusicClipViewModel * _viewModel; // +0x78
    id <MJComposingMusicClipViewControllerDelegate> _delegate; // +0x80
    MJComposingMusicClipView * _clipView; // +0x88
    UIView * _pageSheetHostView; // +0x90
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)pageSheetContentHeight;
- (double)pageSheetContentWidth;
- (void)p_setupPageSheetConfig;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)cancelForSizeTransition;
- (void)updateWaveformPlayProgress:(double)arg1;
- (void)resetWaveformPlayProgress;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)musicClipView:(id)arg1 didStartTrimWithStartTime:(struct)arg2 duration:(struct)arg3 endTime:(struct)arg4;
- (void)musicClipView:(id)arg1 didChangeStartTime:(struct)arg2 duration:(struct)arg3 endTime:(struct)arg4;
- (void)musicClipView:(id)arg1 didFinishTrimWithStartTime:(struct)arg2 duration:(struct)arg3 endTime:(struct)arg4;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)isShowingInView;
- (void)setIsShowingInView:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)clipView;
- (void)setClipView:(id)arg1;
- (id)pageSheetHostView;
- (void)setPageSheetHostView:(id)arg1;
- (BOOL)isCancelledForSizeTransition;
- (void)setIsCancelledForSizeTransition:(BOOL)arg1;
- (void).cxx_destruct;
@end
