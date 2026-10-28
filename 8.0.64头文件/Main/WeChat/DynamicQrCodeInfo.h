@interface DynamicQrCodeInfo : MMObject
{
    BOOL _isDynamic; // +0x8
    BOOL _canRefresh; // +0x9
    NSString * _refreshWording; // +0x10
}
- (BOOL)isDynamic;
- (void)setIsDynamic:(BOOL)arg1;
- (BOOL)canRefresh;
- (void)setCanRefresh:(BOOL)arg1;
- (id)refreshWording;
- (void)setRefreshWording:(id)arg1;
- (void).cxx_destruct;
@end
