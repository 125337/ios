@interface WAJSEventHandler_previewImage : WAJSEventHandler_BaseEvent
{
    PhotoViewController * m_photoViewController; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)uninitImageViewer;
- (void)showImageWithUrls:(id)arg1 current:(id)arg2 referrerPolicyType:(unsigned long long)arg3 showMenu:(BOOL)arg4;
- (void)dealloc;
- (void).cxx_destruct;
@end

