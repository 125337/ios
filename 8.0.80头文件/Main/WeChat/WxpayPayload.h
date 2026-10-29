@interface WxpayPayload : NSObject
{
    NSDictionary * _data; // +0x8
    NSArray * _blobs; // +0x10
    NSDictionary * _parameterCallbacks; // +0x18
    NSDictionary * _streamCallbacks; // +0x20
    id _jsonRootValue; // +0x28
}
+ (id)blobReferenceAtIndex:(unsigned long long)arg1;
+ (id)payloadWithJSONRootValue:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1 blobs:(id)arg2;
- (id)initWithData:(id)arg1 blobs:(id)arg2 parameterCallbacks:(id)arg3;
- (id)initWithData:(id)arg1 blobs:(id)arg2 parameterCallbacks:(id)arg3 streamCallbacks:(id)arg4;
- (id)data;
- (void)setData:(id)arg1;
- (id)blobs;
- (void)setBlobs:(id)arg1;
- (id)parameterCallbacks;
- (void)setParameterCallbacks:(id)arg1;
- (id)streamCallbacks;
- (void)setStreamCallbacks:(id)arg1;
- (id)jsonRootValue;
- (void)setJsonRootValue:(id)arg1;
- (void).cxx_destruct;
@end
