@interface MMFinderLiveFansGroupDetailNavBar : UIView <WCFinderHeadImageViewDelegate>
{
    id /* block */ _leftButtonActionCallback; // +0x8
    id /* block */ _rightButtonActionCallback; // +0x10
    id /* block */ _gotoFansGroupMemListCallback; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMUIButton * _navLeftButton; // +0x28
    MMUIButton * _navRightButton; // +0x30
    MMUILabel * _titleView; // +0x38
    WCFinderHeadImageView * _headerImgView; // +0x40
    MMUIButton * _arrowButton; // +0x48
    double _selfWidth; // +0x50
}
+ (double)preferHeight;
+ (double)getTitleContentWidth:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (BOOL)shouldAdaptToDarkLight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateTitleWidgesOrigin;
- (void)layoutTitleView;
- (void)layoutHeaderImgView;
- (void)layoutArrowButton;
- (void)layoutNavLeftButton;
- (void)layoutNavRightButton;
- (void)updateUI;
- (id)getHeaderImgView;
- (id)getArrowButton;
- (id)getCurrentTitleView;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)onArrowButtonAction;
- (void)onTitleTap;
- (id)finderLiveTask;
- (id)getAdapatedDisplayTitle;
- (double)getTitleMaxDisplayWidth;
- (double)getTitleSuffixWidth;
- (id)getAdaptedDisplayAnchorNameInMaxWidth:(double)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (id /* block */)leftButtonActionCallback;
- (void)setLeftButtonActionCallback:(id /* block */)arg1;
- (id /* block */)rightButtonActionCallback;
- (void)setRightButtonActionCallback:(id /* block */)arg1;
- (id /* block */)gotoFansGroupMemListCallback;
- (void)setGotoFansGroupMemListCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)navLeftButton;
- (void)setNavLeftButton:(id)arg1;
- (id)navRightButton;
- (void)setNavRightButton:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)headerImgView;
- (void)setHeaderImgView:(id)arg1;
- (id)arrowButton;
- (void)setArrowButton:(id)arg1;
- (double)selfWidth;
- (void)setSelfWidth:(double)arg1;
- (void).cxx_destruct;
@end

