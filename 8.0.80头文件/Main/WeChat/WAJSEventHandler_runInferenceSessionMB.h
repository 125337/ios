@interface WAJSEventHandler_runInferenceSessionMB : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (id)convertTypeStr2TensorDataType:(id)arg1;
- (id)convertTensorDataType2TypeStr:(id)arg1;
- (id)arrSupportTypeStr;
- (id)arrSupportTensorDataType;
@end
