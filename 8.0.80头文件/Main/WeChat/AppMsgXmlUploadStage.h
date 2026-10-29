@interface AppMsgXmlUploadStage : UploadStateStage
- (void)start;
- (void)stop;
- (id)getStateName;
- (id)serializeMsgXmlToFile;
@end
