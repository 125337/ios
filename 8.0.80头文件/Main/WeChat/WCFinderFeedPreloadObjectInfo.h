@interface WCFinderFeedPreloadObjectInfo : NSObject <WCTTableCoding>
{
    NSString * _tid; // +0x8
    double _interestFactor; // +0x10
    unsigned long long _scene; // +0x18
    FinderPreloadObjectInfo * _objectInfo; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)interestFactor;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_interestFactor;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_scene;
+ (const void *)objectInfo;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_objectInfo;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
- (id)initWithObjectInfo:(id)arg1;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (double)interestFactor;
- (void)setInterestFactor:(double)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)objectInfo;
- (void)setObjectInfo:(id)arg1;
- (void).cxx_destruct;
@end
