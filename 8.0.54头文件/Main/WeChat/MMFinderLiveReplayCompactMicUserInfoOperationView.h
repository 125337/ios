@interface MMFinderLiveReplayCompactMicUserInfoOperationView : UIView
{
    MMFinderLiveConnectMicUser * _micUser; // +0x8
    WCFinderHeadImageView * _headImageView; // +0x10
    UILabel * _nicknameLabel; // +0x18
}
- (id)initWithMicUser:(id)arg1;
- (void)setMicUser:(id)arg1;
- (void)layoutSubviews;
- (id)micUser;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (void).cxx_destruct;
@end

