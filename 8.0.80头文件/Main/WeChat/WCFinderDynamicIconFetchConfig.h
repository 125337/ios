@interface WCFinderDynamicIconFetchConfig : NSObject
{
    NSString * _url; // +0x8
    NSString * _key; // +0x10
    NSString * _defaultSVGName; // +0x18
    WCFinderDynamicIconFetchArgs * _args; // +0x20
    UIImage * _image; // +0x28
}
- (id)key;
- (id)url;
- (void)setUrl:(id)arg1;
- (void)setKey:(id)arg1;
- (id)defaultSVGName;
- (void)setDefaultSVGName:(id)arg1;
- (id)args;
- (void)setArgs:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
@end
