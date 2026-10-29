@interface YTBizPalmRegister : NSObject
{
    BOOL _alreadyNotifySuccess; // +0x8
    int _errCode; // +0xc
    id /* block */ _onBufferHandlingTipUpdate; // +0x10
    id /* block */ _doLog; // +0x18
    void * _ytHandle; // +0x20
    NSObject<OS_dispatch_queue> * _processingQueue; // +0x28
    long long _lastSaveLogTime; // +0x30
}
+ (int)convertToYTHandType:(unsigned long long)arg1;
+ (id)getTipLocalizedStringKey:(int)arg1 tipHandType:(unsigned long long)arg2 palmCaptureMode:(unsigned int)arg3;
+ (id)getDefaultTipLocalizedStringKey:(unsigned long long)arg1;
+ (unsigned long long)convertYTToWxHandType:(int)arg1;
+ (unsigned long long)convertSideToWxHandType:(unsigned int)arg1;
+ (id)getSdkFullVersion:(id)arg1;
- (id)initWithBundlePath:(id)arg1;
- (void)dealloc;
- (int)setSdkConfig:(id)arg1;
- (int)setLimitHandType:(unsigned long long)arg1;
- (Mat)matFromBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)handleBuffer:(opaqueCMSampleBuffer *)arg1;
- (id)getPipelineResult;
- (id)getImageResultWithHandle:(void *)arg1 type:(int)arg2;
- (id)getTotalResult;
- (id)UIImageFromCMSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (id)UIImageFromCVMat:(Mat)arg1;
- (int)errCode;
- (id /* block */)onBufferHandlingTipUpdate;
- (void)setOnBufferHandlingTipUpdate:(id /* block */)arg1;
- (id /* block */)doLog;
- (void)setDoLog:(id /* block */)arg1;
- (void *)ytHandle;
- (void)setYtHandle:(void *)arg1;
- (id)processingQueue;
- (void)setProcessingQueue:(id)arg1;
- (long long)lastSaveLogTime;
- (void)setLastSaveLogTime:(long long)arg1;
- (BOOL)alreadyNotifySuccess;
- (void)setAlreadyNotifySuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
