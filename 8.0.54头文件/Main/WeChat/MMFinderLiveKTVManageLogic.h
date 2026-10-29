@interface MMFinderLiveKTVManageLogic : NSObject <MMFinderLiveKTVStateExt, MMLiveTaskMgrExt, WCFinderLiveExt, MMFinderLiveKTVSEISynchronizeDelegate, MMLiveAnchorSEISynchronizeExt, MMFinderLiveKSKitAudioExt>
{
    BOOL _disableNoteScore; // +0x8
    BOOL _isPendingSongsUnTructed; // +0x9
    BOOL _isInVadAutoDetectMode; // +0xa
    unsigned int _firstSongChangeVersion; // +0xc
    MMFinderLiveKTVStateInfo * _ktvStateInfo; // +0x10
    MMFinderLiveKTVSEISynchronizeLogic * _seiSyncLogic; // +0x18
    MMFinderLiveKSKitAudioEngine * _ksKitAudioEngine; // +0x20
    MMFinderLiveKTVNoteManageLogic * _ktvNoteManageLogic; // +0x28
    id /* block */ _requestMaxSEIFpsCallback; // +0x30
    id /* block */ _invokeUpdateVideoEncodeParamBlock; // +0x38
    MMFinderLiveKTVSongItem * _currActionSongItem; // +0x40
    unsigned long long _songListVersion; // +0x48
    MMFinderLiveKtvPlayerWaitListInfo * _currWaitListInfo; // +0x50
    MMFinderLiveKTVSingingData * _ktvSingingData; // +0x58
    NSMutableArray * _pendingSongItems; // +0x60
    MMLiveSEIKTVSongItem * _lastAnchorSongAction; // +0x68
    MMFinderLiveKTVSongItem * _pendingReqSongItem; // +0x70
    MMFinderLiveKtvSelfWaitSongCountInfo * _currSelfWaitSongCntInfo; // +0x78
    MMFinderLiveKtvAllWaitSongCountInfo * _currAllWaitSongCntInfo; // +0x80
    double _lastVadDetectTime; // +0x88
    id <MMLiveUniqueTaskId> _taskId; // +0x90
    unsigned long long _scene; // +0x98
}
+ (BOOL)isKTVPreferMediaVolumeType;
+ (unsigned int)pendingSongItemRequireCnt;
+ (long long)getKTVPreferMediaVolumeType;
- (void)fetchSongList:(unsigned int)arg1 songListVersion:(unsigned long long)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)initDefaultDatas;
- (void)onFirstSongVersionUpdated;
- (void)advanceTransferToNextState;
- (void)transferToRecvRole;
- (void)cancelTransferToRecvRole;
- (void)transferToSendRole;
- (void)startSyncSendWithTargetSong:(id)arg1;
- (void)onSingByMySelf:(id)arg1;
- (void)refreshMaxSEIFps;
- (void)onSingByOthers:(id)arg1;
- (void)onSingerUserChanged:(id)arg1;
- (void)onSingingStart:(id)arg1;
- (void)onSingingAdvanceToNext:(id)arg1;
- (void)onSingingEnd:(id)arg1;
- (void)onRecoverToUnSing:(id)arg1;
- (void)onSingingStateChanged:(id)arg1;
- (void)onUniqueIdChanged:(id)arg1;
- (void)startSingBySelf:(id)arg1 force:(BOOL)arg2;
- (void)startSong:(id)arg1 force:(BOOL)arg2 scoreEngineFlag:(unsigned int)arg3;
- (void)stopSingEngine:(id)arg1 force:(BOOL)arg2;
- (BOOL)checkCurrPendingSongIsSingBySelf;
- (void)endCurrSong:(long long)arg1 src:(long long)arg2 completion:(id /* block */)arg3;
- (void)endSong:(id)arg1 action:(long long)arg2 src:(long long)arg3 completion:(id /* block */)arg4;
- (void)syncUserMicLeave:(id)arg1 src:(long long)arg2 completion:(id /* block */)arg3;
- (void)syncKTVSceneLeave:(id /* block */)arg1;
- (void)switchStreamModeWithoutVideo;
- (void)switchStreamModeIfNeed:(id)arg1;
- (void)onCurrPendingSongItemInfoUpdated;
- (void)checkActionSongItemChanged;
- (void)updateCurrSingerContactIfNeed;
- (void)updateCurrSongPauseActionState;
- (void)clearLastSelfSingDatas;
- (void)updateWaitListInfoFromPb:(id)arg1 source:(long long)arg2;
- (void)updateSongListVersion:(unsigned long long)arg1 source:(long long)arg2;
- (void)updateSelfWaitSongCount:(unsigned int)arg1 version:(unsigned long long)arg2 source:(long long)arg3;
- (void)updateAllWaitSongCount:(unsigned int)arg1 version:(unsigned long long)arg2 source:(long long)arg3;
- (BOOL)transferToNewStateUnSingByAnchorWithVersion:(unsigned int)arg1;
- (id)getSelfVolumeInfo:(id)arg1;
- (void)updateVadAutoDetectSwitchIfNeed;
- (void)openVadAutoDetectMode;
- (void)closeVadAutoDetectMode;
- (void)startVadDetection;
- (void)reStartVadDetectionAfterInterval;
- (void)checkSelfVadDetection:(id)arg1;
- (void)updatePendingSongItems:(id)arg1 firstSongChangeVersion:(unsigned int)arg2 source:(long long)arg3;
- (void)updateFirstSongChangeVersion:(unsigned int)arg1 source:(long long)arg2;
- (BOOL)isPendingSongListEmpty;
- (void)startCgiToModSong:(id)arg1 action:(int)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)startCgiToModSong:(id)arg1 action:(int)arg2 forbidToast:(BOOL)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)syncKTVAction:(int)arg1 targetUser:(id)arg2 completion:(id /* block */)arg3;
- (void)modSongCgiSuccessToasts:(id)arg1 newAddSongIndex:(unsigned int)arg2 action:(int)arg3;
- (void)onKtvSongListChangeNotificationToast:(id)arg1 fromUser:(id)arg2 action:(int)arg3;
- (void)modSongCgiFailToasts:(int)arg1 errorDesc:(id)arg2;
- (void)changeOtherSingerSong:(id)arg1 pauseState:(BOOL)arg2;
- (void)changeCurrSelfSongPauseState:(BOOL)arg1;
- (void)synchronizeRemotePauseModType:(unsigned int)arg1 forSongItem:(id)arg2;
- (BOOL)hasAuthorityToActionCurrSong;
- (id)genAnchorSeiKTVStateInfo;
- (void)errorCancelHandleWithToast:(BOOL)arg1;
- (void)errorCancelHandleWithToast:(BOOL)arg1 toastStr:(id)arg2;
- (void)updateSyncKtvInfoResp:(id)arg1;
- (BOOL)isSongItemSingBySelf:(id)arg1;
- (void)requestKtvSongItem:(id)arg1;
- (void)requestPendingSongForAudience;
- (void)realRequestKtvSongItem:(id)arg1;
- (void)onUserVoiceVolume:(id)arg1 totalVolume:(long long)arg2;
- (BOOL)isCurrAudienceLiveCanPause;
- (void)clearDatasForExitKTV;
- (int)getCurrSelfVoiceVolume;
- (id)finderTaskId;
- (id)liveFunctionTask;
- (id)liveTask;
- (id)seiSyncLogic;
- (id)ksKitAudioEngine;
- (id)ktvStateInfo;
- (void)createKTVSingingData;
- (void)createKTVNoteManageLogic;
- (id)currPendingSongItem;
- (id)nextPendingSongItem;
- (unsigned int)selfWaitSongCnt;
- (unsigned int)allWaitSongCnt;
- (id)seiRecvHandler;
- (BOOL)isCurrentInMic;
- (BOOL)inLiveRoom;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 songItemUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseChanged:(BOOL)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 uniqueIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 useVideoChanged:(BOOL)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseActionStateUpdated:(id)arg3;
- (void)reportScore:(id)arg1 uniqueId:(id)arg2 finish:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 liveClosed:(BOOL)arg2;
- (void)onLiveTaskExitLive:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onLiveTask:(id)arg1 remoteUserLeaveRoom:(id)arg2 reason:(long long)arg3;
- (void)onLiveTask:(id)arg1 exitStateChanged:(unsigned long long)arg2;
- (void)checkNeedPauseSingingWithExitState:(unsigned long long)arg1;
- (BOOL)getSelfSingerCurrPauseState;
- (void)checkAudioNeedMuteWithExitState:(unsigned long long)arg1;
- (void)onLiveTask:(id)arg1 audioAuthorityActiveChanged:(BOOL)arg2;
- (void)checkNeedPauseSingingForAuthorityActiveChanged:(BOOL)arg1;
- (void)checkNeedDelayAutoCutForAuthorityActiveChanged:(BOOL)arg1;
- (void)autoCutSingingSongForAudioInterrupt;
- (double)audioInterruptAutoCutDelayTime;
- (void)onFinderLiveTask:(id)arg1 pipHandlerCreated:(id)arg2;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 micMutedDidChange:(BOOL)arg2;
- (void)onKtvSongListChangeNotification:(id)arg1 fromUser:(id)arg2 taskId:(id)arg3;
- (void)onKtvCurrPlayingSongChanged:(id)arg1 taskId:(id)arg2;
- (void)onFinderLiveKTVSEIRecvActionVersion:(unsigned int)arg1 syncLogic:(id)arg2;
- (void)onFinderLiveKTVSEINewReceiverUpdate:(id)arg1 syncLogic:(id)arg2;
- (void)onFinderLiveKTVSEIRecvSongUpdate:(id)arg1 lastSong:(id)arg2 syncLogic:(id)arg3;
- (void)onFinderLiveKTVSEIRecvActionIdUpdate:(id)arg1 lastActionId:(id)arg2 syncLogic:(id)arg3;
- (void)onFinderLiveKTVSEISynRoleChanged:(long long)arg1;
- (void)onSynchronizedSEIAnchoInfo:(id)arg1 taskId:(id)arg2;
- (void)synchronizeFirstSongChangeVersionIfNeed:(id)arg1 fromSeiSeq:(unsigned long long)arg2;
- (void)synchronizeUnSingStateIfNeed:(id)arg1 fromSeiSeq:(unsigned long long)arg2;
- (void)onKSKitSingEndWithSong:(id)arg1 taskId:(id)arg2;
- (void)onKSKitSongEndWithSong:(id)arg1 taskId:(id)arg2;
- (void)onKSKitSingStopWithSong:(id)arg1 taskId:(id)arg2;
- (id)transferToSongItemFromChangeSongInfo:(id)arg1;
- (id)transferToSongItemsFromSongInfos:(id)arg1;
- (BOOL)disableNoteScore;
- (void)setDisableNoteScore:(BOOL)arg1;
- (void)setKtvStateInfo:(id)arg1;
- (void)setSeiSyncLogic:(id)arg1;
- (void)setKsKitAudioEngine:(id)arg1;
- (id)ktvNoteManageLogic;
- (void)setKtvNoteManageLogic:(id)arg1;
- (id /* block */)requestMaxSEIFpsCallback;
- (void)setRequestMaxSEIFpsCallback:(id /* block */)arg1;
- (id /* block */)invokeUpdateVideoEncodeParamBlock;
- (void)setInvokeUpdateVideoEncodeParamBlock:(id /* block */)arg1;
- (unsigned int)firstSongChangeVersion;
- (void)setFirstSongChangeVersion:(unsigned int)arg1;
- (id)currActionSongItem;
- (void)setCurrActionSongItem:(id)arg1;
- (unsigned long long)songListVersion;
- (void)setSongListVersion:(unsigned long long)arg1;
- (id)currWaitListInfo;
- (void)setCurrWaitListInfo:(id)arg1;
- (id)ktvSingingData;
- (void)setKtvSingingData:(id)arg1;
- (id)pendingSongItems;
- (void)setPendingSongItems:(id)arg1;
- (BOOL)isPendingSongsUnTructed;
- (void)setIsPendingSongsUnTructed:(BOOL)arg1;
- (id)lastAnchorSongAction;
- (void)setLastAnchorSongAction:(id)arg1;
- (id)pendingReqSongItem;
- (void)setPendingReqSongItem:(id)arg1;
- (id)currSelfWaitSongCntInfo;
- (void)setCurrSelfWaitSongCntInfo:(id)arg1;
- (id)currAllWaitSongCntInfo;
- (void)setCurrAllWaitSongCntInfo:(id)arg1;
- (BOOL)isInVadAutoDetectMode;
- (void)setIsInVadAutoDetectMode:(BOOL)arg1;
- (double)lastVadDetectTime;
- (void)setLastVadDetectTime:(double)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

