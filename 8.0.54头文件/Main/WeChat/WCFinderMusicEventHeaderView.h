@interface WCFinderMusicEventHeaderView : WCFinderMusicBaseHeaderView <WCFinderFeedContentTextClickActionDelegate, RichTextLayoutDelegate, MMMusicPlayerContollerDelegate, WCFinderVideoTemplateViewDelegate, WCFinderMusicEventHeaderRecommendListViewDelegate>
{
    MMUIButton * _ringBtn; // +0x8
    MMUIButton * _likeBtn; // +0x10
    MMUIButton * _joinButton; // +0x18
    WCFinderVideoTemplateView * _templateView; // +0x20
    VideoTemplate * _videoTemplate; // +0x28
    MMWebImageView * _mediaBkgImage; // +0x30
    MMUIButton * _audioMusicBtn; // +0x38
    WCFinderExpandHitTingPlayerContoller * _tingMusicBtn; // +0x40
    WCFinderDataItem * _fromDataItem; // +0x48
    FinderMusicTopicInfo * _musicTopicInfo; // +0x50
    MMMusicVCOpenParams * _openMusicParams; // +0x58
    RichTextView * _songNameTextView; // +0x60
    UILabel * _songDescLabel; // +0x68
    UILabel * _nicknameLabel; // +0x70
    WCFinderAuthInfoIconView * _authIconView; // +0x78
    UIView * _playButtonBGView; // +0x80
    MMUIView * _btnContainerView; // +0x88
    WCFinderMusicEventHeaderRecommendListView * _recommendListView; // +0x90
    WCFinderShadowBubbleView * _likeEduBubbleView; // +0x98
    WCFinderShareItemInfo * _shareItemInfo; // +0xa0
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
- (id)songDescLabel;
- (id)songNameTextView;
- (id)mediaBkgImage;
- (void)pauseMusic;
- (void)updateLayout;
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
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (void)playClicked:(id)arg1;
- (void)onClickPlayAudioAction:(id)arg1;
- (void)onClickTemplateViewAction;
- (void)onClickLikeEduBubbleView;
- (void)finderMusicEventHeaderRecommendListViewDidReloadData;
- (void)finderMusicEventHeaderRecommendListViewDidClickTemplateActionButton;
- (void)finderMusicEventHeaderRecommendListViewDidClickRecommendMusicActionButtonWithMusicInfo:(id)arg1;
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
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (id)openMusicParams;
- (void)setOpenMusicParams:(id)arg1;
- (void)setSongNameTextView:(id)arg1;
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

