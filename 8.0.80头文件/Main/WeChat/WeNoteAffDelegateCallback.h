@interface WeNoteAffDelegateCallback : NSObject
{
    WeNoteAffDelegateDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(WeNoteAffDelegateDispatcherBridgeObjcImpl *)arg1;
- (void)oncheckEnablePasteComplete:(unsigned long long)arg1 enable:(BOOL)arg2;
- (void)ongetAttributeInfoListFromClipBoardComplete:(unsigned long long)arg1 attributeInfoList:(id)arg2;
- (void)ononReportDictationInputRangeComplete:(unsigned long long)arg1;
@end
