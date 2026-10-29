@interface MMLiveBeautyDriver : NSObject <MMLiveBeautyDriving>
{
    MMWeEffectManager * _effectManagerStorage; // +0x8
    MMLiveBeautyItem * _beautyItem; // +0x10
}
+ (BOOL)isDriverSupported:(id)arg1;
+ (Class)driverClassForName:(id)arg1;
- (id)initWithEffectManager:(id)arg1 beautyItem:(id)arg2;
- (id)effectManager;
- (void)setEffectManager:(id)arg1;
- (double)normalizedValue;
- (void)apply;
- (void)teardown;
- (id)effectManagerStorage;
- (void)setEffectManagerStorage:(id)arg1;
- (id)beautyItem;
- (void)setBeautyItem:(id)arg1;
- (void).cxx_destruct;
@end
