@interface WAJSEventHandler_canvasToTempFilePath : WAJSEventHandler_BaseEvent
- (id)convertRawPixelToUIImage:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)handleImageReady:(id)arg1 needScale:(BOOL)arg2 dic:(id)arg3 synchronize:(BOOL)arg4;
- (void)handleJSEvent:(id)arg1;
- (void)innerHandleJSEvent:(id)arg1 synchronize:(BOOL)arg2;
@end
