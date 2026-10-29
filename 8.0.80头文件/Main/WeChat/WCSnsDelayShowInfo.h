@interface WCSnsDelayShowInfo : MMObject <PBCoding>
{
    BOOL needDelayInViewLifeCycle; // +0x8
    unsigned int _respTimeStamp; // +0xc
    unsigned int _delayInterval; // +0x10
    unsigned int _showTimeStamp; // +0x14
    NSString * _layerId; // +0x18
    NSString * _expId; // +0x20
}
+ (void)PBArrayAdd_layerId;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_respTimeStamp;
+ (void)PBArrayAdd_delayInterval;
+ (void)PBArrayAdd_showTimeStamp;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)parseDelayShowInfo:(id)arg1;
- (BOOL)needDelayInViewLifeCycle;
- (void)setNeedDelayInViewLifeCycle:(BOOL)arg1;
- (id)layerId;
- (void)setLayerId:(id)arg1;
- (id)expId;
- (void)setExpId:(id)arg1;
- (unsigned int)respTimeStamp;
- (void)setRespTimeStamp:(unsigned int)arg1;
- (unsigned int)delayInterval;
- (void)setDelayInterval:(unsigned int)arg1;
- (unsigned int)showTimeStamp;
- (void)setShowTimeStamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
