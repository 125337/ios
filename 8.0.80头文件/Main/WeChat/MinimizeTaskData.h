@interface MinimizeTaskData : MMObject <_TtP6WeChat11FTSRowModel_, PBCoding, WCTTableCoding>
{
    BOOL _isTaskSyncSuccess; // +0x8
    BOOL _isSnapshotUploadSuccess; // +0x9
    BOOL _shouldIgnoreSubtitleWhenRecoverTask; // +0xa
    BOOL _bForbidAddDuplicateTask; // +0xb
    BOOL _bForbidReplacement; // +0xc
    BOOL _isDisableVoiceTic; // +0xd
    BOOL _isForeground; // +0xe
    BOOL _isNew; // +0xf
    BOOL _canMaximizeForStateView; // +0x10
    unsigned int _taskBizType; // +0x14
    unsigned int _taskCreateTime; // +0x18
    unsigned int _taskLastEntryTime; // +0x1c
    unsigned int _currentTransitionType; // +0x20
    unsigned int _taskStateType; // +0x24
    NSString * _taskBizName; // +0x28
    NSString * _taskBizKey; // +0x30
    NSData * _taskContextData; // +0x38
    NSString * _taskTitle; // +0x40
    NSString * _taskSubtitle; // +0x48
    NSString * _taskTitleTail; // +0x50
    NSString * _taskDisplaySourceName; // +0x58
    NSString * _taskDisplayUserName; // +0x60
    NSString * _taskFooterText; // +0x68
    NSString * _taskDefaultThumbImgName; // +0x70
    NSData * _taskThumbImgData; // +0x78
    NSString * _taskThumbUrl; // +0x80
    NSString * _taskDefaultIconName; // +0x88
    NSData * _taskIconImgData; // +0x90
    NSString * _taskIconUrl; // +0x98
    unsigned long long _taskServerId; // +0xa0
    NSString * _taskServerBizId; // +0xa8
    unsigned long long _taskBizSeq; // +0xb0
    NSString * _snapshotCdnFileId; // +0xb8
    NSString * _snapshotCdnAesKey; // +0xc0
    long long _version; // +0xc8
    NSString * _taskSubtitleTail; // +0xd0
    NSString * _forbidReplaceReason; // +0xd8
    MinimizeTaskExtInfo * _taskExtInfo; // +0xe0
    unsigned long long _directLaunchType; // +0xe8
    NSString * _searchHintText; // +0xf0
    NSString * _taskKey; // +0xf8
    NSString * _delegateClassName; // +0x100
    NSArray * _taskStateList; // +0x108
    MinimizeTaskContainerInfo * _containerInfo; // +0x110
    MinimizeTaskStateInfo * _stateInfo; // +0x118
    unsigned long long _sizeChangedAnimAnchorPoint; // +0x120
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)taskBizName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_taskBizName;
+ (const void *)taskBizKey;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_taskBizKey;
+ (const void *)taskContextData;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_taskContextData;
+ (const void *)taskCreateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_taskCreateTime;
+ (const void *)taskKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_taskKey;
+ (const void *)delegateClassName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_delegateClassName;
+ (const void *)taskExtInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_taskExtInfo;
+ (const void *)taskDefaultThumbImgName;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_taskDefaultThumbImgName;
+ (const void *)taskThumbImgData;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_taskThumbImgData;
+ (const void *)taskThumbUrl;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_taskThumbUrl;
+ (const void *)taskDefaultIconName;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_taskDefaultIconName;
+ (const void *)taskIconImgData;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_taskIconImgData;
+ (const void *)taskIconUrl;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_taskIconUrl;
+ (const void *)taskDisplaySourceName;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_taskDisplaySourceName;
+ (const void *)taskTitle;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_taskTitle;
+ (const void *)taskSubtitle;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_taskSubtitle;
+ (const void *)taskTitleTail;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_taskTitleTail;
+ (const void *)taskFooterText;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_taskFooterText;
+ (const void *)taskLastEntryTime;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_taskLastEntryTime;
+ (const void *)taskServerId;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_taskServerId;
+ (const void *)taskBizType;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_taskBizType;
+ (const void *)taskDisplayUserName;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_taskDisplayUserName;
+ (const void *)taskBizSeq;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_taskBizSeq;
+ (const void *)searchHintText;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_searchHintText;
+ (const void *)isTaskSyncSuccess;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_isTaskSyncSuccess;
+ (const void *)snapshotCdnFileId;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_snapshotCdnFileId;
+ (const void *)snapshotCdnAesKey;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_snapshotCdnAesKey;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_version;
+ (const void *)isSnapshotUploadSuccess;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_isSnapshotUploadSuccess;
+ (void)__wcdb_column_constraint_29:(void *)arg1;
+ (void)__wcdb_index_30:(void *)arg1;
+ (void)__wcdb_index_31:(void *)arg1;
+ (void)PBArrayAdd_taskBizName;
+ (void)PBArrayAdd_taskBizKey;
+ (void)PBArrayAdd_taskContextData;
+ (void)PBArrayAdd_taskDefaultIconName;
+ (void)PBArrayAdd_taskIconImgData;
+ (void)PBArrayAdd_taskIconUrl;
+ (void)PBArrayAdd_taskTitle;
+ (void)PBArrayAdd_taskSubtitle;
+ (void)PBArrayAdd_isForeground;
+ (void)PBArrayAdd_taskKey;
+ (void)PBArrayAdd_delegateClassName;
+ (void)PBArrayAdd_taskTitleTail;
+ (void)PBArrayAdd_taskExtInfo;
+ (void)PBArrayAdd_shouldIgnoreSubtitleWhenRecoverTask;
+ (void)PBArrayAdd_taskServerId;
+ (void)PBArrayAdd_taskBizType;
+ (void)PBArrayAdd_taskDisplayUserName;
+ (void)PBArrayAdd_taskBizSeq;
+ (void)PBArrayAdd_canMaximizeForStateView;
+ (void)PBArrayAdd_stateInfo;
+ (void)PBArrayAdd_isTaskSyncSuccess;
+ (void)PBArrayAdd_snapshotCdnFileId;
+ (void)PBArrayAdd_snapshotCdnAesKey;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_isSnapshotUploadSuccess;
+ (void)initialize;
+ (id /* block */)comparator;
- (void)reserveFieldsFromExistTaskData:(id)arg1;
- (id)userName;
- (id)diffIdentifier;
- (id)searchTitle;
- (id)searchSourceName;
- (BOOL)shouldShowVideoIcon;
- (id)thumbImageInSearchResult;
- (id)searchSubTitle;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyInternalInfoFrom:(id)arg1;
- (BOOL)isTaskIconEqualTo:(id)arg1;
- (BOOL)isStateEqualTo:(id)arg1;
- (id)description;
- (void)setTaskCreateTime:(unsigned int)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (unsigned int)taskBizType;
- (void)setTaskBizType:(unsigned int)arg1;
- (id)taskContextData;
- (void)setTaskContextData:(id)arg1;
- (unsigned int)taskCreateTime;
- (unsigned int)taskLastEntryTime;
- (void)setTaskLastEntryTime:(unsigned int)arg1;
- (id)taskTitle;
- (void)setTaskTitle:(id)arg1;
- (id)taskSubtitle;
- (void)setTaskSubtitle:(id)arg1;
- (id)taskTitleTail;
- (void)setTaskTitleTail:(id)arg1;
- (id)taskDisplaySourceName;
- (void)setTaskDisplaySourceName:(id)arg1;
- (id)taskDisplayUserName;
- (void)setTaskDisplayUserName:(id)arg1;
- (id)taskFooterText;
- (void)setTaskFooterText:(id)arg1;
- (id)taskDefaultThumbImgName;
- (void)setTaskDefaultThumbImgName:(id)arg1;
- (id)taskThumbImgData;
- (void)setTaskThumbImgData:(id)arg1;
- (id)taskThumbUrl;
- (void)setTaskThumbUrl:(id)arg1;
- (id)taskDefaultIconName;
- (void)setTaskDefaultIconName:(id)arg1;
- (id)taskIconImgData;
- (void)setTaskIconImgData:(id)arg1;
- (id)taskIconUrl;
- (void)setTaskIconUrl:(id)arg1;
- (unsigned long long)taskServerId;
- (void)setTaskServerId:(unsigned long long)arg1;
- (id)taskServerBizId;
- (void)setTaskServerBizId:(id)arg1;
- (unsigned long long)taskBizSeq;
- (void)setTaskBizSeq:(unsigned long long)arg1;
- (id)snapshotCdnFileId;
- (void)setSnapshotCdnFileId:(id)arg1;
- (id)snapshotCdnAesKey;
- (void)setSnapshotCdnAesKey:(id)arg1;
- (BOOL)isTaskSyncSuccess;
- (void)setIsTaskSyncSuccess:(BOOL)arg1;
- (BOOL)isSnapshotUploadSuccess;
- (void)setIsSnapshotUploadSuccess:(BOOL)arg1;
- (long long)version;
- (void)setVersion:(long long)arg1;
- (id)taskSubtitleTail;
- (void)setTaskSubtitleTail:(id)arg1;
- (BOOL)shouldIgnoreSubtitleWhenRecoverTask;
- (void)setShouldIgnoreSubtitleWhenRecoverTask:(BOOL)arg1;
- (BOOL)bForbidAddDuplicateTask;
- (void)setBForbidAddDuplicateTask:(BOOL)arg1;
- (BOOL)bForbidReplacement;
- (void)setBForbidReplacement:(BOOL)arg1;
- (id)forbidReplaceReason;
- (void)setForbidReplaceReason:(id)arg1;
- (BOOL)isDisableVoiceTic;
- (void)setIsDisableVoiceTic:(BOOL)arg1;
- (id)taskExtInfo;
- (void)setTaskExtInfo:(id)arg1;
- (unsigned long long)directLaunchType;
- (void)setDirectLaunchType:(unsigned long long)arg1;
- (id)searchHintText;
- (void)setSearchHintText:(id)arg1;
- (BOOL)isForeground;
- (void)setIsForeground:(BOOL)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)delegateClassName;
- (void)setDelegateClassName:(id)arg1;
- (BOOL)isNew;
- (void)setIsNew:(BOOL)arg1;
- (unsigned int)currentTransitionType;
- (void)setCurrentTransitionType:(unsigned int)arg1;
- (id)taskStateList;
- (void)setTaskStateList:(id)arg1;
- (unsigned int)taskStateType;
- (void)setTaskStateType:(unsigned int)arg1;
- (id)containerInfo;
- (void)setContainerInfo:(id)arg1;
- (id)stateInfo;
- (void)setStateInfo:(id)arg1;
- (BOOL)canMaximizeForStateView;
- (void)setCanMaximizeForStateView:(BOOL)arg1;
- (unsigned long long)sizeChangedAnimAnchorPoint;
- (void)setSizeChangedAnimAnchorPoint:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
