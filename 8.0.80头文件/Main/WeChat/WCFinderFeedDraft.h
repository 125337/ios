@interface WCFinderFeedDraft : NSObject <WCTTableCoding>
{
    BOOL _isNoServerDraft; // +0x8
    BOOL _cloudDraft; // +0x9
    int _objectType; // +0xc
    NSString * _draftId; // +0x10
    unsigned long long _draftSource; // +0x18
    WCFinderPostSessionModel * _postSession; // +0x20
    double _createTime; // +0x28
    WCFinderEventModel * _eventInfo; // +0x30
    NSString * _username; // +0x38
    WCFinderEditTextWidgetStateArray * _coverTextWidgetState; // +0x40
    WCFinderDraftUploadProgress * _progress; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)draftId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_draftId;
+ (const void *)objectType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_objectType;
+ (const void *)isNoServerDraft;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_isNoServerDraft;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)cloudDraft;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_cloudDraft;
+ (const void *)eventInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_eventInfo;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_username;
+ (const void *)postSession;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_postSession;
+ (const void *)coverTextWidgetState;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_coverTextWidgetState;
+ (const void *)draftSource;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_draftSource;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
- (id)init;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (long long)compareWithSorttime:(id)arg1;
- (BOOL)isModifyDraft;
- (id)draftId;
- (void)setDraftId:(id)arg1;
- (int)objectType;
- (void)setObjectType:(int)arg1;
- (unsigned long long)draftSource;
- (void)setDraftSource:(unsigned long long)arg1;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (BOOL)isNoServerDraft;
- (void)setIsNoServerDraft:(BOOL)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (BOOL)cloudDraft;
- (void)setCloudDraft:(BOOL)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)coverTextWidgetState;
- (void)setCoverTextWidgetState:(id)arg1;
- (id)progress;
- (void)setProgress:(id)arg1;
- (void).cxx_destruct;
@end
