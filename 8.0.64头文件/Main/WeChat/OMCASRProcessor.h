@interface OMCASRProcessor : NSObject
{
    SharedPtr<XMFASRProcessor> _backingProcessor; // +0x8
}
- (id)init;
- (BOOL)initResourcesWithConfigFilePath:(id)arg1 modelFilePath:(id)arg2 cmsFilePath:(id)arg3;
- (void)releaseResources;
- (BOOL)isResourcesReady;
- (id)processWithPCMData:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
