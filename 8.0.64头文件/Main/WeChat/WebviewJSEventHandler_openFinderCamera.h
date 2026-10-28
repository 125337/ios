@interface WebviewJSEventHandler_openFinderCamera : WebviewJSEventHandlerBase <WCFinderPostMgrDelegate>
{
    JSEvent * _event; // +0x8
    WCFinderPostMgr * _postMgr; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)returnResult:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (id)postMgrSourceInfo:(id)arg1;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (id)postMgr;
- (void)setPostMgr:(id)arg1;
- (void).cxx_destruct;
@end
