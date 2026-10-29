@interface WCAdDynamicCanvasDSLPreloadItem : NSObject
{
    NSString * _url; // +0x8
    NSString * _md5; // +0x10
    long long _type; // +0x18
    long long _size; // +0x20
    NSString * _materialId; // +0x28
}
- (id)url;
- (void)setUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)size;
- (void)setSize:(long long)arg1;
- (id)materialId;
- (void)setMaterialId:(id)arg1;
- (void).cxx_destruct;
@end

