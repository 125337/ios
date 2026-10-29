@interface ConfSDKServiceMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * _mEngineLock; // +0x8
}
+ (long long)screenProjectTargetFramesPerSecond;
+ (void)updateScreenProjectTargetFramesPerSecond:(long long)arg1 source:(id)arg2;
+ (void)resetScreenProjectTargetFramesPerSecondWithSource:(id)arg1;
- (void)onServiceInit;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5 frameIndex:(unsigned long long)arg6;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (void)recvNotify:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5 muteNotification:(BOOL)arg6 notifyFrom:(int)arg7;
- (id)getMemberByMemberid:(int)arg1;
- (id)getMemberByUsername:(id)arg1;
- (BOOL)checkIfMemberVideoOn:(int)arg1;
- (id)getTalkingMember;
- (id)sortedTalkingMembers;
- (id)getMemberQualityInfoList;
- (int)engineDoMemberSelectForView:(id)arg1;
- (void)subscribeByUsername:(id)arg1 NeedBigVideo:(BOOL)arg2;
- (void)doVideoScreenSharingSecurityCheck:(id)arg1 fileId:(id)arg2;
- (int)sendScreenData:(void *)arg1;
- (int)invite:(id)arg1 groupId:(id)arg2 inviteId:(unsigned long long)arg3;
- (void)hangup:(int)arg1;
- (void)accept:(unsigned long long)arg1;
- (void)addMembers:(id)arg1 inviteId:(unsigned long long)arg2;
- (void)EndSysCallInterruption;
- (void)BeginSysCallInterruption;
- (void)setMicroPhoneMute:(BOOL)arg1;
- (void)setSpeakerPhone:(BOOL)arg1;
- (void)stopVideo;
- (void)switchVideoToCamera;
- (void)switchVideoToScreen;
- (void)switchVideoToScreenPaused;
- (void)switchScreenEnabled:(BOOL)arg1 keepCameraEnabled:(BOOL)arg2;
- (void)switchScreenEnabled:(BOOL)arg1 keepCameraEnabled:(BOOL)arg2 subVideoType:(int)arg3;
- (void)switchCameraEnabledPreservingScreenStatus:(BOOL)arg1;
- (int)checkUsingMultiPathCellularConn;
- (void)subscribeByUsernameList:(id)arg1 LargeUsers:(id)arg2;
- (void)HeadSetPlugin:(BOOL)arg1;
- (id)mEngineLock;
- (void)setMEngineLock:(id)arg1;
- (void).cxx_destruct;
@end
