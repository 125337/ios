@interface BTVideoAutoPlayInfo : MMObject <PBCoding>
{
    double _lastPlayedTime; // +0x8
    double _lastPlayedTimeExpiredTime; // +0x10
}
+ (void)PBArrayAdd_lastPlayedTime;
+ (void)PBArrayAdd_lastPlayedTimeExpiredTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (double)lastPlayedTime;
- (void)setLastPlayedTime:(double)arg1;
- (double)lastPlayedTimeExpiredTime;
- (void)setLastPlayedTimeExpiredTime:(double)arg1;
@end
