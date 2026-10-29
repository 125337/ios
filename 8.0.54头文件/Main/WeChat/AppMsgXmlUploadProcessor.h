@interface AppMsgXmlUploadProcessor : UploadStateProcessor
- (void)start;
- (void)stop;
- (id)getStateName;
- (id)serializeMsgXmlToFile;
@end

