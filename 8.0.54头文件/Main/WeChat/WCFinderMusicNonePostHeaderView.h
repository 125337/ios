@interface WCFinderMusicNonePostHeaderView : WCFinderMusicBaseHeaderView <WCFinderFeedContentTextClickActionDelegate, RichTextLayoutDelegate, MMMusicPlayerContollerDelegate>
{
    FinderMusicTopicInfo * _musicTopicInfo; // +0x8
    MMMusicVCOpenParams * _openMusicParams; // +0x10
    MMWebImageView * _mediaBkgImage; // +0x18
    RichTextView * _songNameTextView; // +0x20
    UILabel * _songDescLabel; // +0x28
    MMUIButton * _favBtn; // +0x30
    UILabel * _nicknameLabel; // +0x38
    WCFinderAuthInfoIconView * _authIconView; // +0x40
    WCFinderExpandHitTingPlayerContoller * _playMusicBtn; // +0x48
    UIView * _playButtonBGView; // +0x50
    WCFinderDataItem * _fromDataItem; // +0x58
}
+ (double)heightWithMusicTopicInfo:(id)arg1 andViewWidth:(double)arg2;
+ (BOOL)canShowAuthorView:(id)arg1;
+ (id)buildSongDetailLabel:(double)arg1;
+ (id)buildTitleTextView:(double)arg1;
+ (id)convertFromFinderMusicInfo:(id)arg1;
+ (id)getSongDescByMusicTopicInfo:(id)arg1;
- (id)playButtonBGView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (id)playMusicBtn;
- (id)nicknameLabel;
- (id)authIconView;
- (id)favBtn;
- (id)songDescLabel;
- (id)songNameTextView;
- (id)mediaBkgImage;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)updateWithMusicTopicInfo:(id)arg1 fromDataItem:(id)arg2 shareItemInfo:(id)arg3;
- (void)onClickFavAction;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickAuthorView;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (void)playClicked:(id)arg1;
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (id)openMusicParams;
- (void)setOpenMusicParams:(id)arg1;
- (void)setMediaBkgImage:(id)arg1;
- (void)setSongNameTextView:(id)arg1;
- (void)setSongDescLabel:(id)arg1;
- (void)setFavBtn:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setPlayMusicBtn:(id)arg1;
- (void)setPlayButtonBGView:(id)arg1;
- (id)fromDataItem;
- (void)setFromDataItem:(id)arg1;
- (void).cxx_destruct;
@end

