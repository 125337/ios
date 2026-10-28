@interface WCFinderFeedLikeBufferModel : NSObject <WCTTableCoding>
{
    int _scene; // +0x8
    NSString * _tid; // +0x10
    NSData * _likeBuffer; // +0x18
    long long _incFriendLikeCount; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)likeBuffer;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_likeBuffer;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_scene;
+ (const void *)incFriendLikeCount;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_incFriendLikeCount;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)likeBuffer;
- (void)setLikeBuffer:(id)arg1;
- (long long)incFriendLikeCount;
- (void)setIncFriendLikeCount:(long long)arg1;
- (void).cxx_destruct;
@end
