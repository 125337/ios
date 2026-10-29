@interface OMJVideoAnalyzer : NSObject
{
    shared_ptr<XMJVideoAnalyzer> _backingAnalyzer; // +0x8
}
- (void)dealloc;
- (id)init;
- (BOOL)isInitialized;
- (BOOL)initResourcesWithModelInfos:(id)arg1 error:(id *)arg2;
- (void)releaseResources;
- (BOOL)feedVideoFrameWithData:(id)arg1 width:(long long)arg2 height:(long long)arg3 startTime:(struct)arg4 error:(id *)arg5;
- (BOOL)feedVideoFrameWithImage:(id)arg1 startTime:(struct)arg2 error:(id *)arg3;
- (BOOL)feedAudioData:(id)arg1 error:(id *)arg2;
- (id)calculateClassifyResult:(id *)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

