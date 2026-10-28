@interface MMFinderLiveReplayMicInfoBackgroundDisplayLogic : NSObject
{
    MMLiveTaskId * _taskId; // +0x8
    UIView * _micUserContainerViewBelow; // +0x10
    UIView * _micUserContainerViewAbove; // +0x18
    MMFinderLiveConnectMicUsersInfo * _allMicUsersInfo; // +0x20
    NSMutableDictionary * _userViews; // +0x28
}
- (id)initWithMicUserContainerViewBelow:(id)arg1 micUserContainerViewAbove:(id)arg2;
- (void)showWithConnectMicUsersInfo:(id)arg1;
- (void)clearAndHide;
- (void)notifyPIPHandleLogicConfig;
- (id)getAudienceAudioMicUserViewList;
- (void)layoutComponents;
- (void)bringBackgroundOfUserInPipToFront:(id)arg1;
- (void)updateSubviewsWithMicUserInfo:(id)arg1;
- (id)replayTask;
- (BOOL)insertAudioMicUserViewToPIPRenderLayer:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)micUserContainerViewBelow;
- (void)setMicUserContainerViewBelow:(id)arg1;
- (id)micUserContainerViewAbove;
- (void)setMicUserContainerViewAbove:(id)arg1;
- (id)allMicUsersInfo;
- (void)setAllMicUsersInfo:(id)arg1;
- (id)userViews;
- (void)setUserViews:(id)arg1;
- (void).cxx_destruct;
@end
