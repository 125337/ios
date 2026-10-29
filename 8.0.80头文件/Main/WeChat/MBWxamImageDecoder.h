@interface MBWxamImageDecoder : NSObject <IMBImageDecoder>
{
    MPPageFastLoadWXPicDecoder * _wxPicDecoder; // +0x8
    NSObject<OS_dispatch_queue> * _decodeQueue; // +0x10
    NSObject<OS_dispatch_semaphore> * _decodeSemaphore; // +0x18
}
+ (id)targetImageTypeForURL:(id)arg1;
- (id)init;
- (BOOL)canDecodeImageData:(id)arg1 forURL:(id)arg2;
- (void)decodeImageData:(id)arg1 forURL:(id)arg2 completion:(id /* block */)arg3;
- (id)decodeSyncWithData:(id)arg1 forURL:(id)arg2 outMIMEType:(id *)arg3;
- (id)wxPicDecoder;
- (void)setWxPicDecoder:(id)arg1;
- (id)decodeQueue;
- (void)setDecodeQueue:(id)arg1;
- (id)decodeSemaphore;
- (void)setDecodeSemaphore:(id)arg1;
- (void).cxx_destruct;
@end
