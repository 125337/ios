@interface WCAdGamePlayablePrerenderInfo : NSObject
{
    NSString * _snsId; // +0x8
    NSString * _weappUserName; // +0x10
    NSString * _weappPath; // +0x18
    NSString * _prerenderWeappPath; // +0x20
}
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (id)weappUserName;
- (void)setWeappUserName:(id)arg1;
- (id)weappPath;
- (void)setWeappPath:(id)arg1;
- (id)prerenderWeappPath;
- (void)setPrerenderWeappPath:(id)arg1;
- (void).cxx_destruct;
@end
