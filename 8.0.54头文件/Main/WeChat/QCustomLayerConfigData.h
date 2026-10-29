@interface QCustomLayerConfigData : NSObject
{
    BOOL _enable; // +0x8
    NSDictionary * _layers; // +0x10
}
- (id)initWithJSON:(id)arg1;
- (id)getConfigByID:(id)arg1;
- (id)getAllConfigNames;
- (BOOL)enable;
- (id)layers;
- (void).cxx_destruct;
@end

