@interface AbstractWebSearchDataFetcher : LocalJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (id)buildWebSearchRequest:(id)arg1;
- (id)prepareReturnDictionary:(id)arg1 params:(id)arg2;
- (void)sendSearchDataToH5:(id)arg1;
- (void)sendFailedDataToH5:(id)arg1;
- (unsigned int)h5Version;
- (unsigned int)cgiNumber;
- (id)h5NotifyEventName;
- (BOOL)shouldCarryUserList:(id)arg1 andScene:(unsigned int)arg2 andBizType:(unsigned int)arg3 isHomePage:(BOOL)arg4;
- (void)onRequestWillStart:(id)arg1;
- (void)onRequestFail:(id)arg1;
- (void)onRequestSuccess:(id)arg1;
- (id)makeEmptyJSONResultParam:(BOOL)arg1;
- (id)makeNetworkFailParam:(BOOL)arg1;
- (unsigned long long)scene;
@end
