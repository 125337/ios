@interface DataReportNewUBACacheModel : NSObject <PBCoding, NSCopying, WCTTableCoding>
{
    BOOL _isKeyView; // +0x8
    unsigned long long _cacheTime; // +0x10
    NSString * _reportStr; // +0x18
}
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_reportStr;
+ (void)PBArrayAdd_isKeyView;
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
+ (const void *)isKeyView;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_isKeyView;
- (id)getPBPropertyTable;
- (id)initWithTime:(unsigned long long)arg1 withStr:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toString;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (id)reportStr;
- (void)setReportStr:(id)arg1;
- (BOOL)isKeyView;
- (void)setIsKeyView:(BOOL)arg1;
- (void).cxx_destruct;
@end
