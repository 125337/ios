@interface EnhanceTranslatingUtil : NSObject
{
    NSObject<OS_dispatch_queue> * _detectorsQueue; // +0x8
    XNetInferenceSession * _xnetSession; // +0x10
}
- (id)init;
- (id)modelPath;
- (id)modelCachePath;
- (void)checkModelUpdate;
- (void)loadModel;
- (void)releaseModel;
- (BOOL)checkModelExist;
- (void)detectDocumentArea:(id)arg1 cropRect:(CGRect)arg2 sessionId:(unsigned long long)arg3;
- (void)callBack:(unsigned long long)arg1 vetrices:(id)arg2 docImg:(id)arg3 originImg:(id)arg4;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)detectorsQueue;
- (void)setDetectorsQueue:(id)arg1;
- (id)xnetSession;
- (void)setXnetSession:(id)arg1;
- (void).cxx_destruct;
@end

