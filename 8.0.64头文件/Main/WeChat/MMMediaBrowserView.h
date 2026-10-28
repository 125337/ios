@interface MMMediaBrowserView : UIView
{
    id <MMMediaBrowserViewModel> _viewModel; // +0x8
    id <MMMediaBrowserViewDelegate> _delegate; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (CGRect)getDisplayFrame;
- (void)startDisplay;
- (void)downloadAllDataWithComplete:(id /* block */)arg1;
- (BOOL)canShowLivePhotoBtn;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
