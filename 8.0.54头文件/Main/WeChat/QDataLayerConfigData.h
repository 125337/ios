@interface QDataLayerConfigData : NSObject
{
    BOOL _enable; // +0x8
    NSString * _url; // +0x10
    NSDictionary * _layers; // +0x18
}
- (id)initWithJSON:(id)arg1;
- (id)getAllConfigNames;
- (id)getConfigByID:(id)arg1;
- (BOOL)enable;
- (id)url;
- (id)layers;
- (void).cxx_destruct;
@end

