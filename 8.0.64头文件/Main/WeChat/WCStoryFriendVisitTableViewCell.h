@interface WCStoryFriendVisitTableViewCell : MMTableViewCell
{
    WCStoryComment * _comment; // +0x8
    MMHeadImageView * _headView; // +0x10
    MMUIView * _headBackGroundView; // +0x18
    MMCPLabel * _nickNameLabel; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setup;
- (void)customLayoutSubviews;
- (void)onHeadImageViewDidClick:(id)arg1;
- (void)setComment:(id)arg1;
- (id)nickNameLabel;
- (id)headBackGroundView;
- (id)headView;
- (id)comment;
- (void)setHeadView:(id)arg1;
- (void)setHeadBackGroundView:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void).cxx_destruct;
@end
