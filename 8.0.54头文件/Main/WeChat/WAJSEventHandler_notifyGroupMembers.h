@interface WAJSEventHandler_notifyGroupMembers : WAJSEventHandler_BaseEvent <SharePreConfirmSheetViewDelegate, SharePreConfirmViewDelegate>
{
     $__lazy_storage_$_preConfirmSheetView; // +0x8
     $__lazy_storage_$_preConfirmView; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (id)getViewController;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

