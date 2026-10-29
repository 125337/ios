@interface WAJSEventHandler_detectImageCode : WAJSEventHandler_BaseEvent
{
    NSMutableArray * _detectResults; // +0x8
    NSObject<OS_dispatch_queue> * _getA8KeyQueue; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)batchGetA8KeyForResults:(id)arg1;
- (void)checkGetA8KeyFinish;
- (id)getImageGrayDataWithUrl:(id)arg1 size:(CGSize *)arg2;
- (BOOL)scanImage:(id)arg1 imageSize:(CGSize)arg2 codeType:(long long)arg3 outResults:(id)arg4;
- (id)convertQBarInfo2Result:(const void *)arg1;
- (void).cxx_destruct;
@end
