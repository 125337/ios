@interface NavigateMap : MMObject
{
    int _mapType; // +0x8
    NSString * _mapName; // +0x10
    UIImage * _mapIcon; // +0x18
    NSString * _viewUrl; // +0x20
    NSString * _navigateUrl; // +0x28
    NSString * _installUrl; // +0x30
    NSString * _queryUrl; // +0x38
}
- (int)mapType;
- (void)setMapType:(int)arg1;
- (id)mapName;
- (void)setMapName:(id)arg1;
- (id)mapIcon;
- (void)setMapIcon:(id)arg1;
- (id)viewUrl;
- (void)setViewUrl:(id)arg1;
- (id)navigateUrl;
- (void)setNavigateUrl:(id)arg1;
- (id)installUrl;
- (void)setInstallUrl:(id)arg1;
- (id)queryUrl;
- (void)setQueryUrl:(id)arg1;
- (void).cxx_destruct;
@end
