@interface WCFinderAttachmentList : NSObject <WCTTableCoding, PBCoding>
{
    NSString * _tid; // +0x8
    unsigned long long _cacheTime; // +0x10
    WCFinderAttachmentListAttachmentsMutableArray * _attachments; // +0x18
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_attachments;
+ (void)initialize;
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
+ (const void *)attachments;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_attachments;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
- (id)getPBPropertyTable;
- (id)initWithDataItemTid:(id)arg1 finderAttachmentList:(id)arg2;
- (id)initWithDataItemTid:(id)arg1 attachments:(id)arg2;
- (id)description;
- (id)genAttachmentList;
- (void)updateLongVideoAttachmentWith:(id)arg1;
- (id)getLongVideoAttachment;
- (BOOL)removeLongVideoAttachment;
- (id)getMiniAppShopAttachment;
- (BOOL)clearMiniAppShopAttachment;
- (id)getJumpInfoAttachmentByBusinessType:(int)arg1;
- (BOOL)clearJumpInfoAttachmentByBusinessType:(int)arg1;
- (id)getJumpInfoAttachmentByBusinessCategory:(int)arg1;
- (BOOL)clearJumpInfoAttachmentByBusinessCategory:(int)arg1;
- (id)fetchAttachementWithBusinesssType:(int)arg1;
- (BOOL)removeFinderAttachmentWithBusinessType:(int)arg1;
- (id)fetchAttachementWithBusinesssCategory:(int)arg1;
- (BOOL)removeFinderAttachmentWithBusinessCategory:(int)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (id)attachments;
- (void)setAttachments:(id)arg1;
- (void).cxx_destruct;
@end
