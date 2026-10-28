@interface WebviewJSEventHandler_shareTimelinePrivate : WebviewJSEventHandlerBase
{
    ShareTimelineBaseImpl * _shareTimelineImpl; // +0x8
    NSData * _coverImageData; // +0x10
}
- (id)shareTimelineImpl;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)setupUploadTask:(id)arg1 forEvent:(id)arg2;
- (void)setShareTimelineImpl:(id)arg1;
- (id)coverImageData;
- (void)setCoverImageData:(id)arg1;
- (void).cxx_destruct;
@end
