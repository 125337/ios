@interface UploadMContactMsg : NSObject
{
    NSString * deviceType; // +0x8
}
- (id)initWithXml:(id)arg1;
- (void)dealloc;
- (void)parseXML:(id)arg1;
- (id)deviceType;
- (void)setDeviceType:(id)arg1;
- (void).cxx_destruct;
@end

