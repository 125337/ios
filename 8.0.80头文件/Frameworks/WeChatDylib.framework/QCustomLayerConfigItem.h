@interface QCustomLayerConfigItem : NSObject
{
    NSString * _layerid; // +0x8
    NSString * _url; // +0x10
    NSString * _version; // +0x18
    NSArray * _params; // +0x20
    double _zoom_max; // +0x28
    double _zoom_min; // +0x30
    NSDictionary * _originJSON; // +0x38
}
- (id)initWithJSON:(id)arg1;
- (id)layerid;
- (id)url;
- (id)version;
- (id)params;
- (double)zoom_max;
- (double)zoom_min;
- (id)originJSON;
- (void).cxx_destruct;
@end
