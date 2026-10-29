@interface WCFinderMusicCardBriefView : MMUIView
{
    id <WCFinderMusicCardBriefViewDelegate> _delegate; // +0x8
    MMUIButton * _joinButton; // +0x10
    UIView * _line; // +0x18
    MMWebImageView * _mediaBkgImage; // +0x20
    RichTextView * _songNameTextView; // +0x28
    UILabel * _nicknameLabel; // +0x30
    WCFinderAuthInfoIconView * _authIconView; // +0x38
    FinderMusicTopicInfo * _musicTopicInfo; // +0x40
    WCFinderDataItem * _fromDataItem; // +0x48
}
+ (id)buildTitleTextView:(double)arg1;
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (id)line;
- (id)joinButton;
- (id)mediaBkgImage;
- (id)songNameTextView;
- (id)nicknameLabel;
- (id)authIconView;
- (void)updateWithMusicTopicInfo:(id)arg1 fromDataItem:(id)arg2 shareItemInfo:(id)arg3;
- (void)layoutSubviews;
- (void)layoutAllSubviews;
- (void)onClickAuthorView;
- (void)joinButtonClicked;
- (BOOL)enableShow;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setJoinButton:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setMediaBkgImage:(id)arg1;
- (void)setSongNameTextView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (id)fromDataItem;
- (void)setFromDataItem:(id)arg1;
- (void).cxx_destruct;
@end

