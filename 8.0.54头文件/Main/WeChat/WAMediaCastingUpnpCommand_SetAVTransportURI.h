@interface WAMediaCastingUpnpCommand_SetAVTransportURI : WAMediaCastingUpnpCommand
{
    NSString * _uri; // +0x8
}
+ (id)commandWithURI:(id)arg1;
- (id)initWithURI:(id)arg1;
- (id)commandXMLBodyString;
- (id)uri;
- (void)setUri:(id)arg1;
- (void).cxx_destruct;
@end

