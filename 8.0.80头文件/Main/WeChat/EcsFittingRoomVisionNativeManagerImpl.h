@interface EcsFittingRoomVisionNativeManagerImpl : NSObject <EcsFittingRoomVisionNativeManagerBase>
{
    EcsFittingRoomVisionNativeManagerCallback * _visionCallback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)prepareFullBodyImageAsync:(unsigned long long)arg1 localPath:(id)arg2 maximumDimension:(int)arg3;
- (id)visionCallback;
- (void)setVisionCallback:(id)arg1;
- (void).cxx_destruct;
@end
