@interface WCFinderMusicEventHeaderView : WCFinderMusicBaseHeaderView <WCFinderFeedContentTextClickActionDelegate, RichTextLayoutDelegate, MMMusicPlayerContollerDelegate, WCFinderVideoTemplateViewDelegate, WCActionSheetDelegate, WCFinderMusicEventHeaderRecommendListViewDelegate>
{
    BOOL _showMusicListenWholeSongViewSwitch; // +0x8
    MMUIButton * _ringBtn; // +0x10
    long long _videoRecommendCommentScene; // +0x18
    MMUIButton * _likeBtn; // +0x20
    MMUIButton * _joinButton; // +0x28
    WCFinderVideoTemplateView * _templateView; // +0x30
    VideoTemplate * _videoTemplate; // +0x38
    MMWebImageView * _mediaBkgImage; // +0x40
    MMUIButton * _audioMusicBtn; // +0x48
    WCFinderExpandHitTingPlayerContoller * _tingMusicBtn; // +0x50
    WCFinderDataItem * _fromDataItem; // +0x58
    MMUIButton * _listenWholeSongView; // +0x60
    FinderMusicTopicInfo * _musicTopicInfo; // +0x68
    RichTextView * _songNameTextView; // +0x70
    UILabel * _songDescLabel; // +0x78
    RichTextView * _listenWholeSongTextView; // +0x80
    UILabel * _nicknameLabel; // +0x88
    WCFinderAuthInfoIconView * _authIconView; // +0x90
    UIView * _playButtonBGView; // +0x98
    MMUIView * _btnContainerView; // +0xa0
    WCFinderMusicEventHeaderRecommendListView * _recommendListView; // +0xa8
    WCFinderMusicVideoRecommendView * _videoRecommendView; // +0xb0
    WCFinderMusicVideoRecommendCoordinator * _videoRecommendCoordinator; // +0xb8
    unsigned long long _autoPlayState; // +0xc0
    FinderMusicTopicInfo * _videoRecommendMusicTopicInfo; // +0xc8
    WCFinderShadowBubbleView * _likeEduBubbleView; // +0xd0
    WCFinderBGMPlayer * _bgmPlayer; // +0xd8
    WCFinderShareItemInfo * _shareItemInfo; // +0xe0
    FinderJumpInfo_SchemaInfo * _listenWholeSongDisplaySchemaInfo; // +0xe8
}
+ (double)heightWithMusicTopicInfo:(id)arg1 andViewWidth:(double)arg2;
+ (double)heightWithMusicTopicInfo:(id)arg1 andViewWidth:(double)arg2 isHalfScreenMode:(BOOL)arg3;
+ (BOOL)canShowAuthorView:(id)arg1;
+ (BOOL)enableShowListenWholeSongViewWithMusicTopicInfo:(id)arg1;
+ (BOOL)shouldEnableMusicVideoRecommend:(id)arg1 isHalfScreenMode:(BOOL)arg2;
+ (BOOL)shouldShowMusicVideoRecommend:(id)arg1 isHalfScreenMode:(BOOL)arg2;
+ (BOOL)enableMusicListenWholeSongIndependentButtonWithMusicTopicInfo:(id)arg1 isHalfScreenMode:(BOOL)arg2;
+ (id)buildSongDetailLabel:(double)arg1;
+ (id)buildTitleTextView:(double)arg1;
+ (id)convertFromFinderMusicInfo:(id)arg1;
+ (id)getSongDescByMusicTopicInfo:(id)arg1;
- (id)likeEduBubbleView;
- (id)recommendListView;
- (id)playButtonBGView;
- (id)btnContainerView;
- (BOOL)isHalfScreenMode;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)attachVideoRecommendView:(id)arg1;
- (id)tingMusicBtn;
- (id)audioMusicBtn;
- (id)nicknameLabel;
- (id)authIconView;
- (id)ringBtn;
- (id)likeBtn;
- (id)joinButton;
- (id)songNameTextView;
- (id)songDescLabel;
- (id)listenWholeSongView;
- (id)listenWholeSongTextView;
- (id)mediaBkgImage;
- (void)pauseMusic;
- (void)updateLayout;
- (id)listenWholeSongText;
- (BOOL)isValidListenWholeSongAppLogoURL:(id)arg1;
- (BOOL)hasValidListenWholeSongAppLogo:(id)arg1;
- (id)selectListenWholeSongDisplaySchemaInfo;
- (id)listenWholeSongDynamicIconContent;
- (void)updateListenWholeSongTextLayoutForIndependentButton:(BOOL)arg1;
- (void)layoutSubviews;
- (void)changeRingBtnShow:(BOOL)arg1;
- (void)updateWithMusicTopicInfo:(id)arg1 fromDataItem:(id)arg2 shareItemInfo:(id)arg3;
- (void)setupMusicVideoRecommendIfNeededWithMusicTopicInfo:(id)arg1 fromDataItem:(id)arg2 shareItemInfo:(id)arg3;
- (void)startMusicIfNeeded;
- (void)showMusicVideoRecommendCloseConfirmation;
- (void)actionSheetViewLoaded:(id)arg1;
- (void)onMusicVideoRecommendForeground;
- (void)showLikeEduBubbleView;
- (void)hiddenLikeEduBubbleView;
- (id)getHeaderTitle;
- (id)getHeaderIconUrl;
- (void)onClickFavAction;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickAuthorView;
- (void)joinButtonClicked;
- (void)onClickRingAction;
- (void)onClickLikeAction;
- (void)onClickListenWholeSongAction;
- (void)onClickTemplateViewAction;
- (void)onClickLikeEduBubbleView;
- (void)finderMusicEventHeaderRecommendListViewDidReloadData;
- (void)finderMusicEventHeaderRecommendListViewDidClickTemplateActionButton;
- (void)finderMusicEventHeaderRecommendListViewDidClickRecommendMusicActionButtonWithMusicInfo:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (void)playClicked:(id)arg1;
- (BOOL)canPlaySourceAudio;
- (void)onClickPlayAudioAction:(id)arg1;
- (void)setRingBtn:(id)arg1;
- (long long)videoRecommendCommentScene;
- (void)setVideoRecommendCommentScene:(long long)arg1;
- (void)setLikeBtn:(id)arg1;
- (void)setJoinButton:(id)arg1;
- (id)templateView;
- (id)videoTemplate;
- (void)setVideoTemplate:(id)arg1;
- (void)setMediaBkgImage:(id)arg1;
- (void)setAudioMusicBtn:(id)arg1;
- (void)setTingMusicBtn:(id)arg1;
- (id)fromDataItem;
- (void)setFromDataItem:(id)arg1;
- (BOOL)showMusicListenWholeSongViewSwitch;
- (void)setShowMusicListenWholeSongViewSwitch:(BOOL)arg1;
- (void)setListenWholeSongView:(id)arg1;
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (void)setSongNameTextView:(id)arg1;
- (void)setSongDescLabel:(id)arg1;
- (void)setListenWholeSongTextView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setPlayButtonBGView:(id)arg1;
- (void)setBtnContainerView:(id)arg1;
- (void)setRecommendListView:(id)arg1;
- (id)videoRecommendView;
- (void)setVideoRecommendView:(id)arg1;
- (id)videoRecommendCoordinator;
- (void)setVideoRecommendCoordinator:(id)arg1;
- (unsigned long long)autoPlayState;
- (void)setAutoPlayState:(unsigned long long)arg1;
- (id)videoRecommendMusicTopicInfo;
- (void)setVideoRecommendMusicTopicInfo:(id)arg1;
- (void)setLikeEduBubbleView:(id)arg1;
- (id)bgmPlayer;
- (void)setBgmPlayer:(id)arg1;
- (id)shareItemInfo;
- (void)setShareItemInfo:(id)arg1;
- (id)listenWholeSongDisplaySchemaInfo;
- (void)setListenWholeSongDisplaySchemaInfo:(id)arg1;
- (void).cxx_destruct;
@end
