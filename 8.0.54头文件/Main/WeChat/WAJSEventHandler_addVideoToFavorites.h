@interface WAJSEventHandler_addVideoToFavorites : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (id)getRealVideoPathWithVideoPath:(id)arg1;
- (id)getThumbDataWithPath:(id)arg1;
- (id)getVideoInfoWithVideoPath:(id)arg1 thumbData:(id)arg2;
@end

