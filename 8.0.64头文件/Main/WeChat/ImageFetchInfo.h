@interface ImageFetchInfo : NSObject
{
    NSString * _name; // +0x8
    NSString * _urlString; // +0x10
    NSString * _md5; // +0x18
    NSString * _path; // +0x20
}
- (id)initWithName:(id)arg1 urlString:(id)arg2 md5:(id)arg3;
- (id)name;
- (void)setName:(id)arg1;
- (id)urlString;
- (void)setUrlString:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end
