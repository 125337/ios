@interface MMFinderLiveKTVSingerVideoUserInfoView : UIView <MMFinderLiveKTVStateExt>
{
    MMFinderLiveKTVSingerUserInfo * _userInfo; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    MMUILabel * _nameLabel; // +0x20
    MMUILabel * _heatLabel; // +0x28
}
- (id)initWithSingerUserInfo:(id)arg1 taskId:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setFrame:(CGRect)arg1;
- (void)layoutHeadImageView;
- (void)layoutNameLabel;
- (void)layoutHeatLabel;
- (void)updateSingerUserInfo:(id)arg1;
- (id)liveTask;
- (void)updateNameLabelText;
- (void)updateHeatLabelText;
- (void)onSingingStateChanged:(long long)arg1;
- (BOOL)isNickAndHeatNeedShow;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)heatLabel;
- (void)setHeatLabel:(id)arg1;
- (void).cxx_destruct;
@end
