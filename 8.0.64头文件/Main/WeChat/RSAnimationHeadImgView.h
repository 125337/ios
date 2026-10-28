@interface RSAnimationHeadImgView : MMUIView
{
    UILabel * _displayName; // +0x8
    UIImageView * _avatarView; // +0x10
    MMHeadImageView * _headImage; // +0x18
    RadarSearchMember * _member; // +0x20
    NSString * m_nsRemarkName; // +0x28
}
+ (CGSize)getHeadImageSize;
- (id)initWithRadarSearchMember:(id)arg1 remarkName:(id)arg2;
- (void)initView;
- (void)initHeadImageView;
- (void)initAvatarView;
- (void)initDisplayNameView;
- (id)member;
- (void)setMember:(id)arg1;
- (id)m_nsRemarkName;
- (void)setM_nsRemarkName:(id)arg1;
- (void).cxx_destruct;
@end
