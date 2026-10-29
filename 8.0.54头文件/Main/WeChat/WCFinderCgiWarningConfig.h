@interface WCFinderCgiWarningConfig : NSObject <PBCoding>
{
    long long _cgiNumber; // +0x8
    long long _failCount; // +0x10
    long long _firstUpdateTimeStamp; // +0x18
}
+ (void)PBArrayAdd_cgiNumber;
+ (void)PBArrayAdd_failCount;
+ (void)PBArrayAdd_firstUpdateTimeStamp;
+ (void)initialize;
+ (long long)genExpireDurationByCgiNumber:(long long)arg1;
+ (long long)genFailLimitByCgiNumber:(long long)arg1;
- (id)getPBPropertyTable;
- (BOOL)isExpired;
- (void)resetValue;
- (BOOL)exceedLimit;
- (long long)cgiNumber;
- (void)setCgiNumber:(long long)arg1;
- (long long)failCount;
- (void)setFailCount:(long long)arg1;
- (long long)firstUpdateTimeStamp;
- (void)setFirstUpdateTimeStamp:(long long)arg1;
@end

