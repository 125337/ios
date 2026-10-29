@interface MMFinderLiveFeedStreamMicLogic : MMFinderLiveCDNViewerMicLogic
{
    MMFinderLiveFeedStreamConnectMicUserInfoView * _micContainerView; // +0x8
}
- (void)handleSEIMicMsgInfoUpdated:(id)arg1 listChanged:(BOOL)arg2 showMicTopic:(BOOL)arg3;
- (void)checkConnectMicUsersStatusForCdnAudience;
- (void)updateMicViewUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateCurrentAnchorViewWhenPureAudioModeChanged;
- (void)updateUserPkStateUI;
- (void)checkAndUpdateLiveView;
- (void)checkAndShowConnectMicVideoOperationView;
- (void)updateConnectMicUsersInfoForCDNUser;
- (void)handleOtherRoomMicAnchorIsAudioModeChanged:(id)arg1;
- (id)feedStreamTask;
- (id)currentAnchorFinderUserName;
- (void)handleFirstShowCdnPlayerView:(id)arg1;
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)arg1;
- (void)handleAudioRoomSEIMicMsgInfoUpdated:(id)arg1 listChanged:(BOOL)arg2;
- (void)updateAudioRoomInfoView;
- (void)updateAudioRoomMicViewsWithUIChangeType:(unsigned long long)arg1;
- (void)updateAudioRoomMicViewWithSdkUserId:(id)arg1 andUIChangeType:(unsigned long long)arg2;
- (void)updateAudioRoomViewWithMicTopicContent:(id)arg1;
- (void)updateAudioRoomViewWithMicTopicTitle:(id)arg1;
- (void)updateViewsAfterMicUsersInfoSeatNameChanged:(BOOL)arg1;
- (void)updateConnectMicViewMicTopic;
- (void)updateMicUsersInMicInfo:(id)arg1;
- (void)updateMicUserHeatValuesInMicInfo:(id)arg1;
- (id)micContainerView;
- (void)setMicContainerView:(id)arg1;
- (void).cxx_destruct;
@end
