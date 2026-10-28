@interface WCDownloadEventHandler : ProtobufEventHandler
- (void)monitorReport:(id)arg1 connectFail:(BOOL)arg2 keyVector:(void *)arg3;
- (void)monitorWebpPic:(BOOL)arg1 keyVector:(void *)arg2;
- (int)getIDReportSceneKeyOffset:(id)arg1;
- (id)calMd5ForBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)logMd5WithRaw:(id)arg1 rawLen:(unsigned long long)arg2 decryptMd5:(id)arg3 rgbaMd5:(id)arg4 urlStr:(id)arg5 decodeTips:(id)arg6;
- (BOOL)decodeShouldLockForWidth:(int)arg1 height:(int)arg2;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnProtocolConnectFail:(id)arg1;
@end
