@interface DataReportNewUBACacheModel : NSObject <PBCoding, NSCopying, WCTTableCoding>
{
    unsigned long long _cacheTime; // +0x8
    NSString * _reportStr; // +0x10
}
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_reportStr;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)reportStr;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_reportStr;
- (id)getPBPropertyTable;
- (id)initWithTime:(unsigned long long)arg1 withStr:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toString;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (id)reportStr;
- (void)setReportStr:(id)arg1;
- (void).cxx_destruct;
@end

