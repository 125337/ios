@interface WAJSEventHandler_saveVideoToPhotosAlbum : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
@end
