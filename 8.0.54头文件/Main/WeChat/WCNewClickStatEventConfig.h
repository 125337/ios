@interface WCNewClickStatEventConfig : MMObject <PBCoding>
{
    unsigned int _eventID; // +0x8
    unsigned int _expireTime; // +0xc
    unsigned int _logid; // +0x10
    NSString * _eventName; // +0x18
    double _sampleRate; // +0x20
    NSString * _regType; // +0x28
    NSArray * _arrPageConfig; // +0x30
    NSArray * _arrSpecialPVPageConfig; // +0x38
}
+ (void)PBArrayAdd_eventID;
+ (void)PBArrayAdd_eventName;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_sampleRate;
+ (void)PBArrayAdd_logid;
+ (void)PBArrayAdd_regType;
+ (void)PBArrayAdd_arrPageConfig;
+ (void)PBArrayAdd_arrSpecialPVPageConfig;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (double)sampleRate;
- (void)setSampleRate:(double)arg1;
- (unsigned int)logid;
- (void)setLogid:(unsigned int)arg1;
- (id)regType;
- (void)setRegType:(id)arg1;
- (id)arrPageConfig;
- (void)setArrPageConfig:(id)arg1;
- (id)arrSpecialPVPageConfig;
- (void)setArrSpecialPVPageConfig:(id)arg1;
- (void).cxx_destruct;
@end

