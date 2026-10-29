@interface WAPrefetchTargetInfo : NSObject
{
    unsigned int _scene; // +0x8
    NSString * _username; // +0x10
    NSString * _pagePath; // +0x18
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

