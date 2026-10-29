@interface WCStoryTimelineEntranceCollectionViewCell : UICollectionViewCell
{
    UIView * _headBackGroundView; // +0x8
    UILabel * _blueTipView; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMCPLabel * _nickNameLabel; // +0x20
    NSString * _userName; // +0x28
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setUserName:(id)arg1 hasUnreadComment:(BOOL)arg2 unreadCommentCount:(unsigned long long)arg3;
- (void)layoutCustomSubViews;
- (id)headBackGroundView;
- (id)headImageView;
- (id)nickNameLabel;
- (id)blueTipView;
- (void)setHeadBackGroundView:(id)arg1;
- (void)setBlueTipView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void).cxx_destruct;
@end

