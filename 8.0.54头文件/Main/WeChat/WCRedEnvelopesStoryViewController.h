@interface WCRedEnvelopesStoryViewController : MMUIViewController <UIScrollViewDelegate, PAGViewListener, WCPayWebPagViewDelegate, UIGestureRecognizerDelegate, WCPayWebImageViewDelegate, WCRedEnvelopesStoryPageViewDelegate>
{
    WCRedEnvelopesControlData * m_data; // +0x68
    MMUIButton * m_closeBtn; // +0x70
    BOOL _canSwipeUp; // +0x78
    BOOL _isPreviewMode; // +0x79
    BOOL _isNeedDelayPlayVideo; // +0x7a
    BOOL _isAutoPlayNow; // +0x7b
    BOOL _isMaskViewShouldStop; // +0x7c
    BOOL _bHasAutoMove; // +0x7d
    BOOL _bHasAutoPlay; // +0x7e
    BOOL _isSecondTimeAutoShowStory; // +0x7f
    BOOL _bHasManulTapMute; // +0x80
    WCRedEnvelopesStoryPageView * _m_redSkinStoryPage; // +0x88
    UIScrollView * _m_scrollView; // +0x90
    UIView * _m_scrollViewContentView; // +0x98
    NSMutableArray * _m_storysArr; // +0xa0
    UIPageControl * _m_pageControl; // +0xa8
    WCPayWebImageView * _m_redSkinCorpLogo; // +0xb0
    UIView * _m_redSkinTitleInfoView; // +0xb8
    UILabel * _m_redSkinDescLabel; // +0xc0
    UIImageView * _m_bottomMaskView; // +0xc8
    WCRedEnvelopesStoryDargUtil * _m_storyDragAnimationUtil; // +0xd0
    id <WCRedEnvelopesStoryViewControllerDelegate> _delegate; // +0xd8
    NSMutableArray * _m_storyPageArr; // +0xe0
    WCPayWebImageView * _m_storyViewMaskView; // +0xe8
    WCPayWebPagView * _m_storyPagView; // +0xf0
    UIButton * _m_enterMPBtn; // +0xf8
    UIImageView * _enterMPBkgView; // +0x100
    UIPanGestureRecognizer * _panGesture; // +0x108
    NSString * _sessionId; // +0x110
    long long _autoPlayInterval; // +0x118
    long long _firstFramePlayInterval; // +0x120
    MMTimer * _storyPicTimer; // +0x128
}
+ (BOOL)isNetworkTypeBetter4G;
+ (double)getRedSkinBeginY;
- (id)initWithData:(id)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotate;
- (void)initTopButton;
- (void)hideSelf;
- (void)setupWithData:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateScrollView;
- (void)onJumpAction;
- (void)prepareForScrollView;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (BOOL)isNotchScreen;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndScroll:(CGPoint *)arg1;
- (void)changeRedSkinPageFrame:(CGRect)arg1;
- (void)setCloseBtnHidden:(BOOL)arg1;
- (void)panGestureRecognize:(id)arg1;
- (void)reset;
- (double)getCurrentViewBeginY;
- (void)setupAutoPlayWithMute:(BOOL)arg1;
- (void)startAutoCarouselTimer;
- (void)autoPlayFirstImageTypeMedia;
- (void)onPlayerStop;
- (void)stopAutoCarousel;
- (void)onNextStory;
- (void)resetAutoPlayElemAlpha;
- (void)setMaskViewY:(double)arg1;
- (double)getSpaceLabelHeight:(id)arg1 withAttrDict:(id)arg2 withWidth:(double)arg3;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)stopAllVideo;
- (void)setUnMuteIfNeed;
- (void)playVideoIfNeeded;
- (void)playVideoIfNeeded:(BOOL)arg1;
- (void)dealloc;
- (void)setMaskViewAlpha:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onScrollViewSwipeUp:(id)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)setFrontElementHidden:(BOOL)arg1;
- (void)onTapMuteBtn:(BOOL)arg1;
- (void)reportWhenPageReturn;
- (void)setPageControlAndInfoViewAlpha:(double)arg1;
- (void)onTapWxAppInfo:(id)arg1;
- (id)m_redSkinStoryPage;
- (void)setM_redSkinStoryPage:(id)arg1;
- (id)m_scrollView;
- (void)setM_scrollView:(id)arg1;
- (id)m_scrollViewContentView;
- (void)setM_scrollViewContentView:(id)arg1;
- (id)m_storysArr;
- (void)setM_storysArr:(id)arg1;
- (id)m_pageControl;
- (void)setM_pageControl:(id)arg1;
- (id)m_redSkinCorpLogo;
- (void)setM_redSkinCorpLogo:(id)arg1;
- (id)m_redSkinTitleInfoView;
- (void)setM_redSkinTitleInfoView:(id)arg1;
- (id)m_redSkinDescLabel;
- (void)setM_redSkinDescLabel:(id)arg1;
- (id)m_bottomMaskView;
- (void)setM_bottomMaskView:(id)arg1;
- (id)m_storyDragAnimationUtil;
- (void)setM_storyDragAnimationUtil:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_storyPageArr;
- (void)setM_storyPageArr:(id)arg1;
- (id)m_storyViewMaskView;
- (void)setM_storyViewMaskView:(id)arg1;
- (id)m_storyPagView;
- (void)setM_storyPagView:(id)arg1;
- (id)m_enterMPBtn;
- (void)setM_enterMPBtn:(id)arg1;
- (id)enterMPBkgView;
- (void)setEnterMPBkgView:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (BOOL)canSwipeUp;
- (void)setCanSwipeUp:(BOOL)arg1;
- (BOOL)isPreviewMode;
- (void)setIsPreviewMode:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)isNeedDelayPlayVideo;
- (void)setIsNeedDelayPlayVideo:(BOOL)arg1;
- (BOOL)isAutoPlayNow;
- (void)setIsAutoPlayNow:(BOOL)arg1;
- (long long)autoPlayInterval;
- (void)setAutoPlayInterval:(long long)arg1;
- (long long)firstFramePlayInterval;
- (void)setFirstFramePlayInterval:(long long)arg1;
- (BOOL)isMaskViewShouldStop;
- (void)setIsMaskViewShouldStop:(BOOL)arg1;
- (BOOL)bHasAutoMove;
- (void)setBHasAutoMove:(BOOL)arg1;
- (BOOL)bHasAutoPlay;
- (void)setBHasAutoPlay:(BOOL)arg1;
- (id)storyPicTimer;
- (void)setStoryPicTimer:(id)arg1;
- (BOOL)isSecondTimeAutoShowStory;
- (void)setIsSecondTimeAutoShowStory:(BOOL)arg1;
- (BOOL)bHasManulTapMute;
- (void)setBHasManulTapMute:(BOOL)arg1;
- (void).cxx_destruct;
@end

