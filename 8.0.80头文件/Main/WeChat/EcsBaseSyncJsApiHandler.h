@interface EcsBaseSyncJsApiHandler : EcsBaseJsApiHandler
- (id)handle:(id)arg1 params:(id)arg2;
- (id)respOk;
- (id)respOkWithData:(id)arg1;
- (id)respCancel;
- (id)respCancelWithData:(id)arg1;
- (id)respFail;
- (id)respFailWithData:(id)arg1;
@end
