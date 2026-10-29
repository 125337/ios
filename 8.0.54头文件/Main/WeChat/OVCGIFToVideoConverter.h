@interface OVCGIFToVideoConverter : NSObject
{
    SharedPtr<XVCGIFToVideoConverter> _backingConvertor; // +0x8
    id <OVCGIFToVideoConverterDelegate> _delegate; // +0x10
}
- (id)init;
- (void)startConvertingWithGIFFilePath:(id)arg1 toVideo:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelConverting;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

