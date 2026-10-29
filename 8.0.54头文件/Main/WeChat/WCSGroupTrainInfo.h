@interface WCSGroupTrainInfo : NSObject <WCTTableCoding>
{
    unsigned int _lastSearchTime; // +0x8
    NSString * _gId; // +0x10
    NSData * _info; // +0x18
    NSMutableArray * _arrClicks; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)gId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_gId;
+ (const void *)info;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_info;
+ (const void *)lastSearchTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_lastSearchTime;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (id)arrClicks;
- (id)description;
- (BOOL)addOneClick:(int)arg1;
- (unsigned int)getClickCountForRecentDays:(unsigned int)arg1 nowDayOffset:(int)arg2;
- (id)gId;
- (void)setGId:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (unsigned int)lastSearchTime;
- (void)setLastSearchTime:(unsigned int)arg1;
- (void)setArrClicks:(id)arg1;
- (void).cxx_destruct;
@end

