@interface QMapPromoteConfig : NSObject
{
    BOOL _enable; // +0x8
    unsigned int _maxZoom; // +0xc
    unsigned int _minZoom; // +0x10
    NSDictionary * _json; // +0x18
}
- (id)initWithDict:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)enable;
- (unsigned int)maxZoom;
- (unsigned int)minZoom;
- (id)json;
- (void).cxx_destruct;
@end

