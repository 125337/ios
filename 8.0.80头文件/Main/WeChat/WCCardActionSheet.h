@interface WCCardActionSheet : MMObject
{
    NSString * _text; // +0x8
    NSString * _url; // +0x10
    NSString * _tinyapp_username; // +0x18
    NSString * _tinyapp_path; // +0x20
}
- (id)text;
- (void)setText:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)tinyapp_username;
- (void)setTinyapp_username:(id)arg1;
- (id)tinyapp_path;
- (void)setTinyapp_path:(id)arg1;
- (void).cxx_destruct;
@end
