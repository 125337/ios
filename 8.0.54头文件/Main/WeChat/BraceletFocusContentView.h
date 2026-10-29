@interface BraceletFocusContentView : UIView
{
    UILabel * _scoreLabel; // +0x8
    UILabel * _nickNameLabel; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    DeviceFollowItem * _followItem; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 followItem:(id)arg2;
- (id)headImageView;
- (id)scoreLabel;
- (id)nickNameLabel;
- (void)initView;
- (void)setScoreLabel:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (id)followItem;
- (void)setFollowItem:(id)arg1;
- (void).cxx_destruct;
@end

