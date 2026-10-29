@interface LiteAppAssetView : MMUIView <LiteAppAssetPickerControllerExt>
{
    BOOL m_isSelected; // +0x8
    BOOL m_isPreviewStyle; // +0x9
    UIView * m_disabledMaskView; // +0x10
    UIView * m_tagBackgroundView; // +0x18
    UILabel * m_lengthLabel; // +0x20
    UILabel * m_gifLogoView; // +0x28
    UIView * m_editImageView; // +0x30
    MMAssetSelectCheckButton * m_selectCheckButton; // +0x38
    double m_imgHeight; // +0x40
    BOOL _enabled; // +0x48
    BOOL _select; // +0x49
    BOOL _bDelayUpdateAssetInfo; // +0x4a
    BOOL _isAutoPicking; // +0x4b
    BOOL _isDragPicking; // +0x4c
    BOOL _isDragPickingInterupt; // +0x4d
    BOOL _isICloudLoading; // +0x4e
    LiteAppAssetInfo * _assetInfo; // +0x50
    id <LiteAppAssetViewDelegate> _delegate; // +0x58
    id <LiteAppAssetPickerControlCenter> _controlCenter; // +0x60
    UIImage * _defaultImage; // +0x68
    UIImageView * _m_assetImageView; // +0x70
    UIView * _m_selectionBgView; // +0x78
    MMUILabel * _m_nameLabel; // +0x80
    MMUILabel * _m_sizeLabel; // +0x88
    UIView * _limitTipsView; // +0x90
    UIView * _highlightView; // +0x98
    UILabel * _indexLabel; // +0xa0
    MMAssetICloudLoadingView * _icloudLoadingView; // +0xa8
    UIImageView * _mediaTypeIconView; // +0xb0
    WCLivePhotoButton * _livePhotoButton; // +0xb8
    WCLivePhotoButtonModel * _livePhotoButtonModel; // +0xc0
    NSMutableArray * _accessibleElements; // +0xc8
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
- (BOOL)showLivePhotoIcon;
- (void)updateAssetInfo:(BOOL)arg1;
- (BOOL)shouldShowMultiSelect;
- (double)tagLogoLBMargin;
- (void)showTagBGView;
- (void)showVideoLogoViewWithTime:(id)arg1;
- (void)showGifLogoView;
- (void)showEditedLogoView;
- (void)showAlertTips:(id)arg1;
- (void)showAlertTips:(id)arg1 scene:(unsigned long long)arg2;
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
- (void)showLivePhotoGuideView;
- (void)onTapButton;
- (void)toggleSelection;
- (void)realToggleSelection;
- (void)removeSelected;
- (void)tryToSelectAsset;
- (void)tryToSelectVideoWithAvAsset:(id)arg1 videoUrl:(id)arg2 assetError:(long long)arg3;
- (void)tryToSelectGifWithImage:(id)arg1 imageData:(id)arg2;
- (void)doSelectWithStateInfo:(id)arg1;
- (void)doSelect;
- (void)doEdit;
- (void)onSelectAssetFinish;
- (void)tagAseetToPreview;
- (void)updateBgMaskView;
- (BOOL)checkThumbImage;
- (id)timeStringBySeconds:(double)arg1;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)fadeOutHighlightView;
- (void)onAssetPickerControllerDidAddAssetId:(id)arg1;
- (void)setupLivePhotoButton:(unsigned long long)arg1;
- (void)initLivePhotoButton;
- (void)livePhotoButtonClicked:(id)arg1;
- (void)configLivePhotoIconShadow;
- (BOOL)isSelectAssetExceedMaxCount;
- (id)assetInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (BOOL)enabled;
- (BOOL)select;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (BOOL)bDelayUpdateAssetInfo;
- (void)setBDelayUpdateAssetInfo:(BOOL)arg1;
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
- (id)livePhotoButtonModel;
- (void)setLivePhotoButtonModel:(id)arg1;
- (void)setAccessibleElements:(id)arg1;
- (void).cxx_destruct;
@end

