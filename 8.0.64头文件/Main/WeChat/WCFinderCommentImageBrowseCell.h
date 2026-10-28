@interface WCFinderCommentImageBrowseCell : UICollectionViewCell <UIScrollViewDelegate, WCFinderContactExt, WCFinderHeadImageViewDelegate, WCFinderFeedContentTextClickActionDelegate, WCFinderFullScreenHorPanGestureDelegate>
{
    int _viewScene; // +0x8
    WCFinderComment * _comment; // +0x10
    UIImageView * _bigImageView; // +0x18
    UIScrollView * _scrollView; // +0x20
    id <WCFinderCommentImageBrowseCellDelegate> _delegate; // +0x28
    UIView * _containerView; // +0x30
    WCFinderFullScreenHorPanGesture * _horPanGesture; // +0x38
    WCFinderAnimationLoadingView * _loadingView; // +0x40
    UIView * _bottomContainerView; // +0x48
    WCFinderHeadImageView * _avatarImageView; // +0x50
    UILabel * _nickNameLabel; // +0x58
    UIImageView * _finderIconImageView; // +0x60
    UILabel * _timeAndIpRegionLabel; // +0x68
    double _timeLabelMinWidth; // +0x70
    WCFinderFeedContentTextView * _contentTextView; // +0x78
    MMUIButton * _replyButton; // +0x80
    WCFinderCommentLikeView * _commentLikeView; // +0x88
    WCFinderGradientView * _gradientView; // +0x90
    UIView * _userGuideView; // +0x98
    UIImageView * _arrowViewForUserGuide; // +0xa0
    UILabel * _titleLabelForUserGuide; // +0xa8
    NSMutableArray * _accessibilityElements; // +0xb0
    UIAccessibilityElement * _likeAccessibility; // +0xb8
}
+ (id)cellID;
+ (CGRect)fittingFrameForImageSize:(CGSize)arg1 containerWidth:(double)arg2 containerHeight:(double)arg3;
+ (double)bottomOffsetForContent;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)prepareForReuse;
- (void)adjustUILayout;
- (void)adjustNickNameLabelWidth;
- (void)_setImageViewImage:(id)arg1;
- (void)updateAvatarCornerWithAuthorFlag:(BOOL)arg1;
- (void)reportShrinkButtonExpose;
- (void)reportExpandButtonExpose;
- (void)updateVoiceOver;
- (id)_totalAccessibilityLabel;
- (void)setupUserGuideView;
- (void)showUserGuide;
- (void)dismissUserGuide;
- (void)handleDoubleTapBigImage:(id)arg1;
- (void)handleLongPressBigImage:(id)arg1;
- (void)handleClickAvatar:(id)arg1;
- (void)replyAction:(id)arg1;
- (void)clickLikeCommentAction:(id)arg1;
- (void)configWithComment:(id)arg1 isCommentClose:(BOOL)arg2 viewScene:(int)arg3 delegate:(id)arg4;
- (void)updateWithVisiblePercent:(double)arg1;
- (void)reportCellExpose;
- (void)didEndDisplaying;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)onFeedContentTextView:(id)arg1 clickText:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickKeywordUrl:(id)arg2;
- (void)finderHorPanGestureOnSingleTap;
- (void)finderHorPanGestureDragBegin;
- (void)finderHorPanGestureBackgroundAlphaChanged:(double)arg1;
- (void)finderHorPanGestureDragToRect:(CGRect)arg1;
- (void)finderHorPanGestureDragEnd;
- (void)finderHorPanGestureShouldCloseByDrag;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)bigImageView;
- (void)setBigImageView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)viewScene;
- (void)setViewScene:(int)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)horPanGesture;
- (void)setHorPanGesture:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)finderIconImageView;
- (void)setFinderIconImageView:(id)arg1;
- (id)timeAndIpRegionLabel;
- (void)setTimeAndIpRegionLabel:(id)arg1;
- (double)timeLabelMinWidth;
- (void)setTimeLabelMinWidth:(double)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)replyButton;
- (void)setReplyButton:(id)arg1;
- (id)commentLikeView;
- (void)setCommentLikeView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)userGuideView;
- (void)setUserGuideView:(id)arg1;
- (id)arrowViewForUserGuide;
- (void)setArrowViewForUserGuide:(id)arg1;
- (id)titleLabelForUserGuide;
- (void)setTitleLabelForUserGuide:(id)arg1;
- (id)accessibilityElements;
- (void)setAccessibilityElements:(id)arg1;
- (id)likeAccessibility;
- (void)setLikeAccessibility:(id)arg1;
- (void).cxx_destruct;
@end
