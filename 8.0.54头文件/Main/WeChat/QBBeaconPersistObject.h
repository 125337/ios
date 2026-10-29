@interface QBBeaconPersistObject : QBBeaconEncodeObject <QBBeaconPersistEncoding>
{
    long long dbid; // +0x8
    long long encLength; // +0x10
    long long md5; // +0x18
    long long time; // +0x20
    int priority; // +0x28
    int type; // +0x2c
    int dcount; // +0x30
}
- (id)init;
- (long long)dbid;
- (void)setDbid:(long long)arg1;
- (long long)encLength;
- (void)setEncLength:(long long)arg1;
- (int)priority;
- (void)setPriority:(int)arg1;
- (long long)time;
- (void)setTime:(long long)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)dcount;
- (void)setDcount:(int)arg1;
- (long long)md5;
- (void)setMd5:(long long)arg1;
@end

