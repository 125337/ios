@interface WCFinderJumpNativeAppStoreParams : NSObject
{
    int _installAction; // +0x8
    NSString * _installSchemeUrl; // +0x10
    NSString * _uxinfo; // +0x18
    NSString * _extraData; // +0x20
    WCSKAdNetworkItem * _skAdItem; // +0x28
}
- (id)installSchemeUrl;
- (void)setInstallSchemeUrl:(id)arg1;
- (int)installAction;
- (void)setInstallAction:(int)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)skAdItem;
- (void)setSkAdItem:(id)arg1;
- (void).cxx_destruct;
@end
