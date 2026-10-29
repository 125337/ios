@interface HeadImgDownloadByUrlEventHandler : ProtobufEventHandler
+ (void)saveImageWithData:(id)arg1 request:(id)arg2;
- (void)saveImageDataForCGIWrap:(id)arg1;
- (id)getSaveDataFromCGIWrap:(id)arg1;
- (void)OnProtocolConnectFail:(id)arg1;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
@end

