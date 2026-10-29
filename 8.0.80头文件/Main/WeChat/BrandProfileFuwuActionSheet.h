@interface BrandProfileFuwuActionSheet : MMPageSheetBaseViewController <BrandProfileFuwuContainerViewDelegate, IUiUtilExt>
{
    id <BrandProfileFuwuActionSheetDelegate> _delegate; // +0x70
    UIView * _transparentView; // +0x78
    BrandProfileFuwuContainerView * _containerView; // +0x80
}
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)initPageSheetConfig;
- (void)setupContainerView;
- (void)showInViewController:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFuwuInfoList:(id)arg1;
- (void)setBrandType:(unsigned long long)arg1;
- (void)onTappedFuwuInfo:(id)arg1;
- (void)onTappedCancel;
- (void)onMainWindowFrameChanged;
- (void)dismissWithAnimated:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)transparentView;
- (void)setTransparentView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
