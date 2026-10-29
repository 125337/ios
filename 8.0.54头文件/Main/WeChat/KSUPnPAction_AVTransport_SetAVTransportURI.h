@interface KSUPnPAction_AVTransport_SetAVTransportURI : KSUPnPAction
{
    NSString * _transportURI; // +0x8
    NSString * _title; // +0x10
}
- (id)actionName;
- (id)generateXMLForActionArguments;
- (id)transportURI;
- (void)setTransportURI:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

