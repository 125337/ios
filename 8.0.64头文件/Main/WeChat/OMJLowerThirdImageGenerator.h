@interface OMJLowerThirdImageGenerator : NSObject
{
    SharedPtr<XMJLowerThirdImageGenerator> _backingImageGenerator; // +0x8
}
- (id)init;
- (void)dealloc;
- (BOOL)registerLowerThirdWithID:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (BOOL)registerFontWithName:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (id)getFontNamesForLowerThirdWithID:(id)arg1;
- (void)generateWithLowerThirdID:(id)arg1 userInputData:(id)arg2 imageSize:(CGSize)arg3 scaleMode:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)generateWithLowerThirdID:(id)arg1 userInputData:(id)arg2 maxPointSize:(double)arg3 scaleFactor:(double)arg4 completionHandler:(id /* block */)arg5;
- (SharedPtr<XMJLowerThirdImageGenerator>)backingImageGenerator;
- (void)setBackingImageGenerator:(SharedPtr<XMJLowerThirdImageGenerator>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
