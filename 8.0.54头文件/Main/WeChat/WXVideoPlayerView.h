@interface WXVideoPlayerView : MMUIView <SightViewDelegate, IVideoExt, FullScreenGestureDelegate, IMsgExt>
{
    unsigned long long m_ui64PlayStartTime; // +0x8
    WXFullScreenGestureRecognizer * _gestureView; // +0x10
    unsigned long long m_emDownloadMode; // +0x18
    UIButton * m_closeButton; // +0x20
    UIImageView * m_topBkgView; // +0x28
    UIImageView * m_bottomBkgView; // +0x30
    VideoProgressBar * m_progressBar; // +0x38
    NSString * m_videoPath; // +0x40
    BOOL m_bPreViewMode; // +0x48
    BOOL m_shouldRestartPlay; // +0x49
    BOOL m_videoExpired; // +0x4a
    BOOL _isAnimating; // +0x4b
    BOOL _soundable; // +0x4c
    BOOL _m_bCurrentVideoMessageStartPlay; // +0x4d
    CMessageWrap * m_msgWrap; // +0x50
    UILabel * m_percentageLabel; // +0x58
    id <WXVideoPlayerViewDelegate> m_delegate; // +0x60
    id <WXVideoPlayerViewTouchDelegate> m_touchDelegate; // +0x68
    UIButton * m_playAttachVideoButton; // +0x70
    SightView * _sightView; // +0x78
}
- (void)whenDidActive;
- (void)whenGoingToResign;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setTouchDelegate:(id)arg1;
- (unsigned long long)totalTime;
- (double)getCurrPlayedTimeInSec;
- (void)resetViewPosition;
- (void)setFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 MsgWrap:(id)arg2 Soundable:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1 MsgWrap:(id)arg2 VideoPath:(id)arg3 Soundable:(BOOL)arg4;
- (id)initWithFrame:(CGRect)arg1 MsgWrap:(id)arg2 VideoPath:(id)arg3 Soundable:(BOOL)arg4 PreviewMode:(BOOL)arg5;
- (id)initWithFrame:(CGRect)arg1 MsgWrap:(id)arg2 VideoPath:(id)arg3 Soundable:(BOOL)arg4 PreviewMode:(BOOL)arg5 delegate:(id)arg6;
- (id)m_videoPath;
- (void)setPreViewMode;
- (void)resetPlayerView;
- (void)genVideoPlayStat;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickDetailButton;
- (void)initView;
- (void)startVideoStreamDownload;
- (void)onCloseBtnClick;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)setToolViewsHidden:(BOOL)arg1;
- (void)onSightProgressBarHidden;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (BOOL)doCheckBeforeStartPlay;
- (BOOL)startPlay;
- (void)getReadyForPlay;
- (void)stopPlay;
- (void)stopPlay:(id)arg1;
- (void)pause;
- (void)InternalUpdateVideo:(id)arg1;
- (void)hideProgress;
- (void)updateProgress:(unsigned int)arg1;
- (void)handleDownloadFail;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onClickIconViewOfSightView:(id)arg1;
- (BOOL)sightView:(id)arg1 playbackDidReadEnd:(BOOL)arg2;
- (void)onStartToPlayVideo;
- (void)onVideoStreamDownloadFail:(BOOL)arg1;
- (void)onSightDurationUpdate:(struct)arg1;
- (void)setIsAnimating:(BOOL)arg1;
- (void)layoutSubviews;
- (BOOL)isNeedPlayFromEveryDisplay;
- (void)setDownloadMode:(unsigned long long)arg1;
- (void)pauseForDownloading;
- (void)playVideoOnDownloaded;
- (void)showIconViewAndHindLoadingView;
- (id)m_msgWrap;
- (void)setM_msgWrap:(id)arg1;
- (void)setM_videoPath:(id)arg1;
- (id)m_percentageLabel;
- (void)setM_percentageLabel:(id)arg1;
- (BOOL)m_shouldRestartPlay;
- (void)setM_shouldRestartPlay:(BOOL)arg1;
- (BOOL)m_videoExpired;
- (void)setM_videoExpired:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_touchDelegate;
- (void)setM_touchDelegate:(id)arg1;
- (id)m_playAttachVideoButton;
- (void)setM_playAttachVideoButton:(id)arg1;
- (id)sightView;
- (void)setSightView:(id)arg1;
- (BOOL)isAnimating;
- (BOOL)soundable;
- (void)setSoundable:(BOOL)arg1;
- (BOOL)m_bCurrentVideoMessageStartPlay;
- (void)setM_bCurrentVideoMessageStartPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end

