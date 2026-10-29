@interface ConfSDKServiceMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * _mEngineLock; // +0x8
}
- (void)onServiceInit;
- (int)callEngineUninit;
- (int)callEngineInit:(id)arg1 sessionKey:(id)arg2 idcInfo:(id)arg3 audioType:(int)arg4 videoRatio:(int)arg5 videoLength:(int)arg6 isSubCallEnable:(BOOL)arg7 isIlink:(BOOL)arg8 nCallback:(IWXConfCallback *)arg9;
- (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 imgBuf:(__CVBuffer *)arg3 width:(int)arg4 height:(int)arg5;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (void)recvNotify:(id)arg1 datalen:(int)arg2 groupId:(id)arg3 sdkGroupId:(id)arg4 displayUserList:(id)arg5;
- (id)getMemberByMemberid:(int)arg1;
- (id)getMemberByUsername:(id)arg1;
- (id)getTalkingMember;
- (id)sortedTalkingMembers;
- (id)getMemberQualityInfoList;
- (int)engineDoMemberSelectForView:(id)arg1;
- (void)subscribeByUsername:(id)arg1 NeedBigVideo:(BOOL)arg2;
- (void)doVideoScreenSharingSecurityCheck:(id)arg1 fileId:(id)arg2;
- (int)sendScreenData:(void *)arg1;
- (int)invite:(id)arg1 groupId:(id)arg2;
- (void)hangup:(int)arg1;
- (void)accept:(unsigned long long)arg1;
- (void)addMembers:(id)arg1;
- (void)EndSysCallInterruption;
- (void)BeginSysCallInterruption;
- (void)setMicroPhoneMute:(BOOL)arg1;
- (void)setSpeakerPhone:(BOOL)arg1;
- (void)stopVideo;
- (void)switchVideoToCamera;
- (void)switchVideoToScreen;
- (void)switchVideoToScreenPaused;
- (int)checkUsingMultiPathCellularConn;
- (void)subscribeByUsernameList:(id)arg1 LargeUsers:(id)arg2;
- (void)HeadSetPlugin:(BOOL)arg1;
- (id)mEngineLock;
- (void)setMEngineLock:(id)arg1;
- (void).cxx_destruct;
@end

