@interface WCFinderFeedFavListObject : NSObject
{
    NSString * _tid; // +0x8
    double _cacheTime; // +0x10
    WCFinderFeedFavListInfoArray * _favInfoFirstPageArray; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)favInfoFirstPageArray;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_favInfoFirstPageArray;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (double)cacheTime;
- (void)setCacheTime:(double)arg1;
- (id)favInfoFirstPageArray;
- (void)setFavInfoFirstPageArray:(id)arg1;
- (void).cxx_destruct;
@end
