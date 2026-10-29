@interface WAJSContextPlugin_faceDetect : WAJSContextPluginBase
{
    NSMutableDictionary * _faceRect; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    WeVisFace * _visFace; // +0x18
}
- (int)errorCodeGetBy:(int)arg1;
- (int)initDetect;
- (id)detectImage:(WeImage<unsigned char>)arg1 withPara:(id)arg2;
- (int)releaseDetect;
- (void)initQueue;
- (id)faceRect;
- (void)setFaceRect:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)visFace;
- (void)setVisFace:(id)arg1;
- (void).cxx_destruct;
@end
