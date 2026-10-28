@interface WCAdFollowItemView : MMUIView
{
    BOOL _isFollowed; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    MMUIButton * _followButton; // +0x20
    MMUILabel * _followTitle; // +0x28
    MMUILabel * _followDesc; // +0x30
    MMUILabel * _followedTips; // +0x38
    id <WCAdFollowItemViewDelegate> _delegate; // +0x40
}
- (id)initWithTitle:(id)arg1 desc:(id)arg2 isFollowed:(BOOL)arg3;
- (void)initSubview;
- (void)onCheckBoxClick:(id)arg1;
- (BOOL)isUserSelected;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)isFollowed;
- (void)setIsFollowed:(BOOL)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (id)followTitle;
- (void)setFollowTitle:(id)arg1;
- (id)followDesc;
- (void)setFollowDesc:(id)arg1;
- (id)followedTips;
- (void)setFollowedTips:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
