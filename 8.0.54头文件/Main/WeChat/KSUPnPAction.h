@interface KSUPnPAction : NSObject
{
    NSString * _instanceDescription; // +0x8
    KSUPnPDevice * _device; // +0x10
    KSUPnPDeviceService * _service; // +0x18
}
- (id)stringBySanitizingAndEscapingForXML:(id)arg1;
- (id)initWithDevice:(id)arg1 service:(id)arg2;
- (id)actionName;
- (id)serviceType;
- (id)controlURL;
- (id)generateXMLForAction;
- (id)generateXMLForActionArguments;
- (BOOL)parseActionBodyFromXMLData:(id)arg1;
- (id)parseActionErrorFromXMLData:(id)arg1;
- (void)takeActionWithCompletionHandler:(id /* block */)arg1;
- (void)handleResponseWithRecord:(id)arg1 response:(id)arg2 data:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)callSuccessHandler:(id /* block */)arg1 withRecord:(id)arg2;
- (void)callFailureHandler:(id /* block */)arg1 withRecord:(id)arg2 error:(id)arg3;
- (id)instanceDescription;
- (id)propertiesDescription;
- (id)device;
- (id)service;
- (void).cxx_destruct;
@end

