@interface TAVImageFileResouce : TAVImageResource
{
    NSString * _filePath; // +0x8
    CIImage * _tempImage; // +0x10
    id /* block */ _cleanBlock; // +0x18
    NSObject<OS_dispatch_semaphore> * _operationSemaphore; // +0x20
}
- (void)dealloc;
- (id)init;
- (id)initWitiFilePath:(id)arg1 duration:(struct)arg2;
- (void)commonInit;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)imageAtTime:(struct)arg1 renderSize:(CGSize)arg2;
- (void)cleanImage;
- (void)performCleanImage;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)tempImage;
- (void)setTempImage:(id)arg1;
- (id /* block */)cleanBlock;
- (void)setCleanBlock:(id /* block */)arg1;
- (id)operationSemaphore;
- (void)setOperationSemaphore:(id)arg1;
- (void).cxx_destruct;
@end

