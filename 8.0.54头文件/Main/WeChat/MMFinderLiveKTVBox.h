@interface MMFinderLiveKTVBox : NSObject
{
    BOOL _isKTVMode; // +0x8
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
    MMFinderLiveKTVReporter * _reporter; // +0x58
}
+ (void)reportPlayFailWithTaskId:(id)arg1 error:(unsigned long long)arg2 extra:(long long)arg3 role:(unsigned long long)arg4 uniqueId:(id)arg5 songId:(id)arg6 viewScene:(unsigned long long)arg7;
+ (void)reportPositionMistakeLagWithTaskId:(id)arg1 cnt:(unsigned long long)arg2 allDuration:(int)arg3 averMaxAcceptMistake:(int)arg4 averPositionUpdateInterval:(int)arg5 mistakeRecords:(id)arg6 role:(unsigned long long)arg7 uniqueId:(id)arg8 viewScene:(unsigned long long)arg9;
+ (unsigned long long)getLiveId:(id)arg1;
+ (id)getMistakeRecordsDetail:(id)arg1;
+ (id)replaceCommaToSemicolon:(id)arg1;
+ (unsigned long long)getKTVViewScene:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)createKTVResourceState;
- (void)loadKTVResources;
- (void)createKTVManageLogic;
- (void)createKTVPerfAdjustLogic;
- (id)ktvContext;
- (id)ktvStateInfo;
- (void)enterKTVMode;
- (void)exitKTVMode;
- (void)updateAllConnectedMicUsersInfo:(id)arg1;
- (void)updateFinderDataItem:(id)arg1;
- (id)anchorSdkUserId;
- (id)ktvReporter;
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
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end

