@interface DetectOnlyState : BaseState
{
    BOOL needBigFaceMode; // +0x8
    YtFaceDetParam param; // +0xc
    YTFaceDetection * detector; // +0x30
}
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (void)unload;
- (void)reset;
- (void)update:(Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (id).cxx_construct;
@end
