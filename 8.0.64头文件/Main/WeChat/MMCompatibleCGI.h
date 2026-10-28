@interface MMCompatibleCGI : MMObject
{
    unsigned int _uiCgi; // +0x8
    unsigned int _cgiType; // +0xc
    NSString * _pbUniqueID; // +0x10
    NSData * _pbRequestData; // +0x18
    NSData * _pbResponseData; // +0x20
}
- (id)pbUniqueID;
- (void)setPbUniqueID:(id)arg1;
- (id)pbRequestData;
- (void)setPbRequestData:(id)arg1;
- (id)pbResponseData;
- (void)setPbResponseData:(id)arg1;
- (unsigned int)uiCgi;
- (void)setUiCgi:(unsigned int)arg1;
- (unsigned int)cgiType;
- (void)setCgiType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
