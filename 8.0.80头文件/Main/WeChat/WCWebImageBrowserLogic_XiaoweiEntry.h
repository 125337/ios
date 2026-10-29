@interface WCWebImageBrowserLogic_XiaoweiEntry : NSObject
{
    BOOL _sugWordHasContent; // +0x8
    BOOL _sugWordButtonVisible; // +0x9
    BOOL _suppressedForScrolling; // +0xa
    BOOL _imageViewerToolsVisible; // +0xb
    BOOL _aiProcessButtonExposureReported; // +0xc
    BOOL _sugWordRequested; // +0xd
    WCWebImageBrowserViewController * _viewController; // +0x10
    ImageBrowseButton * _aiProcessBtn; // +0x18
    UIView * _sugWordContainerView; // +0x20
    ImageBrowseButton * _sugWordBtn; // +0x28
    UIImageView * _sugWordXiaoWeiIconView; // +0x30
    NSString * _sugWordText; // +0x38
    unsigned long long _sugWordAnimationToken; // +0x40
    MPImageSugWordResult * _sugWordResult; // +0x48
    NSString * _sugWordRequestId; // +0x50
}
- (id)initWithViewController:(id)arg1;
- (id)config;
- (id)aiProcessBtn;
- (void)updateAIProcessButton:(id)arg1 titleVisible:(BOOL)arg2;
- (id)sugWordBtn;
- (void)setupSugWordContainerIfNeeded;
- (id)sugWordSrcKeyFromURL:(id)arg1;
- (id)imageSourceKeyFromOriginalURL:(id)arg1;
- (id)sugWordInfoForURL:(id)arg1;
- (id)sugWordInfoForCurrentImage;
- (id)currentSugWordItem;
- (id)currentSugWord;
- (void)requestSugWordIfNeeded;
- (void)applySugWordResult:(id)arg1 success:(BOOL)arg2;
- (void)setupInBottomBarContainer:(id)arg1;
- (double)layoutAIProcessButtonWithRight:(double)arg1 left:(double)arg2 centerY:(double)arg3 betweenSpace:(double)arg4;
- (void)updateSugWordButtonLayoutWithText:(id)arg1;
- (void)relayoutSugWordButton;
- (void)setImageViewerToolsVisible:(BOOL)arg1;
- (void)setSuppressedForScrolling:(BOOL)arg1;
- (BOOL)shouldShowSugWordButton;
- (void)updateSugWordButton;
- (void)setSugWordButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (long long)xiaoweiEnterScene:(BOOL)arg1;
- (void)reportAIProcessButtonExposureIfNeeded;
- (void)reportAIProcessButtonEventIsClick:(BOOL)arg1;
- (void)reportSugWordButtonEventIsClick:(BOOL)arg1 sugWord:(id)arg2;
- (void)report39073WithActionType:(unsigned int)arg1 componentType:(unsigned int)arg2;
- (void)report39400WithAction:(unsigned long long)arg1;
- (void)reportImageConsumeIfNeeded;
- (void)onClickAIProcessBtn;
- (void)onClickSugWordBtn;
- (id)currentImagePathWithMd5:(id *)arg1;
- (id)viewController;
- (void)setAiProcessBtn:(id)arg1;
- (id)sugWordContainerView;
- (void)setSugWordContainerView:(id)arg1;
- (void)setSugWordBtn:(id)arg1;
- (id)sugWordXiaoWeiIconView;
- (void)setSugWordXiaoWeiIconView:(id)arg1;
- (id)sugWordText;
- (void)setSugWordText:(id)arg1;
- (BOOL)sugWordHasContent;
- (void)setSugWordHasContent:(BOOL)arg1;
- (BOOL)sugWordButtonVisible;
- (void)setSugWordButtonVisible:(BOOL)arg1;
- (BOOL)suppressedForScrolling;
- (unsigned long long)sugWordAnimationToken;
- (void)setSugWordAnimationToken:(unsigned long long)arg1;
- (BOOL)imageViewerToolsVisible;
- (BOOL)aiProcessButtonExposureReported;
- (void)setAiProcessButtonExposureReported:(BOOL)arg1;
- (id)sugWordResult;
- (void)setSugWordResult:(id)arg1;
- (BOOL)sugWordRequested;
- (void)setSugWordRequested:(BOOL)arg1;
- (id)sugWordRequestId;
- (void)setSugWordRequestId:(id)arg1;
- (void).cxx_destruct;
@end
