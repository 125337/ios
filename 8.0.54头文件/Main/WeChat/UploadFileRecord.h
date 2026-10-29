@interface UploadFileRecord : MMObject
{
    unsigned int _type; // +0x8
    NSString * _weburl; // +0x10
}
- (id)weburl;
- (void)setWeburl:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

