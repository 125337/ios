@interface MMFinderLiveTrialRecord : NSObject <WCTTableCoding>
{
    unsigned int _remainTime; // +0x8
    unsigned int _trialLimitTime; // +0xc
    unsigned int _trialEndTime; // +0x10
    unsigned long long _liveId; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_liveId;
+ (const void *)remainTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_remainTime;
+ (const void *)trialEndTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_trialEndTime;
+ (const void *)trialLimitTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_trialLimitTime;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)remainTime;
- (void)setRemainTime:(unsigned int)arg1;
- (unsigned int)trialLimitTime;
- (void)setTrialLimitTime:(unsigned int)arg1;
- (unsigned int)trialEndTime;
- (void)setTrialEndTime:(unsigned int)arg1;
@end
