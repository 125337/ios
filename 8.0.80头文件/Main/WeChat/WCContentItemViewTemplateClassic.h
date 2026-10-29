@interface WCContentItemViewTemplateClassic : WCContentItemBaseView <MMWebViewDelegate, WCImageViewDelegate, RichTextLayoutDelegate, UIGestureRecognizerDelegate, MMMusicPlayerContollerDelegate, WCNetworkMediaPlayerDelegate, WCForceTouchPreviewProtocol>
{
    UILabel * _titleLabel; // +0x38
    UILabel * _descLabel; // +0x40
    WCImageView * _coverImage; // +0x48
    MMMusicPlayerContoller * _playButton; // +0x50
    UIImageView * _defaultImageView; // +0x58
    BOOL _forbidJumpUrl; // +0x60
    MMUIWindow * m_fullScreenWindow; // +0x68
    int _currentPage; // +0x70
    double _targetMargin; // +0x78
    double _targetWidth; // +0x80
    BOOL _bSceneFromSearch; // +0x88
    BOOL _closeAdLongVideoForViewDetail; // +0x89
    BOOL _cardStyleOptimization; // +0x8a
    WCTimeLineCellMusicPlayerView * _musicView; // +0x90
}
+ (BOOL)isMusicMVType:(id)arg1;
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2 appID:(id)arg3;
- (void)setPlayButtonHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)setBSceneFromSearch:(BOOL)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)addFavorite;
- (void)onShareToOpenSDK:(id)arg1;
- (void)onLongTouch;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)jumpToViewStreamVideo;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayer;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(BOOL)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (void)onClickWCImage:(id)arg1;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)setNonInteractive;
- (void)dealloc;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (double)targetMargin;
- (void)setTargetMargin:(double)arg1;
- (double)targetWidth;
- (void)setTargetWidth:(double)arg1;
- (BOOL)bSceneFromSearch;
- (BOOL)closeAdLongVideoForViewDetail;
- (void)setCloseAdLongVideoForViewDetail:(BOOL)arg1;
- (id)musicView;
- (void)setMusicView:(id)arg1;
- (BOOL)cardStyleOptimization;
- (void)setCardStyleOptimization:(BOOL)arg1;
- (void).cxx_destruct;
@end
