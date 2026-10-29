@interface MMLiteAppCacheInfo : NSObject
{
    MMLiteAppViewController * _vc; // +0x8
    OpenLiteAppInfo * _openInfo; // +0x10
    id /* block */ _block; // +0x18
}
- (BOOL)isHitCache:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)openInfo;
- (void)setOpenInfo:(id)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

