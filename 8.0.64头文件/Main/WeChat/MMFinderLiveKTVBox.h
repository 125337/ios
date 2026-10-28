@interface MMFinderLiveKTVBox : NSObject <MMLiveAnchorSEISynchronizeExt, MMLiveCDNPlayerItemExt>
{
    BOOL _isKTVMode; // +0x8
    BOOL _isDelayToResetAudioSession; // +0x9
    BOOL _isTransitionEnd; // +0xa
    int _commentScene; // +0xc
    id <MMLiveUniqueTaskId> _taskId; // +0x10
    MMFinderLiveKTVManageLogic * _ktvManageLogic; // +0x18
    MMLiveKtvResourceState * _ktvResourceState; // +0x20
    MMFinderLiveKTVPerfAdjustLogic * _ktvPerfAdjustLogic; // +0x28
    MMFinderLiveKTVContext * _ktvContext; // +0x30
    id /* block */ _ktvManageLogicCreateCallback; // +0x38
    MMFinderLiveConnectMicUsersInfo * _allConnectedMicUsersInfo; // +0x40
    WCFinderDataItem * _finderDataItem; // +0x48
    id /* block */ _ktvGetAnchorSdkUserIdCallback; // +0x50
    id /* block */ _singStateChangeCallback; // +0x58
    MMFinderLiveKTVReporter * _reporter; // +0x60
    NSString * _transitionContextId; // +0x68
    UIView * _transitionView; // +0x70
    MMFinderLiveKTVBox * _transitionKTXBox; // +0x78
    NSMutableDictionary * _songPrepareRecordDict; // +0x80
}
+ (void)reportPlayFailWithTaskId:(id)arg1 error:(unsigned long long)arg2 extra:(long long)arg3 role:(unsigned long long)arg4 uniqueId:(id)arg5 songId:(id)arg6 viewScene:(unsigned long long)arg7;
+ (void)reportPlayResult:(id)arg1 taskId:(id)arg2 role:(unsigned long long)arg3 uniqueId:(id)arg4 songId:(id)arg5 viewScene:(unsigned long long)arg6;
+ (void)reportPositionMistakeLagWithTaskId:(id)arg1 cnt:(unsigned long long)arg2 allDuration:(int)arg3 averMaxAcceptMistake:(int)arg4 averPositionUpdateInterval:(int)arg5 mistakeRecords:(id)arg6 role:(unsigned long long)arg7 uniqueId:(id)arg8 viewScene:(unsigned long long)arg9;
+ (id)getValidLiveTask:(id)arg1;
+ (unsigned long long)getLiveId:(id)arg1;
+ (unsigned long long)getObjectId:(id)arg1;
+ (id)getAnchorNickName:(id)arg1;
+ (id)getMistakeRecordsDetail:(id)arg1;
+ (id)replaceCommaToSemicolon:(id)arg1;
+ (unsigned long long)getKTVViewScene:(id)arg1;
- (void)onSongPrepareBegin:(id)arg1;
- (void)onSongPrepareEnd:(id)arg1;
- (int)getSongPrepareCostTime:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)createKTVResourceState;
- (void)loadKTVResources;
- (void)createKTVManageLogic;
- (void)configKTVManageCallbacks;
- (void)createKTVPerfAdjustLogic;
- (void)createDefaultDatas;
- (id)ktvContext;
- (id)ktvStateInfo;
- (void)enterKTVMode;
- (void)exitKTVMode;
- (void)updateAllConnectedMicUsersInfo:(id)arg1;
- (void)updateFinderDataItem:(id)arg1;
- (id)anchorSdkUserId;
- (id)ktvReporter;
- (void)delayResetTXLiveCategorySetParamForA2dpClosedIfNeed:(id)arg1;
- (void)resetTXLiveCategorySetParamForA2dpClosedIfNeed:(id)arg1;
- (void)cancelAllActions;
- (unsigned long long)liveId;
- (void)addTransitionContext:(id)arg1;
- (void)onEnterLive;
- (void)processSEIPBForKTVSyncRecv:(id)arg1;
- (BOOL)isCurrInTransition;
- (void)endTransition:(long long)arg1;
- (void)onSynchronizedSEIAnchoInfo:(id)arg1 taskId:(id)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 customExtraPramDestroy:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isKTVMode;
- (void)setIsKTVMode:(BOOL)arg1;
- (id)ktvManageLogic;
- (void)setKtvManageLogic:(id)arg1;
- (id)ktvResourceState;
- (void)setKtvResourceState:(id)arg1;
- (id)ktvPerfAdjustLogic;
- (void)setKtvPerfAdjustLogic:(id)arg1;
- (void)setKtvContext:(id)arg1;
- (id /* block */)ktvManageLogicCreateCallback;
- (void)setKtvManageLogicCreateCallback:(id /* block */)arg1;
- (id)allConnectedMicUsersInfo;
- (void)setAllConnectedMicUsersInfo:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id /* block */)ktvGetAnchorSdkUserIdCallback;
- (void)setKtvGetAnchorSdkUserIdCallback:(id /* block */)arg1;
- (id /* block */)singStateChangeCallback;
- (void)setSingStateChangeCallback:(id /* block */)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)isDelayToResetAudioSession;
- (void)setIsDelayToResetAudioSession:(BOOL)arg1;
- (BOOL)isTransitionEnd;
- (void)setIsTransitionEnd:(BOOL)arg1;
- (id)transitionContextId;
- (void)setTransitionContextId:(id)arg1;
- (id)transitionView;
- (void)setTransitionView:(id)arg1;
- (id)transitionKTXBox;
- (void)setTransitionKTXBox:(id)arg1;
- (id)songPrepareRecordDict;
- (void)setSongPrepareRecordDict:(id)arg1;
- (void).cxx_destruct;
@end
