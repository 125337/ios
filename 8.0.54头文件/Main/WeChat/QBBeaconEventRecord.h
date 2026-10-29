@interface QBBeaconEventRecord : QBBeaconPersistObject <NSMutableCopying>
{
    BOOL isSuccess; // +0x34
    BOOL isRealEvent; // +0x35
    int eventType; // +0x38
    NSString * apn; // +0x40
    NSString * srcIp; // +0x48
    NSString * eventName; // +0x50
    NSString * eventValue; // +0x58
    long long eventTime; // +0x60
    long long elapse; // +0x68
    long long packageSize; // +0x70
    NSMutableDictionary * params; // +0x78
}
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (id)createWUPModel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)apn;
- (void)setApn:(id)arg1;
- (id)srcIp;
- (void)setSrcIp:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)eventValue;
- (void)setEventValue:(id)arg1;
- (long long)eventTime;
- (void)setEventTime:(long long)arg1;
- (int)eventType;
- (void)setEventType:(int)arg1;
- (long long)elapse;
- (void)setElapse:(long long)arg1;
- (long long)packageSize;
- (void)setPackageSize:(long long)arg1;
- (BOOL)isSuccess;
- (void)setIsSuccess:(BOOL)arg1;
- (BOOL)isRealEvent;
- (void)setIsRealEvent:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
@end

