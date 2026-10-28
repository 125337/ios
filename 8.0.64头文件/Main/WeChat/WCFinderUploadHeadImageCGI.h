@interface WCFinderUploadHeadImageCGI : WCFinderBaseCgi
{
    unsigned int _imageDataTotalLength; // +0x8
    unsigned int _currentTaskStartPos; // +0xc
    NSString * _imageDataMD5; // +0x10
    NSData * _imageData; // +0x18
    unsigned long long _scene; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failureBolck; // +0x30
}
- (id)initWithScene:(unsigned long long)arg1 avatarData:(id)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)imageDataMD5;
- (void)setImageDataMD5:(id)arg1;
- (unsigned int)imageDataTotalLength;
- (void)setImageDataTotalLength:(unsigned int)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned int)currentTaskStartPos;
- (void)setCurrentTaskStartPos:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBolck;
- (void)setFailureBolck:(id /* block */)arg1;
- (void).cxx_destruct;
@end
