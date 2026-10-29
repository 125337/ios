@interface DisplayPOINavigateItem : MMObject
{
    BOOL _isDevice; // +0x8
    BOOL _isAd; // +0x9
    NavigateMap * _map; // +0x10
    MagicAdInfo * _adInfo; // +0x18
    WCDevice * _device; // +0x20
}
- (BOOL)isDevice;
- (void)setIsDevice:(BOOL)arg1;
- (BOOL)isAd;
- (void)setIsAd:(BOOL)arg1;
- (id)map;
- (void)setMap:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (void).cxx_destruct;
@end
