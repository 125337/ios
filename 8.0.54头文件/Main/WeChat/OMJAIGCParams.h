@interface OMJAIGCParams : NSObject
{
    long long _requestID; // +0x8
    NSString * _imageFilePath; // +0x10
    NSData * _aigcBuffer; // +0x18
}
- (id)initWithRequestID:(long long)arg1 imageFilePath:(id)arg2;
- (id)initWithRequestID:(long long)arg1 imageFilePath:(id)arg2 aigcBuffer:(id)arg3;
- (long long)requestID;
- (id)imageFilePath;
- (id)aigcBuffer;
- (void).cxx_destruct;
@end

