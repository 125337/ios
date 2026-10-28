@interface WCFinderJumpInfoPanelView : UIView <WCFinderAdBannerViewDelegate, WCFinderHotSpotBannerViewDelegate, WCFinderPanelCollectionViewDelegate, WCFinderTLRedCoverBubbleViewDelegate, WCFinderJumpBigButtonDelegate, WCFinderJumpInfoAnimationViewDelegate, WCFinderJumpInfoButtonDelegate, WCFinderJumpInfoHardAdViewDelegate, WCFinderDynamicCardAdViewDelegate, WCFinderJumpInfoDynamicCarouselViewDelegate, WCFinderJumpInfoCardDelegate, WCFinderJumpInfoBubbleViewDelegate, WCFinderJumpInfoLabelDelegate, WCFinderJumpInfoCarouselViewDelegate, WCFinderJumpInfoMultiPacketViewDelegate, WCFinderJumpInfoCombinationViewDelegate, WCFinderSubtitleBubbleDelegate, WCFinderWarningJumpViewDelegate, WCFinderJumpInfoInteractDelegate, WCFinderJumpInfoCommentEnhanceBubbleViewDelegate, WCFinderNextLiveNoticeFeedBubbleViewDelegate, WCFinderCommentControversyTipsViewDelegate>
{
    BOOL _enableClick; // +0x8
    int _showPosition; // +0xc
    WCFinderFeedContentVM * _contentVM; // +0x10
    id <WCFinderJumpInfoPanelViewDelegate> _delegate; // +0x18
    NSMutableArray * _jumpInfoViewArray; // +0x20
    UIFont * _textFont; // +0x28
    UIColor * _textNormalColor; // +0x30
    UIColor * _adLabelColor; // +0x38
    double _bannerPadding; // +0x40
    double _jumpInfoMargin; // +0x48
    UIColor * _disableIconColor; // +0x50
    UIColor * _disableTextColor; // +0x58
    double _maxWidth; // +0x60
    unsigned long long _startExposeTime; // +0x68
    CGSize _iconSize; // +0x70
}
- (id)initWithShowPosition:(int)arg1 maxWidth:(double)arg2;
- (void)resetReuseState;
- (id)jumpInfoViewWithBusinessType:(int)arg1;
- (unsigned long long)firstOperatingType;
- (id)feedBubbleViewWithOperatingType:(unsigned long long)arg1;
- (void)updateWithJumpInfoArray:(id)arg1;
- (BOOL)forbidHiddenByOCR;
- (id)addCarouselViewWithJumpInfoArray:(id)arg1;
- (id)addmultiPacketViewWithJumpInfoArray:(id)arg1;
- (id)addJumpInfoViewWithJumpInfo:(id)arg1;
- (id)textNormalColorFromJumpInfo:(id)arg1;
- (void)updateJumpInfoViewMaxWidth:(id)arg1;
- (void)changeJumpInfoViewArray:(id)arg1 toJumpInfoArray:(id)arg2 animated:(BOOL)arg3;
- (void)changeJumpInfoView:(id)arg1 toJumpInfo:(id)arg2 animated:(BOOL)arg3;
- (void)changeToAppear:(BOOL)arg1 duration:(double)arg2;
- (void)completionForAppearAnimation;
- (void)onVideoPlayStateChanged:(BOOL)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)completePlayAction;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)enterLiveAction;
- (void)updateForLiveAppointmentState;
- (void)hideLiveAppointment;
- (void)updateIsLivingWithTitle:(id)arg1 subTitle:(id)arg2 livingDataItem:(id)arg3;
- (void)updateCollectionBubbleWith:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)getLiveNoticeWithJumpInfo:(id *)arg1 style:(id *)arg2;
- (id)getLiveNoticeInfo;
- (id)getBypReportChnlExtraForNoticeInfo;
- (void)getLivingMarkWithJumpInfo:(id *)arg1 style:(id *)arg2;
- (void)getLivingMarkWithLiveId:(unsigned long long *)arg1 objectId:(unsigned long long *)arg2;
- (id)getBypReportChnlExtraForLivingIcon;
- (void)setupSubviewLayout:(id)arg1;
- (void)updateLayout;
- (BOOL)needHighlightBigButton:(id)arg1;
- (BOOL)isJumpInfoArrayChanged:(id)arg1;
- (void)onPanelViewShowStateChanged;
- (id)jumpInfoViewArray;
- (void)setMaxWidth:(double)arg1;
- (void)liveFeedBubbleView:(id)arg1 clickNoticeInfo:(id)arg2 username:(id)arg3;
- (void)liveFeedBubbleView:(id)arg1 showNoticeInfo:(id)arg2 username:(id)arg3;
- (void)onClickCollectionDesc;
- (void)onFinderShowJumpBigFollowBtn:(id)arg1;
- (void)hiddenJumpBigFollowBtn:(id)arg1;
- (void)onFinderDidClickBigBtn:(id)arg1;
- (id)backgroundColorWithJumpInfo:(id)arg1;
- (void)finderJumpInfoView:(id)arg1 changeToShow:(BOOL)arg2 animated:(BOOL)arg3;
- (void)finderJumpInfoView:(id)arg1 needChangeToStyleWithIndex:(unsigned long long)arg2;
- (void)onFinderJumpInfoHardAdView:(id)arg1 needChangeToPhase:(unsigned long long)arg2;
- (void)onFinderJumpInfoHardAdViewDidClick:(id)arg1;
- (void)onFinderDynamicCardAdView:(id)arg1 needChangeToPhase:(unsigned long long)arg2;
- (void)onFinderDynamicCardAdViewDidClick:(id)arg1;
- (void)onFinderJumpInfoDynamicCarouselView:(id)arg1 needchangeToPhase:(unsigned long long)arg2;
- (void)onFinderJumpInfoDynamicCarouselViewDidClickCard:(id)arg1;
- (void)onFinderJumpInfoDynamicCarouselViewDidClickActionButton:(id)arg1;
- (void)onFinderJumpInfoCardDidClick:(id)arg1;
- (void)onFinderJumpInfoBubbleViewDidClick:(id)arg1;
- (void)onFinderJumpInfoLabelDidClick:(id)arg1;
- (void)finderJumpInfoCarouseView:(id)arg1 changeToCardWithIndex:(long long)arg2;
- (void)finderJumpInfoCarouseView:(id)arg1 didClickCard:(id)arg2;
- (void)onJumpInfoPacketViewDidClick:(id)arg1;
- (void)onFinderJumpInfoCombinationViewDidClick:(id)arg1;
- (id)jumpInfoViewWithJumpInfo:(id)arg1 subStyle:(id)arg2;
- (void)jumpInfoViewDidTapHotZone:(id)arg1;
- (void)jumpInfoViewDidTapHotZone:(id)arg1 area:(unsigned long long)arg2;
- (void)onJumpInfoButtonDidClick:(id)arg1;
- (void)onClickAdBannerView:(id)arg1;
- (BOOL)videoPauseState;
- (id)videoTid;
- (void)onClickHotSpotView:(id)arg1;
- (void)onPresentLiveConcertTicketRequestedWithNoticeInfo:(id)arg1;
- (void)onClickEnterLiving:(id)arg1;
- (void)onClickRedCoverBubbleView:(id)arg1;
- (double)enhanceBubleViewRelateMediaWidth:(id)arg1;
- (void)updateCurLayout:(id)arg1;
- (void)onClickSubtitleBubble:(id)arg1;
- (void)exposureCollectionNextEpisodeButton:(id)arg1;
- (void)clickedCollectionNextEpisodeButton:(id)arg1;
- (void)onClickWarningJumpView:(id)arg1;
- (void)onClickNextLiveNoticeBubbleView:(id)arg1;
- (void)onClickCommentDescControversyTips:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)showPosition;
- (void)setShowPosition:(int)arg1;
- (void)setJumpInfoViewArray:(id)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (id)textNormalColor;
- (void)setTextNormalColor:(id)arg1;
- (id)adLabelColor;
- (void)setAdLabelColor:(id)arg1;
- (double)bannerPadding;
- (void)setBannerPadding:(double)arg1;
- (double)jumpInfoMargin;
- (void)setJumpInfoMargin:(double)arg1;
- (BOOL)enableClick;
- (void)setEnableClick:(BOOL)arg1;
- (id)disableIconColor;
- (void)setDisableIconColor:(id)arg1;
- (id)disableTextColor;
- (void)setDisableTextColor:(id)arg1;
- (double)maxWidth;
- (unsigned long long)startExposeTime;
- (void)setStartExposeTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
