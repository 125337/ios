@interface MMMusicLiveCommentUnreadMentionView : UIView
{
    id <MMMusicLiveCommentUnreadMentionViewDelegate> _delegate; // +0x8
    long long _unreadCount; // +0x10
    UIButton * _notifyButton; // +0x18
    UILabel * _unreadLabel; // +0x20
    UIImageView * _arrowIcon; // +0x28
}
- (id)init;
- (void)layoutSubviews;
- (void)setupUnreadCount:(long long)arg1;
- (void)onTapUnreadMention;
- (id)unreadLabel;
- (id)arrowIcon;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)unreadCount;
- (void)setUnreadCount:(long long)arg1;
- (id)notifyButton;
- (void)setNotifyButton:(id)arg1;
- (void)setUnreadLabel:(id)arg1;
- (void)setArrowIcon:(id)arg1;
- (void).cxx_destruct;
@end

