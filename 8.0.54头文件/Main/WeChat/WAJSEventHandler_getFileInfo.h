@interface WAJSEventHandler_getFileInfo : WAJSEventHandler_BaseEvent
{
    BOOL _shouldEndBeforeDealloc; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onResult:(id)arg1 error:(id)arg2 errNo:(unsigned int)arg3;
- (void)dealloc;
- (BOOL)shouldEndBeforeDealloc;
- (void)setShouldEndBeforeDealloc:(BOOL)arg1;
@end

