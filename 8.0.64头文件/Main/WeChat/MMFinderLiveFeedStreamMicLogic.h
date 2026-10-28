@interface MMFinderLiveFeedStreamMicLogic : MMFinderLiveCDNViewerMicLogic
{
    MMFinderLiveFeedStreamConnectMicUserInfoView * _micContainerView; // +0x8
}
- (void)handleSEIMicMsgInfoUpdated:(id)arg1 listChanged:(BOOL)arg2;
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
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)arg1;
- (void)handleAudioRoomSEIMicMsgInfoUpdated:(id)arg1 listChanged:(BOOL)arg2;
- (void)updateAudioRoomInfoView;
- (void)updateAudioRoomMicViewsWithUIChangeType:(unsigned long long)arg1;
- (void)updateAudioRoomMicViewWithSdkUserId:(id)arg1 andUIChangeType:(unsigned long long)arg2;
- (void)updateViewsAfterMicUsersInfoSeatNameChanged:(BOOL)arg1;
- (void)updateMicUsersInMicInfo:(id)arg1;
- (void)updateMicUserHeatValuesInMicInfo:(id)arg1;
- (id)micContainerView;
- (void)setMicContainerView:(id)arg1;
- (void).cxx_destruct;
@end
