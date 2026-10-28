@interface FTSTopHitValue : NSObject <PBCoding>
{
    unsigned int _clickScore; // +0x8
    unsigned int _timestamp; // +0xc
    NSString * _key; // +0x10
    NSMutableDictionary * _dicGroupMember; // +0x18
}
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_clickScore;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_dicGroupMember;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)isValid;
- (void)addScore;
- (void)addScore:(int)arg1;
- (void)minusScore;
- (void)minusScore:(int)arg1;
- (long long)compareTopHitValueAscending:(id)arg1;
- (BOOL)isOutOfDate;
- (BOOL)isDisplayAvailable;
- (BOOL)isDisplayAvailable:(int)arg1;
- (unsigned int)getABTestValidDays;
- (unsigned int)getABTestThredshold;
- (id)key;
- (void)setKey:(id)arg1;
- (unsigned int)clickScore;
- (void)setClickScore:(unsigned int)arg1;
- (unsigned int)timestamp;
- (void)setTimestamp:(unsigned int)arg1;
- (id)dicGroupMember;
- (void)setDicGroupMember:(id)arg1;
- (void).cxx_destruct;
@end
