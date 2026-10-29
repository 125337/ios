@interface WCMicroMerchantAdCellView : MMUIView <WCMicroMerchantAdCellHeaderDelegate, WCMicroMerchantAdVideoViewDelegate>
{
    BOOL _isMediaViewFullExposed; // +0x8
    BOOL _isViewAppear; // +0x9
    id <WCTimeLineCellViewDelegate> _timelineCellViewDelegate; // +0x10
    WCDataItem * _m_dataItem; // +0x18
    WCFoldSnsAdvertiseInfo * _foldAdInfo; // +0x20
    WCAdURLImageView * _singleImageView; // +0x28
    WCMicroMerchantAdVideoView * _adVideoView; // +0x30
    UIView * _mediaContainer; // +0x38
    UIView * _auxiliaryOverlayView; // +0x40
    MMUIButton * _adContainerClickButton; // +0x48
    WCAdURLImageView * _headImageView; // +0x50
    UILabel * _nameLabel; // +0x58
    WCAdURLImageView * _goodShopIcon; // +0x60
    RichTextView * _descLabel; // +0x68
    WCMicroMerchantAdProductCardView * _productCardView; // +0x70
    MMUIView * _actionButtonView; // +0x78
    UIView * _adContainer; // +0x80
    WCMicroMerchantAdCellHeader * _cellHeader; // +0x88
    MMUIButton * _actionButton; // +0x90
    UILabel * _actionTitle; // +0x98
    WCAdURLImageView * _actionIcon; // +0xa0
    UILabel * _auxiliaryOverlayLabel; // +0xa8
}
+ (double)getCellHeightForDataItem:(id)arg1;
+ (double)getCellHeightForDataItem:(id)arg1 containerWidth:(double)arg2;
- (id)init;
- (void)initView;
- (void)addObserverForForegroundNotification;
- (void)updateWithDataItem:(id)arg1;
- (void)setupMediaView;
- (void)layoutSubviews;
- (double)microMerchantLayoutWidth;
- (double)microMerchantHorizontalMargin;
- (void)updateUI;
- (void)layoutActionButtonSize;
- (void)layoutMediaContainerSubviews;
- (BOOL)shouldShowAuxiliaryOverlay;
- (double)auxiliaryOverlayBackgroundAlpha;
- (void)layoutAdvertiserView;
- (id)cellHeader;
- (id)adContainer;
- (id)mediaContainer;
- (id)headImageView;
- (id)goodShopIcon;
- (id)auxiliaryOverlayView;
- (id)auxiliaryOverlayLabel;
- (void)setupBadgeIconWithFoldSnsInfo:(id)arg1 clickActionType:(unsigned int)arg2;
- (void)setupAdVideoView:(id)arg1;
- (id)nameLabel;
- (id)descLabel;
- (id)adContainerClickButton;
- (id)actionButton;
- (id)createClickMask;
- (id)actionButtonView;
- (double)headImageViewWidth;
- (void)onActionButtonClicked:(id)arg1;
- (void)onAdContainerClicked:(id)arg1;
- (void)onFeedbackContainerClick;
- (void)cellWillDisplay:(id)arg1 indexPath:(id)arg2 isReloadTrigger:(BOOL)arg3;
- (void)scrollViewDidScroll:(id)arg1 indexPath:(id)arg2;
- (double)visiblePercent:(id)arg1 indexPath:(id)arg2;
- (BOOL)isHalfVisible:(id)arg1 indexPath:(id)arg2;
- (BOOL)isMediaViewFullVisible:(id)arg1 indexPath:(id)arg2;
- (void)didEndDisplaying:(id)arg1 indexPath:(id)arg2 isReloadTrigger:(BOOL)arg3;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)onTimeLineViewReturn;
- (void)pauseAdVideoIfNeed;
- (void)resumeAdVideoIfNeed;
- (void)startHalfExpose;
- (void)pauseHalfExpose;
- (void)resumeHalfExpose;
- (void)endHalfExpose;
- (void)startMediaViewFullExpose;
- (void)endMediaViewFullExpose;
- (void)clearReportExposeInfo;
- (BOOL)canReportEffectiveExposure:(id)arg1;
- (double)fetchVideoContinuePlayInterval;
- (id)timelineCellViewDelegate;
- (void)setTimelineCellViewDelegate:(id)arg1;
- (id)m_dataItem;
- (void)setM_dataItem:(id)arg1;
- (id)foldAdInfo;
- (void)setFoldAdInfo:(id)arg1;
- (id)singleImageView;
- (void)setSingleImageView:(id)arg1;
- (id)adVideoView;
- (void)setAdVideoView:(id)arg1;
- (void)setMediaContainer:(id)arg1;
- (void)setAuxiliaryOverlayView:(id)arg1;
- (void)setAdContainerClickButton:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setGoodShopIcon:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (id)productCardView;
- (void)setProductCardView:(id)arg1;
- (void)setActionButtonView:(id)arg1;
- (void)setAdContainer:(id)arg1;
- (BOOL)isMediaViewFullExposed;
- (void)setIsMediaViewFullExposed:(BOOL)arg1;
- (void)setCellHeader:(id)arg1;
- (BOOL)isViewAppear;
- (void)setIsViewAppear:(BOOL)arg1;
- (void)setActionButton:(id)arg1;
- (id)actionTitle;
- (void)setActionTitle:(id)arg1;
- (id)actionIcon;
- (void)setActionIcon:(id)arg1;
- (void)setAuxiliaryOverlayLabel:(id)arg1;
- (void).cxx_destruct;
@end
