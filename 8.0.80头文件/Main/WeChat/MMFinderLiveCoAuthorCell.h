@interface MMFinderLiveCoAuthorCell : WCTableViewNormalCellManager
{
    MMFinderLiveCoAuthorCellItem * _item; // +0x8
    id <MMFinderLiveCoAuthorCellDelegate> _delegate; // +0x10
    MMUIView * _cellContentView; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
    MMUILabel * _nameLabel; // +0x28
    MMUILabel * _descLabel; // +0x30
    MMUILabel * _followedLabel; // +0x38
    WCFinderAuthInfoIconView * _authIconView; // +0x40
    MMUIButton * _followButton; // +0x48
}
- (id)initWithItem:(id)arg1 width:(double)arg2 height:(double)arg3 delegate:(id)arg4;
- (void)initCellConfig;
- (void)setupSubviewsWithWidth:(double)arg1 height:(double)arg2;
- (BOOL)shouldAuthIconViewShow;
- (void)updateAuthInfo;
- (void)layoutUI;
- (void)onClickFollow;
- (void)onClickContent;
- (id)item;
- (void)setItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cellContentView;
- (void)setCellContentView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)followedLabel;
- (void)setFollowedLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (void).cxx_destruct;
@end
