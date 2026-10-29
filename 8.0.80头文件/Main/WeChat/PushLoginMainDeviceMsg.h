@interface PushLoginMainDeviceMsg : NSObject
{
    NSString * _url; // +0x8
    NSString * _uuid; // +0x10
}
- (id)initWithXML:(id)arg1;
- (void)dealloc;
- (void)parseXML:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (void).cxx_destruct;
@end
