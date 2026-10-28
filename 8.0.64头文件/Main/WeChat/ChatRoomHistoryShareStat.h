@interface ChatRoomHistoryShareStat : NSObject
{
    NSString * _nsClassifiedMsgStat; // +0x8
    unsigned int _uiFinalShareCnt; // +0x10
    unsigned int _uFinalShareCountSecondForward; // +0x14
    BOOL _isRoomNewlyCreated; // +0x18
    BOOL _isUpgradeOpenIMGroup; // +0x19
    BOOL _hasExposedShareEntry; // +0x1a
    BOOL _hasClickedShareEntry; // +0x1b
    unsigned int _uiInvitedCnt; // +0x1c
    unsigned int _clickClearCnt; // +0x20
    unsigned int _exceedAlertCnt; // +0x24
    unsigned int _exceedSizeAlertCnt; // +0x28
    unsigned int _sharedLastFileSize; // +0x2c
    unsigned int _abandonUploadCount; // +0x30
    unsigned int _uploadManualRetryCount; // +0x34
    unsigned int _initSelectCnt; // +0x38
    unsigned int _autoSelectCnt; // +0x3c
    unsigned int _autoDisSelectCnt; // +0x40
    unsigned int _manuSelectCnt; // +0x44
    unsigned int _manuDisSelectCnt; // +0x48
    unsigned int _uploadFailCnt; // +0x4c
    unsigned int _waitUploadAlertCnt; // +0x50
    unsigned int _uploadFailAlertCnt; // +0x54
    NSString * _roomId; // +0x58
    NSString * _nsAddMemberStat; // +0x60
    unsigned long long _uploadStartMs; // +0x68
    unsigned long long _uploadEndMs; // +0x70
    unsigned long long _sharedContentSize; // +0x78
    unsigned long long _abandonUploadContentSize; // +0x80
}
- (void)statSelectedMsgs:(id)arg1;
- (void)statAddedMemberList:(id)arg1;
- (void)abandonLastUpload;
- (id)getUsrnameStatFromMemberList:(id)arg1;
- (unsigned int)getUploadTimeMs;
- (id)commonBuildStat:(int)arg1;
- (id)commonBuildStat:(int)arg1 addMemberErrCode:(unsigned int)arg2;
- (void)cancelShareReport;
- (void)successReport:(int)arg1;
- (void)failReport:(unsigned int)arg1;
- (void)internalKVStat:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (id)nsAddMemberStat;
- (void)setNsAddMemberStat:(id)arg1;
- (unsigned int)uiInvitedCnt;
- (void)setUiInvitedCnt:(unsigned int)arg1;
- (BOOL)isRoomNewlyCreated;
- (void)setIsRoomNewlyCreated:(BOOL)arg1;
- (BOOL)isUpgradeOpenIMGroup;
- (void)setIsUpgradeOpenIMGroup:(BOOL)arg1;
- (BOOL)hasExposedShareEntry;
- (void)setHasExposedShareEntry:(BOOL)arg1;
- (BOOL)hasClickedShareEntry;
- (void)setHasClickedShareEntry:(BOOL)arg1;
- (unsigned int)clickClearCnt;
- (void)setClickClearCnt:(unsigned int)arg1;
- (unsigned int)exceedAlertCnt;
- (void)setExceedAlertCnt:(unsigned int)arg1;
- (unsigned int)exceedSizeAlertCnt;
- (void)setExceedSizeAlertCnt:(unsigned int)arg1;
- (unsigned long long)uploadStartMs;
- (void)setUploadStartMs:(unsigned long long)arg1;
- (unsigned long long)uploadEndMs;
- (void)setUploadEndMs:(unsigned long long)arg1;
- (unsigned long long)sharedContentSize;
- (void)setSharedContentSize:(unsigned long long)arg1;
- (unsigned int)sharedLastFileSize;
- (void)setSharedLastFileSize:(unsigned int)arg1;
- (unsigned long long)abandonUploadContentSize;
- (void)setAbandonUploadContentSize:(unsigned long long)arg1;
- (unsigned int)abandonUploadCount;
- (void)setAbandonUploadCount:(unsigned int)arg1;
- (unsigned int)uploadManualRetryCount;
- (void)setUploadManualRetryCount:(unsigned int)arg1;
- (unsigned int)initSelectCnt;
- (void)setInitSelectCnt:(unsigned int)arg1;
- (unsigned int)autoSelectCnt;
- (void)setAutoSelectCnt:(unsigned int)arg1;
- (unsigned int)autoDisSelectCnt;
- (void)setAutoDisSelectCnt:(unsigned int)arg1;
- (unsigned int)manuSelectCnt;
- (void)setManuSelectCnt:(unsigned int)arg1;
- (unsigned int)manuDisSelectCnt;
- (void)setManuDisSelectCnt:(unsigned int)arg1;
- (unsigned int)uploadFailCnt;
- (void)setUploadFailCnt:(unsigned int)arg1;
- (unsigned int)waitUploadAlertCnt;
- (void)setWaitUploadAlertCnt:(unsigned int)arg1;
- (unsigned int)uploadFailAlertCnt;
- (void)setUploadFailAlertCnt:(unsigned int)arg1;
- (void).cxx_destruct;
@end
