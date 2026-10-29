@interface MMTextProfileItem : NSObject
{
    int _errorW; // +0x8
    int _errorH; // +0xc
    int _ratio; // +0x10
    float _statisticsRatio; // +0x14
    float _pointSize; // +0x18
    int _type; // +0x1c
    unsigned long long _sid; // +0x20
    MMTextLayoutParam _param; // +0x28
}
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)sid;
- (void)setSid:(unsigned long long)arg1;
- (int)errorW;
- (void)setErrorW:(int)arg1;
- (int)errorH;
- (void)setErrorH:(int)arg1;
- (int)ratio;
- (void)setRatio:(int)arg1;
- (float)statisticsRatio;
- (void)setStatisticsRatio:(float)arg1;
- (float)pointSize;
- (void)setPointSize:(float)arg1;
- (MMTextLayoutParam)param;
- (void)setParam:(MMTextLayoutParam)arg1;
- (int)type;
- (void)setType:(int)arg1;
@end
