@interface WCAdExpressionGeneralJumpInfo : NSObject
{
    unsigned int _weappVersion; // +0x8
    int _miniProgramType; // +0xc
    long long _type; // +0x10
    NSString * _uxInfo; // +0x18
    unsigned long long _appointmentId; // +0x20
    NSString * _canvasId; // +0x28
    NSString * _h5Url; // +0x30
    NSString * _weappUserName; // +0x38
    NSString * _weappPath; // +0x40
}
- (long long)type;
- (void)setType:(long long)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (unsigned long long)appointmentId;
- (void)setAppointmentId:(unsigned long long)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)h5Url;
- (void)setH5Url:(id)arg1;
- (id)weappUserName;
- (void)setWeappUserName:(id)arg1;
- (id)weappPath;
- (void)setWeappPath:(id)arg1;
- (unsigned int)weappVersion;
- (void)setWeappVersion:(unsigned int)arg1;
- (int)miniProgramType;
- (void)setMiniProgramType:(int)arg1;
- (void).cxx_destruct;
@end

