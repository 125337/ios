@interface MMFinderLiveConnectMicCollectionHeaderView : UICollectionReusableView
{
    MMUIButton * _inviteAnchorButton; // +0x8
    MMUIButton * _randomMatchButton; // +0x10
}
+ (id)ReuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (id)makeInviteAnchorButtonWithFrame:(CGRect)arg1;
- (id)makeRandomMatchButtonWithFrame:(CGRect)arg1;
- (id)inviteAnchorButton;
- (void)setInviteAnchorButton:(id)arg1;
- (id)randomMatchButton;
- (void)setRandomMatchButton:(id)arg1;
- (void).cxx_destruct;
@end
