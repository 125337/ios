@interface QAuthenticationData : NSObject
{
    int _pointEventCloudControl; // +0x8
    QMapStyleData * _mapStyleData; // +0x10
    QIndoorMapData * _indoorMapData; // +0x18
    QCustomLayerConfigData * _customLayerData; // +0x20
    QDataLayerConfigData * _dataLayerData; // +0x28
    QMapPromoteConfig * _promoteConfig; // +0x30
    QL4Config * _l4Config; // +0x38
}
- (id)initWithJSON:(id)arg1;
- (id)mapStyleData;
- (id)indoorMapData;
- (id)customLayerData;
- (id)dataLayerData;
- (id)promoteConfig;
- (int)pointEventCloudControl;
- (id)l4Config;
- (void).cxx_destruct;
@end
