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
    BOOL _isEnableAskAI; // +0x10
    BOOL _isEnableScanAIUIV2; // +0x11
    BOOL _isMultiCodes; // +0x12
    CameraOpButtonWrapView * _mixedMyQRWrapView; // +0x18
    unsigned long long _selectedIdx; // +0x20
    CameraScannerViewWrapper * _cameraScannerWrapper; // +0x28
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
    MMUIButton * _scanAIUIV2QRCodeButton; // +0x80
    unsigned long long _mixedSwitchValue; // +0x88
    double _scanLineTopCenterY; // +0x90
    double _scanLineBottomCenterY; // +0x98
    MMUIButton * _tryScanGoodsButton; // +0xa0
    MMUIButton * _tipsIKnowButton; // +0xa8
    CameraScanCombineContentView * _goodCombineView; // +0xb0
    CameraScanEnergyInfoView * _energyInfoView; // +0xb8
}
- (id)initWithShowMyQRCode:(BOOL)arg1 bEnableCombineTab:(BOOL)arg2 bEnableAskAi:(BOOL)arg3 bEnableScanAIUIV2:(BOOL)arg4 mixedSwitchValue:(unsigned long long)arg5;
- (void)setupSubViews;
- (id)centerTabTitle;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (void)updateScanLineWithWidth:(double)arg1 topCenterY:(double)arg2 bottomCenterY:(double)arg3;
- (void)setupScanLineView;
- (void)setupSnapshotImageView;
- (void)setupMaskView;
- (void)setupCenterDotView;
- (void)setupTitleLabel;
- (void)setupSubtitleLabel;
- (void)setupCancelButton;
- (void)setupNewMyQRButton;
- (void)setupScanAIUIV2QRCodeButton;
- (void)setupTryScanGoodsButton;
- (void)setupTipsIKnowButton;
- (void)setupEnergyInfoView;
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
- (void)startLoadingDotAnimationWithTitle:(id)arg1;
- (void)stopLoadingDotAnimation;
- (void)startHandleMultiCodes;
- (void)stopHandleMultiCodes;
- (void)resetAll;
- (void)resetMultiCodesModify:(BOOL)arg1;
- (void)resetScanGoodsGuide;
- (void)resetTipsIKnow;
- (void)resetNetStatusModify;
- (void)resetWhenStartScan;
- (id)snapshotImageContentView;
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
- (unsigned long long)mixedUIStatus;
- (double)getContentBottomMargin;
- (void)onAddItemFromDetectorsWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onClikcItemCardWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onCanceItemOpenWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onExposeWithItem:(id)arg1 hasTitle:(BOOL)arg2;
- (void)setCameraScannerWrapper:(id)arg1;
- (void)updateEnergyInfoWithLiveData:(id)arg1;
- (void)resetEnergyInfo;
- (id)mixedMyQRWrapView;
- (void)setMixedMyQRWrapView:(id)arg1;
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
- (id)cameraScannerWrapper;
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
- (BOOL)isEnableAskAI;
- (void)setIsEnableAskAI:(BOOL)arg1;
- (BOOL)isEnableScanAIUIV2;
- (void)setIsEnableScanAIUIV2:(BOOL)arg1;
- (id)scanAIUIV2QRCodeButton;
- (void)setScanAIUIV2QRCodeButton:(id)arg1;
- (unsigned long long)mixedSwitchValue;
- (void)setMixedSwitchValue:(unsigned long long)arg1;
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
- (id)energyInfoView;
- (void)setEnergyInfoView:(id)arg1;
- (void).cxx_destruct;
@end
