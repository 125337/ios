@interface MMFinderLiveReplayMicInfoAnchorCoverDisplayLogic : NSObject
{
    MMFinderLiveTaskId * _taskId; // +0x8
    UIView * _micUserContainerView; // +0x10
    MMFinderLiveConnectMicUsersInfo * _allMicUsersInfo; // +0x18
    NSMutableDictionary * _userViewInfoDict; // +0x20
}
- (id)initWithMicUserContainerView:(id)arg1 andLiveTaskId:(id)arg2;
- (void)showWithConnectMicUsersInfo:(id)arg1;
- (void)clearAndHide;
- (void)notifyPIPHandleLogicConfig;
- (void)layoutComponents;
- (void)bringBackgroundOfUserInPipToFront:(id)arg1;
- (id)getMicAnchorGestureAnimationContainerViewBySdkUserId:(id)arg1;
- (void)updateGestureAnimationContainerViewVisibilityWithCommonHide:(BOOL)arg1;
- (void)updateConnectMicOtherAnchorCoverViewAppearanceBySdkUserId:(id)arg1 isAudioMode:(BOOL)arg2;
- (id)getAnchorAudioMicCoverImageViewList;
- (id)getOpposingAnchorAudioModeBackgroundVideoViewModelList;
- (void)updateSubviewsWithMicUserInfo:(id)arg1;
- (void)clearMicViewInfo:(id)arg1;
- (void)configureGestureAnimationContainerViewForConnectMicViewInfo:(id)arg1;
- (void)configureCoverImageViewForConnectMicViewInfo:(id)arg1;
- (id)replayTask;
- (BOOL)insertLiveAnchorAudioMicCoverImageToPIPRenderLayer:(id)arg1;
- (BOOL)insertLiveAnchorAudioMicBackgroundVideoToPipRenderLayer:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)micUserContainerView;
- (void)setMicUserContainerView:(id)arg1;
- (id)allMicUsersInfo;
- (void)setAllMicUsersInfo:(id)arg1;
- (id)userViewInfoDict;
- (void)setUserViewInfoDict:(id)arg1;
- (void).cxx_destruct;
@end
