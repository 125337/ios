@interface WAJSEventHandler_previewMedia : WAJSEventHandler_BaseEvent
{
    WAMediaPreviewViewController * m_mediaViewController; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)uninitImageViewer;
- (BOOL)showMediaWithSources:(id)arg1 current:(int)arg2 referrerPolicyType:(unsigned long long)arg3 showMenu:(BOOL)arg4;
- (void)dealloc;
- (void).cxx_destruct;
@end

