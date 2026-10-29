@interface QMapConfig : NSObject
{
    BOOL _enableMSAA; // +0x8
    int _overseaSourceType; // +0xc
    NSString * _subID; // +0x10
    NSString * _subKey; // +0x18
    NSString * _mapFont; // +0x20
    NSDictionary * _preset; // +0x28
    QTrafficStyle * _trafficStyle; // +0x30
}
- (id)initWithSubID:(id)arg1 subKey:(id)arg2;
- (id)subID;
- (id)subKey;
- (id)mapFont;
- (void)setMapFont:(id)arg1;
- (id)preset;
- (void)setPreset:(id)arg1;
- (int)overseaSourceType;
- (void)setOverseaSourceType:(int)arg1;
- (id)trafficStyle;
- (void)setTrafficStyle:(id)arg1;
- (BOOL)enableMSAA;
- (void)setEnableMSAA:(BOOL)arg1;
- (void).cxx_destruct;
@end

