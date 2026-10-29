@interface WCFinderRedDotUltraHighPriorityInstance : NSObject <WCTTableCoding>
{
    NSString * _instanceId; // +0x8
    double _updateTime; // +0x10
    double _startTime; // +0x18
    double _expireTime; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)instanceId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_instanceId;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)startTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_startTime;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_expireTime;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (double)updateTime;
- (void)setUpdateTime:(double)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)expireTime;
- (void)setExpireTime:(double)arg1;
- (void).cxx_destruct;
@end
