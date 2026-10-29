@interface VoicePrintResourceItem : NSObject
{
    unsigned int _scene; // +0x8
    unsigned int _resourceId; // +0xc
    NSString * _resource; // +0x10
}
- (id)description;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)resourceId;
- (void)setResourceId:(unsigned int)arg1;
- (id)resource;
- (void)setResource:(id)arg1;
- (void).cxx_destruct;
@end
