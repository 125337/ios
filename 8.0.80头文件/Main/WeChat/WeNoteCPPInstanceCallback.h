@interface WeNoteCPPInstanceCallback : NSObject
{
    WeNoteCPPInstanceDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(WeNoteCPPInstanceDispatcherBridgeObjcImpl *)arg1;
- (void)onsaveNoteComplete:(unsigned long long)arg1 hasUpdate:(BOOL)arg2 htmlString:(id)arg3 attributeList:(id)arg4 isMarkdown:(BOOL)arg5;
@end
