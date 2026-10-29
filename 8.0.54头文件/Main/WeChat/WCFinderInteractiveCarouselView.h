@interface WCFinderInteractiveCarouselView : UIView <WCFinderPanelRingToneGuideViewDelegate, WCFinderPanelHotCommentViewDelegate, WCFinderPanelJumpInfoCarouselViewDelegate, WCFinderJumpInfoPanelViewDelegate>
{
    id <WCFinderInteractiveCarouselViewDelegate> _delegate; // +0x8
    id <WCFinderInteractiveCarouselViewDataSource> _dataSource; // +0x10
    WCFinderPanelJumpInfoCarouselView * _jumpInfoCarouselView; // +0x18
    WCFinderInteractivePanelConfigParamsModel * _paramsModel; // +0x20
    WCFinderPanelRingToneGuideView * _ringToneGuideView; // +0x28
    WCFinderPanelHotCommentView * _hotCommentView; // +0x30
}
- (unsigned long long)toolBarStyle;
- (id)contentVM;
- (unsigned long long)carouselIndex;
- (unsigned long long)curCarouselType;
- (void)setCurCarouselType:(unsigned long long)arg1;
- (void)resetUIViewState;
- (void)layoutSubviews;
- (id)jumpInfoCarouselView;
- (id)ringToneGuideView;
- (id)hotCommentView;
- (BOOL)isShowingHotComment;
- (id)showingHotComment;
- (BOOL)isShowingJumpCarousel;
- (BOOL)canShowHotComment;
- (BOOL)enableShowTargetCarouselView:(unsigned long long)arg1 logicEnable:(BOOL)arg2 checkCarouselIndex:(BOOL)arg3;
- (BOOL)canShowJumpCarouselGuide;
- (BOOL)canShowCarousel;
- (BOOL)canShowRingToneGuide;
- (BOOL)clientCanShowRingtoneGuide;
- (BOOL)showCarouselViewWithParams:(id)arg1;
- (unsigned long long)getCarouselViewShowType;
- (double)_layoutRingToneGuideViewFromOffset:(double)arg1;
- (double)_layoutJumpCarouselViewFromOffset:(double)arg1;
- (double)_layoutHotCommentViewFromOffset:(double)arg1;
- (void)setCarouselView:(id)arg1 hidden:(BOOL)arg2;
- (void)setCarouselView:(id)arg1 hidden:(BOOL)arg2 businessType:(int)arg3;
- (void)onClickSetRingToneButton;
- (void)onClickPanelHotComment:(id)arg1;
- (void)onJumpCarouselViewClickBannerAction:(id)arg1 style:(id)arg2;
- (void)onJumpCarouselViewClickButtonAction:(id)arg1 style:(id)arg2;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)setJumpInfoCarouselView:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (void)setRingToneGuideView:(id)arg1;
- (void)setHotCommentView:(id)arg1;
- (void).cxx_destruct;
@end

