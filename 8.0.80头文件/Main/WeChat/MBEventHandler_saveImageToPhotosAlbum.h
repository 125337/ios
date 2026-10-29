@interface MBEventHandler_saveImageToPhotosAlbum : MBEventHandlerBaseAsync
- (id)apiName;
- (BOOL)invokeInMainThread;
- (void)invoke:(id)arg1;
- (void)_onSaveImageFinishedWithSuccess:(BOOL)arg1 error:(id)arg2;
@end
