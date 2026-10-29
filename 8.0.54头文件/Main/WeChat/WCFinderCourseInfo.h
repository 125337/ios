@interface WCFinderCourseInfo : NSObject <WCTTableCoding>
{
    BOOL _purchased; // +0x8
    NSString * _courseIDKey; // +0x10
    FinderCourseInfo * _courseInfo; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)courseIDKey;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_courseIDKey;
+ (const void *)courseInfo;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_courseInfo;
+ (const void *)purchased;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_purchased;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (id)finderCourseFromCourse:(id)arg1 purchased:(BOOL)arg2;
- (id)description;
- (id)courseIDKey;
- (void)setCourseIDKey:(id)arg1;
- (id)courseInfo;
- (void)setCourseInfo:(id)arg1;
- (BOOL)purchased;
- (void)setPurchased:(BOOL)arg1;
- (void).cxx_destruct;
@end

