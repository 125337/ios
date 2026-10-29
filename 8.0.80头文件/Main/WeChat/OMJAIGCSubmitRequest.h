@interface OMJAIGCSubmitRequest : NSObject
{
    NSString * _requestID; // +0x8
    NSString * _templateID; // +0x10
    NSString * _aigcServiceID; // +0x18
    NSArray * _assets; // +0x20
    NSDictionary * _dynamicParams; // +0x28
}
- (id)initWithRequestID:(id)arg1 templateID:(id)arg2 aigcServiceID:(id)arg3 dynamicParams:(id)arg4 assets:(id)arg5;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)aigcServiceID;
- (void)setAigcServiceID:(id)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;
- (id)dynamicParams;
- (void)setDynamicParams:(id)arg1;
- (void).cxx_destruct;
@end
