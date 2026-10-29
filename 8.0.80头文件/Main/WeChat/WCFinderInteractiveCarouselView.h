@interface WCFinderInteractiveCarouselView : UIView <WCFinderPanelRingToneGuideViewDelegate, WCFinderPanelHotCommentViewDelegate, WCFinderPanelMultiImageCommentViewDelegate, WCFinderPanelJumpInfoCarouselViewDelegate, WCFinderJumpInfoPanelViewDelegate>
{
    id <WCFinderInteractiveCarouselViewDelegate> _delegate; // +0x8
    WCFinderPanelJumpInfoCarouselView * _jumpInfoCarouselView; // +0x10
    WCFinderInteractivePanelConfigParamsModel * _paramsModel; // +0x18
    WCFinderPanelRingToneGuideView * _ringToneGuideView; // +0x20
    WCFinderPanelHotCommentView * _hotCommentView; // +0x28
    WCFinderPanelMultiImageCommentView * _multiImageCommentView; // +0x30
    NSMapTable * _carsouselTypeMap; // +0x38
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (unsigned long long)toolBarStyle;
- (id)contentVM;
- (unsigned long long)curCarouselType;
- (void)setCurCarouselType:(unsigned long long)arg1;
- (void)resetUIViewState;
- (void)layoutSubviews;
- (id)jumpInfoCarouselView;
- (id)ringToneGuideView;
- (id)hotCommentView;
- (id)multiImageCommentView;
- (void)bindExposureForMultiImageCommentView;
- (BOOL)isShowingHotComment;
- (id)showingHotComment;
- (BOOL)isShowingJumpCarousel;
- (BOOL)canShowHotComment;
- (BOOL)canShowMultiImageComment;
- (BOOL)isShowingMultiImageComment;
- (BOOL)canShowJumpCarouselGuide;
- (BOOL)canShowRingToneGuide;
- (BOOL)canShowMediaComment;
- (BOOL)showCarouselViewWithParams:(id)arg1;
- (void)updateCarouselViewHiddenType:(unsigned long long)arg1;
- (double)_layoutRingToneGuideViewFromOffset:(double)arg1;
- (double)_layoutJumpCarouselViewFromOffset:(double)arg1;
- (double)_layoutHotCommentViewFromOffset:(double)arg1;
- (double)_layoutMultiImageCommentViewFromOffset:(double)arg1;
- (void)setCarouselView:(id)arg1 hidden:(BOOL)arg2;
- (void)setCarouselView:(id)arg1 hidden:(BOOL)arg2 businessType:(int)arg3;
- (void)onClickSetRingToneButton;
- (void)onClickPanelHotComment:(id)arg1;
- (void)onMultiImageCommentViewClickComment:(id)arg1 index:(unsigned long long)arg2;
- (void)onJumpCarouselViewClickBannerAction:(id)arg1 style:(id)arg2;
- (void)onJumpCarouselViewClickButtonAction:(id)arg1 style:(id)arg2;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setJumpInfoCarouselView:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (void)setRingToneGuideView:(id)arg1;
- (void)setHotCommentView:(id)arg1;
- (void)setMultiImageCommentView:(id)arg1;
- (id)carsouselTypeMap;
- (void)setCarsouselTypeMap:(id)arg1;
- (void).cxx_destruct;
@end
