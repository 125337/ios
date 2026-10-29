@interface MMFinderLiveShopInfoAnchorCardView : MMUIView
{
    FinderLiveGuideFollowAdInfoItem * _info; // +0x8
    id <MMFinderLiveShopInfoAnchorCardDelegate> _delegate; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    MMUILabel * _nameLabel; // +0x20
    MMUILabel * _descLabel; // +0x28
    WCFinderAuthInfoIconView * _authIconView; // +0x30
    MMUIButton * _followButton; // +0x38
}
- (id)initWithInfo:(id)arg1 delegate:(id)arg2;
- (void)setupContainer;
- (void)setupSubviews;
- (void)applyFollowedStyle:(BOOL)arg1;
- (BOOL)shouldAuthIconShow;
- (void)updateAuthInfo;
- (void)syncFollowState;
- (void)layoutSubviews;
- (void)onClickFollow;
- (void)onClickContent;
- (void)refresh;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (void).cxx_destruct;
@end
