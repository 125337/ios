@interface MMDictationMgr : MMUserService <BaseMsgViewControllerExt, MMServiceProtocol>
{
    BOOL _dictationTaskV2Enabled; // +0x8
    BOOL _isAttachmentEnabled; // +0x9
    BOOL _isWaitForEndFlag; // +0xa
    BOOL _isWaitEndFlag8BModel; // +0xb
    BOOL _shouldShowIconWhenInactive; // +0xc
    BOOL _isUsingILink; // +0xd
    BOOL _isAllowCommand; // +0xe
    BOOL _shouldUploadContext; // +0xf
    BOOL _shouldUploadAnalyzedContext; // +0x10
    BOOL _disablePrewarmModel; // +0x11
    BOOL _shouldUploadSelfContext; // +0x12
    BOOL _isOfflineFallbackEnabled; // +0x13
    BOOL _inactiveEducationEnabled; // +0x14
    BOOL _attachmentInactiveUserOfflineEnabled; // +0x15
    BOOL _attachmentActiveUserMigrationEnabled; // +0x16
    unsigned int _waitDuration; // +0x18
    unsigned int _wait8BModelDuration; // +0x1c
    unsigned int _iconShowType; // +0x20
    unsigned int _protocolType; // +0x24
    unsigned int _onlineMaxRespTime; // +0x28
    int _educationCount; // +0x2c
    int _inactiveEducationCount; // +0x30
    int _attachmentMigrationClickCount; // +0x34
    unsigned long long _inactiveEducationDoneTimestamp; // +0x38
    MMDictationReporter * _reporter; // +0x40
    unsigned long long _attachmentMigrationStartTimestamp; // +0x48
}
+ (id)shared;
- (void)onServiceInit;
- (unsigned int)commandTextDiffCharacterIntervalMS;
- (unsigned int)commandTextDiffSegmentIntervalMS;
- (unsigned int)commandTextDiffSelectionHoldMS;
- (BOOL)setCommandTextDiffCharacterIntervalMS:(unsigned int)arg1 segmentIntervalMS:(unsigned int)arg2 selectionHoldMS:(unsigned int)arg3;
- (void)resetCommandTextDiffIntervals;
- (BOOL)shouldShowSoftProtocol;
- (void)markSoftProtocolAccepted;
- (BOOL)shouldRequireHardProtocol;
- (void)markHardProtocolAccepted;
- (void)clearProtocolStateForDebug;
- (void)prewarmAnalyzedChatContextModelIfNeeded;
- (id)reporter;
- (id)educationKey;
- (void)increaseEducationCount;
- (void)markEducationDone;
- (BOOL)shouldShowEducation;
- (id)inactiveEducationKey;
- (void)increaseInactiveEducationCount;
- (BOOL)shouldShowInactiveEducation;
- (void)markInactiveEducationDone;
- (id)inactiveEducationDoneKey;
- (id)attachmentEducationKey;
- (BOOL)shouldShowAttachmentEducation;
- (void)markAttachmentEducationDone;
- (BOOL)shouldHideAttachmentVoiceInput;
- (BOOL)shouldMigrateAttachmentActiveUser;
- (BOOL)shouldShowAttachmentMigrationEducation;
- (void)increaseAttachmentMigrationClickCount;
- (void)onUserStartDictation;
- (unsigned long long)userLastStartDictationTime;
- (void)clearLastStartDictationTime;
- (void)onOfflineDictationActive;
- (unsigned long long)offlineDictationLastActiveTime;
- (void)onExitBaseMsgSession:(id)arg1;
- (BOOL)dictationTaskV2Enabled;
- (void)setDictationTaskV2Enabled:(BOOL)arg1;
- (BOOL)isAttachmentEnabled;
- (void)setIsAttachmentEnabled:(BOOL)arg1;
- (unsigned long long)inactiveEducationDoneTimestamp;
- (void)setInactiveEducationDoneTimestamp:(unsigned long long)arg1;
- (BOOL)isWaitForEndFlag;
- (void)setIsWaitForEndFlag:(BOOL)arg1;
- (unsigned int)waitDuration;
- (void)setWaitDuration:(unsigned int)arg1;
- (BOOL)isWaitEndFlag8BModel;
- (void)setIsWaitEndFlag8BModel:(BOOL)arg1;
- (unsigned int)wait8BModelDuration;
- (void)setWait8BModelDuration:(unsigned int)arg1;
- (void)setReporter:(id)arg1;
- (BOOL)shouldShowIconWhenInactive;
- (void)setShouldShowIconWhenInactive:(BOOL)arg1;
- (unsigned int)iconShowType;
- (void)setIconShowType:(unsigned int)arg1;
- (BOOL)isUsingILink;
- (void)setIsUsingILink:(BOOL)arg1;
- (BOOL)isAllowCommand;
- (void)setIsAllowCommand:(BOOL)arg1;
- (BOOL)shouldUploadContext;
- (void)setShouldUploadContext:(BOOL)arg1;
- (BOOL)shouldUploadAnalyzedContext;
- (void)setShouldUploadAnalyzedContext:(BOOL)arg1;
- (BOOL)disablePrewarmModel;
- (void)setDisablePrewarmModel:(BOOL)arg1;
- (BOOL)shouldUploadSelfContext;
- (void)setShouldUploadSelfContext:(BOOL)arg1;
- (unsigned int)protocolType;
- (void)setProtocolType:(unsigned int)arg1;
- (BOOL)isOfflineFallbackEnabled;
- (void)setIsOfflineFallbackEnabled:(BOOL)arg1;
- (unsigned int)onlineMaxRespTime;
- (void)setOnlineMaxRespTime:(unsigned int)arg1;
- (int)educationCount;
- (void)setEducationCount:(int)arg1;
- (int)inactiveEducationCount;
- (void)setInactiveEducationCount:(int)arg1;
- (BOOL)inactiveEducationEnabled;
- (void)setInactiveEducationEnabled:(BOOL)arg1;
- (BOOL)attachmentInactiveUserOfflineEnabled;
- (void)setAttachmentInactiveUserOfflineEnabled:(BOOL)arg1;
- (BOOL)attachmentActiveUserMigrationEnabled;
- (void)setAttachmentActiveUserMigrationEnabled:(BOOL)arg1;
- (unsigned long long)attachmentMigrationStartTimestamp;
- (void)setAttachmentMigrationStartTimestamp:(unsigned long long)arg1;
- (int)attachmentMigrationClickCount;
- (void)setAttachmentMigrationClickCount:(int)arg1;
- (void).cxx_destruct;
@end
