@interface CameraScanGoodsItemQualityInfo : NSObject
{
    float _possibility; // +0x8
    int _age; // +0xc
    int _hit; // +0x10
}
- (id)qualityInfoString;
- (float)possibility;
- (void)setPossibility:(float)arg1;
- (int)age;
- (void)setAge:(int)arg1;
- (int)hit;
- (void)setHit:(int)arg1;
@end
