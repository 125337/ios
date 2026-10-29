@interface MMNexusImageSource : NSObject
{
    NSString * _url; // +0x8
    long long _scene; // +0x10
}
+ (id)sourceWithUrl:(id)arg1;
+ (id)sourceWithUrl:(id)arg1 scene:(long long)arg2;
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void).cxx_destruct;
@end
