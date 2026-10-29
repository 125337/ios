@interface QBrandPromotionContext : NSObject
{
    QMapPromoteConfig * _promoteConfig; // +0x8
    QMapView * _mapView; // +0x10
    NSOperationQueue * _queue; // +0x18
}
- (id)initWithMapView:(id)arg1;
- (void)setup;
- (void)setPromoteConfig:(id)arg1;
- (id)configPath;
- (id)loadConfigFromLocalCache;
- (void)writeConfigToLocalCache:(id)arg1;
- (id)promoteConfig;
- (id)mapView;
- (id)queue;
- (void).cxx_destruct;
@end

