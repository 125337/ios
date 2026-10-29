@interface MMMusicLyricsViewController : MMUIViewController <MMMusicLyricsPanelDelegate, MMMusicLyricsRtnExt, WCListenLyricsViewControllerDelegate, WCListenLyricsViewControllerDataSource, UIGestureRecognizerDelegate>
{
    MMMusicInfo * m_musicInfo; // +0x68
    CGRect m_lyricsViewFrame; // +0x70
    MMMusicLyricsPanel * m_lyricsPanel; // +0x90
    MMWebImageView * m_albumImageView; // +0x98
    UIView * m_bgCoverView; // +0xa0
    MMUIButton * m_upBtn; // +0xa8
    BOOL _isDragOrClickLyrics; // +0xb0
    BOOL _isLargeImageMode; // +0xb1
    id <MMMusicLyricsViewControllerDelegate> _delegate; // +0xb8
    UIPanGestureRecognizer * _panGesture1; // +0xc0
    UIPanGestureRecognizer * _panGesture2; // +0xc8
    MMMusicHorizontalScrollingView * _titleScrollingView; // +0xd0
    MMMusicHorizontalScrollingView * _musicianScrollingView; // +0xd8
    UILabel * _titleLabel; // +0xe0
    UILabel * _musicianLabel; // +0xe8
    UIButton * _topAreaTapBtn; // +0xf0
    MMMusicListenLyricsViewController * _lyricContainerVC; // +0xf8
}
- (id)initWithMusicInfo:(id)arg1 andLyricsViewFrame:(CGRect)arg2;
- (void)initView;
- (void)initUpBtn;
- (void)initData;
- (id)getLyrics;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)changeImageMode:(BOOL)arg1;
- (void)onTapTopArea;
- (void)handleSlide:(id)arg1;
- (void)onWillCloseLyricsPanel;
- (void)onClickUpBtn;
- (void)onDragOrClickLyrics;
- (void)onLyricsDidSlideUp:(double)arg1;
- (void)onMusicLyricDidSeekToTime:(double)arg1;
- (void)OnGetLyrics:(id)arg1 Lyrics:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)wcListenLyricsViewController:(id)arg1 didSelectLyric:(double)arg2;
- (void)wcListenLyricsViewControllerDidDragging:(id)arg1;
- (BOOL)isMusicPlaying:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)panGesture1;
- (void)setPanGesture1:(id)arg1;
- (id)panGesture2;
- (void)setPanGesture2:(id)arg1;
- (BOOL)isDragOrClickLyrics;
- (void)setIsDragOrClickLyrics:(BOOL)arg1;
- (BOOL)isLargeImageMode;
- (void)setIsLargeImageMode:(BOOL)arg1;
- (id)titleScrollingView;
- (void)setTitleScrollingView:(id)arg1;
- (id)musicianScrollingView;
- (void)setMusicianScrollingView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)musicianLabel;
- (void)setMusicianLabel:(id)arg1;
- (id)topAreaTapBtn;
- (void)setTopAreaTapBtn:(id)arg1;
- (id)lyricContainerVC;
- (void)setLyricContainerVC:(id)arg1;
- (void).cxx_destruct;
@end

