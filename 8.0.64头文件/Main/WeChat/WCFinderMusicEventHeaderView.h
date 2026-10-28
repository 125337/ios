@interface WCFinderMusicEventHeaderView : WCFinderMusicBaseHeaderView <WCFinderFeedContentTextClickActionDelegate, RichTextLayoutDelegate, MMMusicPlayerContollerDelegate, WCFinderVideoTemplateViewDelegate, WCFinderMusicEventHeaderRecommendListViewDelegate, ILinkEventExt>
{
    BOOL _showMusicListenWholeSongViewSwitch; // +0x8
    MMUIButton * _ringBtn; // +0x10
    MMUIButton * _likeBtn; // +0x18
    MMUIButton * _joinButton; // +0x20
    WCFinderVideoTemplateView * _templateView; // +0x28
    VideoTemplate * _videoTemplate; // +0x30
    MMWebImageView * _mediaBkgImage; // +0x38
    MMUIButton * _audioMusicBtn; // +0x40
    WCFinderExpandHitTingPlayerContoller * _tingMusicBtn; // +0x48
    WCFinderDataItem * _fromDataItem; // +0x50
    RichTextView * _listenWholeSongView; // +0x58
    FinderMusicTopicInfo * _musicTopicInfo; // +0x60
    MMMusicVCOpenParams * _openMusicParams; // +0x68
    RichTextView * _songNameTextView; // +0x70
    UILabel * _songDescLabel; // +0x78
    UILabel * _nicknameLabel; // +0x80
    WCFinderAuthInfoIconView * _authIconView; // +0x88
    UIView * _playButtonBGView; // +0x90
    MMUIView * _btnContainerView; // +0x98
    WCFinderMusicEventHeaderRecommendListView * _recommendListView; // +0xa0
    WCFinderShadowBubbleView * _likeEduBubbleView; // +0xa8
    WCFinderShareItemInfo * _shareItemInfo; // +0xb0
}
+ (double)heightWithMusicTopicInfo:(id)arg1 andViewWidth:(double)arg2;
+ (BOOL)canShowAuthorView:(id)arg1;
+ (id)buildSongDetailLabel:(double)arg1;
+ (id)buildTitleTextView:(double)arg1;
+ (id)convertFromFinderMusicInfo:(id)arg1;
+ (id)getSongDescByMusicTopicInfo:(id)arg1;
- (id)likeEduBubbleView;
- (id)recommendListView;
- (id)playButtonBGView;
- (id)btnContainerView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)tingMusicBtn;
- (id)audioMusicBtn;
- (id)nicknameLabel;
- (id)authIconView;
- (id)ringBtn;
- (id)likeBtn;
- (id)joinButton;
- (id)songNameTextView;
- (id)listenWholeSongView;
- (id)mediaBkgImage;
- (void)pauseMusic;
- (void)updateLayout;
- (id)listenWholeSongText;
- (void)layoutSubviews;
- (void)changeRingBtnShow:(BOOL)arg1;
- (void)updateWithMusicTopicInfo:(id)arg1 fromDataItem:(id)arg2 shareItemInfo:(id)arg3;
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
- (void)onClickTemplateViewAction;
- (void)onClickLikeEduBubbleView;
- (void)finderMusicEventHeaderRecommendListViewDidReloadData;
- (void)finderMusicEventHeaderRecommendListViewDidClickTemplateActionButton;
- (void)finderMusicEventHeaderRecommendListViewDidClickRecommendMusicActionButtonWithMusicInfo:(id)arg1;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (void)playClicked:(id)arg1;
- (void)onClickPlayAudioAction:(id)arg1;
- (void)setRingBtn:(id)arg1;
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
- (id)openMusicParams;
- (void)setOpenMusicParams:(id)arg1;
- (void)setSongNameTextView:(id)arg1;
- (id)songDescLabel;
- (void)setSongDescLabel:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setPlayButtonBGView:(id)arg1;
- (void)setBtnContainerView:(id)arg1;
- (void)setRecommendListView:(id)arg1;
- (void)setLikeEduBubbleView:(id)arg1;
- (id)shareItemInfo;
- (void)setShareItemInfo:(id)arg1;
- (void).cxx_destruct;
@end
