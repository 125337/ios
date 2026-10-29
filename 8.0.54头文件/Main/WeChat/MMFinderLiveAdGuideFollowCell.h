@interface MMFinderLiveAdGuideFollowCell : WCTableViewNormalCellManager
{
    BOOL _isAnchor; // +0x8
    FinderLiveGuideFollowAdInfoItem * _info; // +0x10
    id <MMFinderLiveAdGuideFollowCellDelegate> _delegate; // +0x18
    MMUIView * _contentView; // +0x20
    WCFinderHeadImageView * _headImageView; // +0x28
    MMUILabel * _nameLabel; // +0x30
    MMUILabel * _descLabel; // +0x38
    MMUILabel * _followedLabel; // +0x40
    MMWebImageView * _authIconView; // +0x48
    MMUIButton * _followButton; // +0x50
}
- (id)initWithInfo:(id)arg1 width:(double)arg2 height:(double)arg3 delegate:(id)arg4;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initSubviewsWith:(double)arg1 height:(double)arg2;
- (BOOL)shouldAuthIconViewShow;
- (void)updateAuthInfo;
- (void)layoutUI;
- (void)onClickFollow;
- (void)onClickContent;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
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

