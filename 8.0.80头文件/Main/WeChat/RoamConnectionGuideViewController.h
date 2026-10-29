@interface RoamConnectionGuideViewController : MMUIViewController <IRoamGuideConnectedDelegate>
{
    BOOL _isPresentMode; // +0x70
    id <IRoamGuideConnectedDelegate> _delegate; // +0x78
    UIView * _uiContainerView; // +0x80
}
- (id)init;
- (id)initWithPresentMode;
- (void)viewDidLoad;
- (void)dismissController;
- (void)viewDidLayoutSubviews;
- (void)setupViews;
- (id)navigationBarBackgroundColor;
- (void)onCancel;
- (void)onGuideConnected;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)uiContainerView;
- (void)setUiContainerView:(id)arg1;
- (BOOL)isPresentMode;
- (void)setIsPresentMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
