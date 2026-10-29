@interface MMFinderLiveReplayConnectMicLogic : MMFinderLiveCDNPlayerMicLogic
{
    FinderLiveMicInfo * _lastLiveMicInfo; // +0x8
}
- (BOOL)hasUnknownMicUser;
- (void)checkLiveMicInfo:(id)arg1;
- (void)setIsVideoLandscapeMode:(BOOL)arg1;
- (void)clearAllState;
- (id)anchorSdkUserId;
- (BOOL)canUseNewMicSEI;
- (BOOL)receiveOldVersionSeiMsg:(id)arg1;
- (void)tryGetMicUsersFromServer:(BOOL)arg1 getExtraAutoSwipeInfo:(BOOL)arg2;
- (id)lastLiveMicInfo;
- (void)setLastLiveMicInfo:(id)arg1;
- (void).cxx_destruct;
@end

