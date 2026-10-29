@interface VOIPPluginEntryHelper : NSObject <IRecordPermissionCheckExt, WCActionSheetDelegate>
{
    TrackRoomEventContext * _trackReportCtx; // +0x8
    CContact * _pendingMultiTalkContact; // +0x10
    id <ilinkMultiSelectLogicDelegate> _pendingMultiTalkDelegate; // +0x18
    ilinkMultiSelectLogic * _multiSelectLogic; // +0x20
    CContact * _pendingVoipContact; // +0x28
}
+ (id)buildChatRoomReportCtxForContact:(id)arg1;
- (void)reallyStartVoiceVoipWithContact:(id)arg1;
- (void)reallyStartVideoVoipWithContact:(id)arg1;
- (void)startVideoVoipWithContact:(id)arg1 fromView:(id)arg2;
- (BOOL)isEnableVoiceVoipFromPlugin;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startMultiTalkWithContact:(id)arg1 multiSelectDelegate:(id)arg2;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)realStartMultiTalk;
- (void)doJoinExistMultiTalkWithContact:(id)arg1;
- (id)trackReportCtx;
- (void)setTrackReportCtx:(id)arg1;
- (id)pendingMultiTalkContact;
- (void)setPendingMultiTalkContact:(id)arg1;
- (id)pendingMultiTalkDelegate;
- (void)setPendingMultiTalkDelegate:(id)arg1;
- (id)multiSelectLogic;
- (void)setMultiSelectLogic:(id)arg1;
- (id)pendingVoipContact;
- (void)setPendingVoipContact:(id)arg1;
- (void).cxx_destruct;
@end
