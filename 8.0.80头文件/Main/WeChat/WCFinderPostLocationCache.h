@interface WCFinderPostLocationCache : NSObject
{
    BOOL _enableSelectPOIFromAsset; // +0x8
    FinderLbsListStreamRequest * _materialLbsLocation; // +0x10
    FinderLbsListStreamRequest * _lbsLocation; // +0x18
    CLLocation * _lastUpdateLocation; // +0x20
}
- (id)generateJsonInfo;
- (BOOL)enableSelectPOIFromAsset;
- (void)setEnableSelectPOIFromAsset:(BOOL)arg1;
- (id)materialLbsLocation;
- (void)setMaterialLbsLocation:(id)arg1;
- (id)lbsLocation;
- (void)setLbsLocation:(id)arg1;
- (id)lastUpdateLocation;
- (void)setLastUpdateLocation:(id)arg1;
- (void).cxx_destruct;
@end
