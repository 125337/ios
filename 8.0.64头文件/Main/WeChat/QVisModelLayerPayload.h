@interface QVisModelLayerPayload : QVisLayerPayload
{
    BOOL _autoScale; // +0x38
    double _altitude; // +0x40
    double _rotationX; // +0x48
    double _rotationY; // +0x50
    double _rotationZ; // +0x58
    double _scale; // +0x60
    long long _animationType; // +0x68
    NSArray * _pedestal; // +0x70
    NSString * _format; // +0x78
    NSString * _name; // +0x80
    NSString * _modelID; // +0x88
    NSString * _url; // +0x90
    NSString * _astcUrl; // +0x98
    NSString * _ktx2Url; // +0xa0
    NSString * _target_name; // +0xa8
    double _exposure; // +0xb0
    CLLocationCoordinate2D _coordinate; // +0xb8
    CGSize _size; // +0xc8
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getAppropriateModelURL;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (double)altitude;
- (void)setAltitude:(double)arg1;
- (BOOL)autoScale;
- (void)setAutoScale:(BOOL)arg1;
- (double)rotationX;
- (void)setRotationX:(double)arg1;
- (double)rotationY;
- (void)setRotationY:(double)arg1;
- (double)rotationZ;
- (void)setRotationZ:(double)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (long long)animationType;
- (void)setAnimationType:(long long)arg1;
- (id)pedestal;
- (void)setPedestal:(id)arg1;
- (id)format;
- (void)setFormat:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)modelID;
- (void)setModelID:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)astcUrl;
- (void)setAstcUrl:(id)arg1;
- (id)ktx2Url;
- (void)setKtx2Url:(id)arg1;
- (id)target_name;
- (void)setTarget_name:(id)arg1;
- (double)exposure;
- (void)setExposure:(double)arg1;
- (void).cxx_destruct;
@end
