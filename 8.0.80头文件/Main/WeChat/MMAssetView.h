@interface MMAssetView : MMUIView <MMAssetPickerControllerExt, WCForceTouchPreviewProtocol>
{
    BOOL m_isSelected; // +0x8
    BOOL m_isPreviewStyle; // +0x9
    BOOL m_useLightStyle; // +0xa
    UIView * m_disabledMaskView; // +0x10
    UIView * m_tagBackgroundView; // +0x18
    UILabel * m_lengthLabel; // +0x20
    UILabel * m_gifLogoView; // +0x28
    UIView * m_editImageView; // +0x30
    MMAssetSelectCheckButton * m_selectCheckButton; // +0x38
    double m_imgHeight; // +0x40
    BOOL _enabled; // +0x48
    BOOL _isInPreview; // +0x49
    BOOL _bDelayUpdateAssetInfo; // +0x4a
    BOOL _isAutoPicking; // +0x4b
    BOOL _isDragPicking; // +0x4c
    BOOL _isDragPickingInterupt; // +0x4d
    BOOL _isICloudLoading; // +0x4e
    MMAssetInfo * _assetInfo; // +0x50
    id <MMAssetViewDelegate> _delegate; // +0x58
    id <MMImagePickerControlCenter> _controlCenter; // +0x60
    id <MMAssetPickerControllerFinderAssetDelegate> _m_finderDelegate; // +0x68
    MMAssetPickerController * _parent; // +0x70
    UIImage * _defaultImage; // +0x78
    NSString * _unselectableReason; // +0x80
    UIImageView * _m_assetImageView; // +0x88
    UIView * _m_selectionBgView; // +0x90
    MMUILabel * _m_nameLabel; // +0x98
    MMUILabel * _m_sizeLabel; // +0xa0
    UIView * _limitTipsView; // +0xa8
    UIView * _highlightView; // +0xb0
    UILabel * _indexLabel; // +0xb8
    MMAssetICloudLoadingView * _icloudLoadingView; // +0xc0
    UIImageView * _mediaTypeIconView; // +0xc8
    WCLivePhotoButton * _livePhotoButton; // +0xd0
    NSMutableArray * _accessibleElements; // +0xd8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 useLightStyle:(BOOL)arg2;
- (void)layoutSubviews;
- (id)limitTipsView;
- (BOOL)tryShowFileSizeLimitTips;
- (void)showOriginSizeLimitAlert;
- (void)hiddeFileSizeLimitTips;
- (void)prepareForReuse;
- (void)setAssetInfo:(id)arg1;
- (void)setIsDragPicking:(BOOL)arg1;
- (void)setIsICloudLoading:(BOOL)arg1;
- (void)updateAssetInfo;
- (void)updateAssetInfoWithAnimation;
- (BOOL)isC2CScene;
- (BOOL)isSnsScene;
- (BOOL)canShowEducationHalfscreen;
- (BOOL)isShowLivePhotoBtn;
- (BOOL)isShowLivePhotoIcon;
- (void)updateLivePhotoIconView;
- (void)showLivePhotoIconView:(BOOL)arg1;
- (void)tryDisplayLivePhotoIconView;
- (void)updateAssetInfo:(BOOL)arg1;
- (BOOL)shouldShowMultiSelect;
- (void)changeToSmallPreviewStyle;
- (double)tagLogoLBMargin;
- (void)showTagBGView;
- (void)showVideoLogoViewWithTime:(id)arg1;
- (void)showGifLogoView;
- (void)showEditedLogoView;
- (void)showAseetNameAndSize;
- (void)showAlertTips:(id)arg1;
- (void)showAlertTips:(id)arg1 scene:(unsigned long long)arg2;
- (void)setIsInPreview:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)updateEnabledState;
- (BOOL)isCurrentAssetEnable;
- (void)updateAssetViewEnabledWithSelectedCount:(unsigned long long)arg1;
- (id)accessibleElements;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (BOOL)accessibilityPerformMagicTap;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (CGPoint)accessibilityActivationPoint;
- (void)showedSelectedMarkWithIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)toggleLivePhotoIconVisibilityWithAnimate:(BOOL)arg1;
- (BOOL)isShowLivePhotoGuide;
- (void)showLivePhotoGuideView;
- (void)onAcceptButtonDidClick;
- (void)onTapButton;
- (void)toggleSelection;
- (BOOL)select;
- (void)setSelect:(BOOL)arg1;
- (BOOL)isSelectAssetExceedMaxCount;
- (void)realToggleSelection;
- (void)reportSelectFailWithState:(id)arg1;
- (void)reportSelectFailForExceededFileSize:(BOOL)arg1 isExceededMaxCount:(BOOL)arg2;
- (void)removeSelected;
- (void)tagAseetToPreview;
- (void)updateBgMaskView;
- (void)addMaskToAllVideoAsset;
- (void)addMaskToAllTheOtherAsset;
- (id)videoSelectionStateWithoutFetchingAsset;
- (void)tryToSelectAsset;
- (void)tryToSelectVideoWithAvAsset:(id)arg1 videoUrl:(id)arg2 assetError:(long long)arg3;
- (BOOL)gifIsSendMode;
- (void)finishGifSelectWithStateInfo:(id)arg1;
- (void)fetchGifDataAndSelectWithReportBlock:(id /* block */)arg1;
- (void)tryToSelectGifWithImage:(id)arg1 imageData:(id)arg2;
- (void)doSelectWithStateInfo:(id)arg1;
- (void)doSelect;
- (void)doEdit;
- (void)onSelectAssetFinish;
- (BOOL)checkThumbImage;
- (id)timeStringBySeconds:(double)arg1;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)onAssetPickerControllerChangeLivePhotoIconState:(id)arg1;
- (void)onAssetPickerControllerChangeSelectInfosOrder;
- (void)onAssetPickerControllerFinishEditAssetInfo:(id)arg1;
- (void)onAssetPickerControllerUpdateAllAssetViewBorderWithAsset:(id)arg1;
- (void)onAssetPickerControllerDidAddAssetId:(id)arg1;
- (void)onAssetPickerControllerFinishDragSelect;
- (void)tryAutoSelectAsset;
- (void)tryDragSelectAsset;
- (void)fadeOutHighlightView;
- (void)setupLivePhotoButton:(unsigned long long)arg1;
- (void)initLivePhotoButton;
- (void)livePhotoButtonClicked:(id)arg1;
- (void)configLivePhotoIconShadow;
- (void)configLivePhotoDataReport;
- (id)genLivePhotoReportDict;
- (id)assetInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (id)m_finderDelegate;
- (void)setM_finderDelegate:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (BOOL)enabled;
- (BOOL)isInPreview;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (BOOL)bDelayUpdateAssetInfo;
- (void)setBDelayUpdateAssetInfo:(BOOL)arg1;
- (id)unselectableReason;
- (void)setUnselectableReason:(id)arg1;
- (id)m_assetImageView;
- (void)setM_assetImageView:(id)arg1;
- (id)m_selectionBgView;
- (void)setM_selectionBgView:(id)arg1;
- (id)m_nameLabel;
- (void)setM_nameLabel:(id)arg1;
- (id)m_sizeLabel;
- (void)setM_sizeLabel:(id)arg1;
- (void)setLimitTipsView:(id)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (id)indexLabel;
- (void)setIndexLabel:(id)arg1;
- (id)icloudLoadingView;
- (void)setIcloudLoadingView:(id)arg1;
- (id)mediaTypeIconView;
- (void)setMediaTypeIconView:(id)arg1;
- (BOOL)isAutoPicking;
- (void)setIsAutoPicking:(BOOL)arg1;
- (BOOL)isDragPicking;
- (BOOL)isDragPickingInterupt;
- (void)setIsDragPickingInterupt:(BOOL)arg1;
- (BOOL)isICloudLoading;
- (id)livePhotoButton;
- (void)setLivePhotoButton:(id)arg1;
- (void)setAccessibleElements:(id)arg1;
- (void).cxx_destruct;
@end
