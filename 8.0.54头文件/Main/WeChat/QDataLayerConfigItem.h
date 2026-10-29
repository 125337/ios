@interface QDataLayerConfigItem : NSObject
{
    NSString * _layerid; // +0x8
    NSString * _url; // +0x10
    NSString * _cfg_ver; // +0x18
    NSString * _data_ver; // +0x20
    NSArray * _params; // +0x28
    NSDictionary * _originJSON; // +0x30
}
- (id)initWithJSON:(id)arg1;
- (id)layerid;
- (id)url;
- (id)cfg_ver;
- (id)data_ver;
- (id)params;
- (id)originJSON;
- (void).cxx_destruct;
@end

