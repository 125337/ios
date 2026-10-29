@interface OMJAIGCExplicitRequestResult : NSObject
{
    NSString * _requestID; // +0x8
    NSArray * _uploadedInputAssets; // +0x10
    NSArray * _renderedInputAssets; // +0x18
    NSArray * _generatedAssets; // +0x20
}
- (id)initWithRequestID:(id)arg1 uploadedInputAssets:(id)arg2 renderedInputAssets:(id)arg3 generatedAssets:(id)arg4;
- (id)requestID;
- (id)uploadedInputAssets;
- (id)renderedInputAssets;
- (id)generatedAssets;
- (void).cxx_destruct;
@end
