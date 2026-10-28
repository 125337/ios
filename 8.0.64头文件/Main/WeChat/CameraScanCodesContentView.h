@interface CameraScanCodesContentView : CameraScanBaseContentView <CAAnimationDelegate, CameraScanCombineContentViewDelegate>
{
    BOOL m_bShowMyQRCode; // +0x8
    BOOL m_bInfoLabelNeedShowAgain; // +0x9
    BOOL _isShowErrorView; // +0xa
    BOOL _isHandlingMultiCodes; // +0xb
    BOOL _isShowScanGoodsGuide; // +0xc
    BOOL _isShowTipsIKnow; // +0xd
    BOOL _isMaskViewShow; // +0xe
    BOOL _isEnableCombineTab; // +0xf
    BOOL _isUseSmallCropArea; // +0x10
    BOOL _isMultiCodes; // +0x11
    CameraScanBlurButtonWrapView * _myQRButtonWrapView; // +0x18
    unsigned long long _selectedIdx; // +0x20
    UIImageView * _scanCropImageView; // +0x28
    UIImageView * _scanLineView; // +0x30
    NSMutableArray * _markDotViewList; // +0x38
    CameraScanCodesCenterDotView * _centerDotView; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _subtitleLabel; // +0x50
    ImageFitWithBlurredBackgroundView * _snapshotImageView; // +0x58
    UIView * _codeMaskView; // +0x60
    MMUIButton * _cancelButton; // +0x68
    CAAnimationGroup * _scanLineAnimation; // +0x70
    CABasicAnimation * _maskViewAnimation; // +0x78
    double _scanLineTopCenterY; // +0x80
    double _scanLineBottomCenterY; // +0x88
    MMUIButton * _tryScanGoodsButton; // +0x90
    MMUIButton * _tipsIKnowButton; // +0x98
    CameraScanCombineContentView * _goodCombineView; // +0xa0
}
- (id)initWithIsUseSmallCropArea:(BOOL)arg1 bShowMyQRCode:(BOOL)arg2 bEnableCombineTab:(BOOL)arg3;
- (void)setupSubViews;
- (id)centerTabTitle;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (void)setScanCropRect:(CGRect)arg1;
- (void)setupScanCropImageView;
- (void)setupScanLineView;
- (void)setupSnapshotImageView;
- (void)setupMaskView;
- (void)setupCenterDotView;
- (void)setupTitleLabel;
- (void)setupSubtitleLabel;
- (void)setupCancelButton;
- (void)setupMyQRButton;
- (void)setupTryScanGoodsButton;
- (void)setupTipsIKnowButton;
- (void)setupMaskViewAnimation;
- (void)layoutSubviews;
- (void)markDotViewsStartShowAnimation;
- (void)markDotViewsStartBreatheAnimation;
- (void)markDotViewsStopAllAnimations;
- (void)markDotViewsRemoveFromSuperview;
- (void)markDotViewsCleanUpNonSelectedItems;
- (void)maskViewsShowWithAnimation:(BOOL)arg1;
- (void)maskViewsHidden;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)updateMarkDotInfoList:(id)arg1;
- (void)updateScanGoodsGuide:(id)arg1;
- (id)currSelectedMarkDotView;
- (void)startScanLineAnimation;
- (void)stopScanLineAnimation;
- (void)startLoadingDotAnimation;
- (void)stopLoadingDotAnimation;
- (void)startHandleMultiCodes;
- (void)stopHandleMultiCodes;
- (void)resetMultiCodesModify:(BOOL)arg1;
- (void)resetScanGoodsGuide;
- (void)resetTipsIKnow;
- (void)resetNetStatusModiy;
- (void)resetWhenStartScan;
- (void)showSnapshotImage:(id)arg1;
- (void)hideSnapshotImage;
- (void)showNetDisconnectWithSubtitle:(BOOL)arg1;
- (void)showNetTimeout;
- (void)showScanGoodsGuide:(id)arg1;
- (void)showTipsIKnow;
- (BOOL)isCollisionWithAnyMarkDotView;
- (BOOL)tapInCancelButton:(id)arg1;
- (void)setupGoodCombineAttachView;
- (id)goodCombineContentView;
- (double)getMyQRCodeButtonY;
- (void)onCombineContentViewStarMarkingAnimation;
- (void)onStartScanAlbumLoading;
- (void)onStopScanAlbumLoading;
- (void)onCancelBtnClicked:(id)arg1;
- (void)onMyQRBtnClicked:(id)arg1;
- (void)onTryScanGoodsBtnClicked:(id)arg1;
- (void)onTipsIKnowBtnClicked:(id)arg1;
- (double)getContentBottomMargin;
- (double)getWidthBetweenAlbumButtonAndMyQRCodeButton;
- (void)onAddItemFromDetectorsWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onClikcItemCardWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onExposeWithItem:(id)arg1 hasTitle:(BOOL)arg2;
- (double)getContentBottomMarginToTabView;
- (void)listViewWillFold:(BOOL)arg1;
- (void)listViewDidFold:(BOOL)arg1;
- (void)onListViewWillStartDragging;
- (void)onListViewWillEndDragging;
- (void)callSetupHoleMaskViewWithHoleFrame:(CGRect)arg1;
- (id)myQRButtonWrapView;
- (void)setMyQRButtonWrapView:(id)arg1;
- (BOOL)isShowErrorView;
- (void)setIsShowErrorView:(BOOL)arg1;
- (BOOL)isHandlingMultiCodes;
- (void)setIsHandlingMultiCodes:(BOOL)arg1;
- (BOOL)isShowScanGoodsGuide;
- (void)setIsShowScanGoodsGuide:(BOOL)arg1;
- (BOOL)isShowTipsIKnow;
- (void)setIsShowTipsIKnow:(BOOL)arg1;
- (unsigned long long)selectedIdx;
- (void)setSelectedIdx:(unsigned long long)arg1;
- (id)scanCropImageView;
- (void)setScanCropImageView:(id)arg1;
- (id)scanLineView;
- (void)setScanLineView:(id)arg1;
- (id)markDotViewList;
- (void)setMarkDotViewList:(id)arg1;
- (id)centerDotView;
- (void)setCenterDotView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)snapshotImageView;
- (void)setSnapshotImageView:(id)arg1;
- (id)codeMaskView;
- (void)setCodeMaskView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)scanLineAnimation;
- (void)setScanLineAnimation:(id)arg1;
- (BOOL)isMaskViewShow;
- (void)setIsMaskViewShow:(BOOL)arg1;
- (id)maskViewAnimation;
- (void)setMaskViewAnimation:(id)arg1;
- (BOOL)isEnableCombineTab;
- (void)setIsEnableCombineTab:(BOOL)arg1;
- (BOOL)isUseSmallCropArea;
- (void)setIsUseSmallCropArea:(BOOL)arg1;
- (BOOL)isMultiCodes;
- (void)setIsMultiCodes:(BOOL)arg1;
- (double)scanLineTopCenterY;
- (void)setScanLineTopCenterY:(double)arg1;
- (double)scanLineBottomCenterY;
- (void)setScanLineBottomCenterY:(double)arg1;
- (id)tryScanGoodsButton;
- (void)setTryScanGoodsButton:(id)arg1;
- (id)tipsIKnowButton;
- (void)setTipsIKnowButton:(id)arg1;
- (id)goodCombineView;
- (void)setGoodCombineView:(id)arg1;
- (void).cxx_destruct;
@end
