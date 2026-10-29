@interface WCRedEnvelopesStoryPageView : UIView <WCPlayerConfigDelegate, WCPlayerDownloaderExt, WCPlayerConfigDelegate, WCPayWebImageViewDelegate, WCRedEnvelopesReceiveHomeTemplateViewDelegate>
{
    BOOL _isPageOne; // +0x8
    BOOL _isMutedNow; // +0x9
    BOOL _isPortrait; // +0xa
    BOOL _isLoopPlay; // +0xb
    unsigned int _m_loopCount; // +0xc
    unsigned int _subtypeId; // +0x10
    id <WCRedEnvelopesStoryPageViewDelegate> _m_delegate; // +0x18
    WCPlayerPlaybackInfo * _m_storyPlayerReporter; // +0x20
    double _m_lastStopTime; // +0x28
    RedPacketStoryInfo_StoryDetail * _m_storyDetail; // +0x30
    RedPacketStoryInfo_WxappInfo * _m_wxAppInfo; // +0x38
    NSString * _nsTitle; // +0x40
    NSString * _nsDesc; // +0x48
    NSString * _m_nsUrl; // +0x50
    WCPayWebImageView * _m_backgroundBlurView; // +0x58
    UIButton * _getSameCoverEntryBtn; // +0x60
    double _mutedBtnSlotTop; // +0x68
    double _mutedBtnRightEdgeInset; // +0x70
    WCPayWebImageView * _m_contentView; // +0x78
    unsigned long long _m_viewStyle; // +0x80
    WCRedEnvelopesReceiveHomeTemplateView * _m_redSkinView; // +0x88
    WCRedEnvelopesReceiveHomeTemplateItem * _m_redSkinItem; // +0x90
    UILabel * _m_titleLabel; // +0x98
    UILabel * _m_descLabel; // +0xa0
    WCPlayerView * _m_storyPlayerView; // +0xa8
    WCPayWebImageView * _firstFrameImageView; // +0xb0
    WCPlayerPlayArgs * _m_storyPlayerInfo; // +0xb8
    WCPlayerHttpMediaWrap * _m_storyMediaWrap; // +0xc0
    WCPlayerConfigControlView * _m_storyControlView; // +0xc8
    UIButton * _m_mutedBtn; // +0xd0
    UIButton * _m_videoMutedBtn; // +0xd8
    UIImageView * _storyPageLoadingView; // +0xe0
    long long _resourceIndex; // +0xe8
}
- (void)dealloc;
- (CGRect)currentMutedBtnSlot;
- (CGSize)backgroundBlurSizeWithFrame:(CGRect)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)resumePaying;
- (void)resumePaying:(BOOL)arg1;
- (void)stopPlaying;
- (id)createMediaWrapFromURL:(id)arg1;
- (id)createPlayerConfig;
- (void)layoutSubviews;
- (void)updateViews;
- (void)setImageUrl:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (BOOL)isNotchScreen;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (id)createPlayerInfoFromMediaWrap:(id)arg1;
- (void)onVideoPlay;
- (id)getSameCoverButtonView;
- (void)onClickGetSameRedSkinEntryBtn:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 withStoryDetail:(id)arg2 subtypeId:(unsigned int)arg3 index:(long long)arg4 wxAppInfo:(id)arg5;
- (id)initWithFrame:(CGRect)arg1 withStoryDetail:(id)arg2 subtypeId:(unsigned int)arg3 index:(long long)arg4;
- (void)onLoopPlayToEnd;
- (void)onTapSightIconView;
- (void)onTapMutaBtn;
- (void)setMuteBtn:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_storyPlayerReporter;
- (void)setM_storyPlayerReporter:(id)arg1;
- (double)m_lastStopTime;
- (void)setM_lastStopTime:(double)arg1;
- (unsigned int)m_loopCount;
- (void)setM_loopCount:(unsigned int)arg1;
- (id)m_storyDetail;
- (void)setM_storyDetail:(id)arg1;
- (id)m_wxAppInfo;
- (void)setM_wxAppInfo:(id)arg1;
- (id)nsTitle;
- (void)setNsTitle:(id)arg1;
- (id)nsDesc;
- (void)setNsDesc:(id)arg1;
- (id)m_nsUrl;
- (void)setM_nsUrl:(id)arg1;
- (BOOL)isPageOne;
- (void)setIsPageOne:(BOOL)arg1;
- (id)m_backgroundBlurView;
- (void)setM_backgroundBlurView:(id)arg1;
- (id)getSameCoverEntryBtn;
- (void)setGetSameCoverEntryBtn:(id)arg1;
- (double)mutedBtnSlotTop;
- (void)setMutedBtnSlotTop:(double)arg1;
- (double)mutedBtnRightEdgeInset;
- (void)setMutedBtnRightEdgeInset:(double)arg1;
- (id)m_contentView;
- (void)setM_contentView:(id)arg1;
- (unsigned long long)m_viewStyle;
- (void)setM_viewStyle:(unsigned long long)arg1;
- (id)m_redSkinView;
- (void)setM_redSkinView:(id)arg1;
- (id)m_redSkinItem;
- (void)setM_redSkinItem:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_descLabel;
- (void)setM_descLabel:(id)arg1;
- (id)m_storyPlayerView;
- (void)setM_storyPlayerView:(id)arg1;
- (id)firstFrameImageView;
- (void)setFirstFrameImageView:(id)arg1;
- (id)m_storyPlayerInfo;
- (void)setM_storyPlayerInfo:(id)arg1;
- (id)m_storyMediaWrap;
- (void)setM_storyMediaWrap:(id)arg1;
- (id)m_storyControlView;
- (void)setM_storyControlView:(id)arg1;
- (id)m_mutedBtn;
- (void)setM_mutedBtn:(id)arg1;
- (BOOL)isMutedNow;
- (void)setIsMutedNow:(BOOL)arg1;
- (BOOL)isPortrait;
- (void)setIsPortrait:(BOOL)arg1;
- (id)m_videoMutedBtn;
- (void)setM_videoMutedBtn:(id)arg1;
- (id)storyPageLoadingView;
- (void)setStoryPageLoadingView:(id)arg1;
- (unsigned int)subtypeId;
- (void)setSubtypeId:(unsigned int)arg1;
- (long long)resourceIndex;
- (void)setResourceIndex:(long long)arg1;
- (BOOL)isLoopPlay;
- (void)setIsLoopPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end
