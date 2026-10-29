@interface MMFinderLiveReplayCompactMicUserInfoView : UIView
{
    MMFinderLiveConnectMicUsersInfo * _allMicUsersInfo; // +0x8
    NSMutableDictionary * _userViews; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)showWithConnectMicUsersInfo:(id)arg1;
- (void)clearAndHide;
- (void)layoutSubviews;
- (void)updateSubviewsWithMicUserInfo:(id)arg1;
- (id)allMicUsersInfo;
- (void)setAllMicUsersInfo:(id)arg1;
- (id)userViews;
- (void)setUserViews:(id)arg1;
- (void).cxx_destruct;
@end

