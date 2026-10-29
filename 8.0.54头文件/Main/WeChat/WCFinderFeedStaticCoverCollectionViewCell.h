@interface WCFinderFeedStaticCoverCollectionViewCell : UICollectionViewCell <WCGeneralMonitorCellProtocol, WCFinderFeedContentVMExt, WCFinderFeedStaticCoverContactViewDelegate, MMImageLoaderObserver, UIGestureRecognizerDelegate, WCFinderFeedContentMediaActionProtocol, WCFinderShareAbstractCell, WCFinderFlowCellAutoplayProtocol>
{
    BOOL _isSelected; // +0x8
    id <WCFinderFeedStaticCoverCollectionViewCellDelegate> _delegate; // +0x10
    id <WCFinderFeedStaticCoverCollectionViewCellDataSource> _dataSource; // +0x18
    double _contactPadding; // +0x20
    double _descriptionPadding; // +0x28
    WCFinderFeedContentVM * _contentVM; // +0x30
    NSString * _accessibilityPrefix; // +0x38
    unsigned long long _menuItemFlag; // +0x40
    unsigned long long _menuItemStyle; // +0x48
    NSIndexPath * _indexPath; // +0x50
    WCFinderStaticCoverCollectionViewCellConfig * _coverConfig; // +0x58
    WCFinderFeedStaticCoverView * _coverView; // +0x60
    WCFinderFeedStaticCoverContactView * _contactView; // +0x68
    RichTextView * _descLabel; // +0x70
    UILabel * _postTimeLabel; // +0x78
    WCFinderFeedMediaWrap * _mediaWrap; // +0x80
    WCFinderPageControl * _pageCtrl; // +0x88
    UIView * _oMaskView; // +0x90
    UILabel * _maskTipsLabel; // +0x98
    UIImageView * _maskIconView; // +0xa0
    WCFinderStreamCellUploadStatusView * _uploadStatusView; // +0xa8
    unsigned long long _styleMode; // +0xb0
    UIImage * _snapshotImage; // +0xb8
    UIImage * _fullScreenImage; // +0xc0
    WCFinderMaskButton * _followReccommendReasonBtn; // +0xc8
    RichTextView * _innerReccommendReasonLabel; // +0xd0
    WCFinderSimplePlayerView * _playerView; // +0xd8
    unsigned long long _autoPlayStartTime; // +0xe0
    WCFinderFeedLBSRecommendReasonView * _lbsRecommendReasonTitle; // +0xe8
    WCFinderFeedLBSRecommendReasonView * _lbsRecommendReasonSummary; // +0xf0
    UIButton * _leftTopBadge; // +0xf8
    UIView * _markSelectedView; // +0x100
    UIImageView * _markSelectedImageView; // +0x108
    UILongPressGestureRecognizer * _longPressGesture; // +0x110
    UIAccessibilityElement * _cellAccesibilityElement; // +0x118
}
+ (double)pageCtrlHeight;
+ (id)pageCtrlStyleConfig;
+ (BOOL)showFollowReasonStateWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
+ (BOOL)showInnerReasonStateWithContentVM:(id)arg1;
+ (id)followReasonFont;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 config:(id)arg3;
+ (double)descHeightWith:(id)arg1 width:(double)arg2 config:(id)arg3;
+ (id)descLabelFontWithConfig:(id)arg1;
+ (id)descContentWithContentVM:(id)arg1;
+ (void)resignMenuFirstResponderCell:(id)arg1;
- (id)getGeneralMonitorCellBizId;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setNeedCornerRadius:(BOOL)arg1;
- (BOOL)needCornerRadius;
- (void)initSubviews;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)coverBGColor;
- (void)setCoverBGColor:(id)arg1;
- (id)ensureMaskIconView:(BOOL)arg1;
- (id)pageCtrl;
- (void)setContactPadding:(double)arg1;
- (void)setCoverRenderReporter:(id /* block */)arg1;
- (BOOL)isCoverLoaded;
- (void)updateContentWith:(id)arg1 cellConfig:(id)arg2;
- (void)updateContentWith:(id)arg1 cellConfig:(id)arg2 selectable:(BOOL)arg3;
- (id)followRecommentReasonColorWithContentVM:(id)arg1;
- (void)toggleSelection;
- (void)updateSelectView;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (BOOL)showMaskUploadingState;
- (BOOL)showMaskUploadFailedState;
- (void)updateMaskTipsViews:(id)arg1 tipsIcon:(id)arg2 showProgress:(BOOL)arg3;
- (void)layoutMaskViews;
- (void)setFixedCoverSize:(CGSize)arg1;
- (void)setCoverViewCornerRadius:(double)arg1;
- (void)adjustMarginAndHeight;
- (void)clickContact;
- (void)updateInfoView;
- (void)prepareForLiveMorphTransition;
- (void)onClickLabel:(id)arg1;
- (void)onFeedContentUserFollowStateChanged:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFeedContentStickyTopStatueChanged:(id)arg1;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 privateStateChange:(BOOL)arg2;
- (void)onFeedContent:(id)arg1 changeUploadStatus:(id)arg2;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)updateAccessibilityLabel;
- (void)startLiveAnimation;
- (void)switchUIMode:(unsigned long long)arg1;
- (void)onClickPrivateMsgAction;
- (id)transitionStartImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (id)transitionEndImage;
- (id)cellIdentifier;
- (void)doShareAnimation;
- (unsigned long long)autoPlayCellType;
- (void)play;
- (void)stop;
- (void)pause;
- (BOOL)isPlaying;
- (BOOL)shouldPreventAutoPlay;
- (CGRect)autoPlayPlayerArea;
- (void)recordAutoPlayBeforePauseOrStop;
- (void)reportCellAutoPlayPauseOrStopEvent;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)contentMediaDidEndPlay:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)longSingleFingerPressGes:(id)arg1;
- (void)onAnchor;
- (void)onRemove;
- (void)onMutiSeleted;
- (void)onForward;
- (void)onEditTag;
- (void)onDelete;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (double)contactPadding;
- (double)descriptionPadding;
- (void)setDescriptionPadding:(double)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)accessibilityPrefix;
- (void)setAccessibilityPrefix:(id)arg1;
- (unsigned long long)menuItemFlag;
- (void)setMenuItemFlag:(unsigned long long)arg1;
- (unsigned long long)menuItemStyle;
- (void)setMenuItemStyle:(unsigned long long)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (id)coverConfig;
- (void)setCoverConfig:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)postTimeLabel;
- (void)setPostTimeLabel:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (void)setPageCtrl:(id)arg1;
- (id)oMaskView;
- (void)setOMaskView:(id)arg1;
- (id)maskTipsLabel;
- (void)setMaskTipsLabel:(id)arg1;
- (id)maskIconView;
- (void)setMaskIconView:(id)arg1;
- (id)uploadStatusView;
- (void)setUploadStatusView:(id)arg1;
- (unsigned long long)styleMode;
- (void)setStyleMode:(unsigned long long)arg1;
- (id)snapshotImage;
- (void)setSnapshotImage:(id)arg1;
- (id)fullScreenImage;
- (void)setFullScreenImage:(id)arg1;
- (id)followReccommendReasonBtn;
- (void)setFollowReccommendReasonBtn:(id)arg1;
- (id)innerReccommendReasonLabel;
- (void)setInnerReccommendReasonLabel:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (unsigned long long)autoPlayStartTime;
- (void)setAutoPlayStartTime:(unsigned long long)arg1;
- (id)lbsRecommendReasonTitle;
- (void)setLbsRecommendReasonTitle:(id)arg1;
- (id)lbsRecommendReasonSummary;
- (void)setLbsRecommendReasonSummary:(id)arg1;
- (id)leftTopBadge;
- (void)setLeftTopBadge:(id)arg1;
- (id)markSelectedView;
- (void)setMarkSelectedView:(id)arg1;
- (id)markSelectedImageView;
- (void)setMarkSelectedImageView:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (id)cellAccesibilityElement;
- (void)setCellAccesibilityElement:(id)arg1;
- (void).cxx_destruct;
@end

