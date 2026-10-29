@interface WCFinderLocalDraft : NSObject <WCFinderDraftProtocol, WCTTableCoding>
{
    unsigned int _estimatedAigcWaitTime; // +0x8
    NSString * _draftId; // +0x10
    double _createTime; // +0x18
    unsigned long long _draftBusinessType; // +0x20
    unsigned long long _draftTaskState; // +0x28
    MJShootComposingDraft * _draftComposing; // +0x30
    double _aigcTaskCompletionProgress; // +0x38
    NSData * _aigcContextData; // +0x40
    UIImage * _coverImage; // +0x48
    UIImage * _coverImageFromDisk; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)draftId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_draftId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)draftComposing;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_draftComposing;
+ (const void *)draftBusinessType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_draftBusinessType;
+ (const void *)draftTaskState;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_draftTaskState;
+ (const void *)aigcTaskCompletionProgress;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_aigcTaskCompletionProgress;
+ (const void *)estimatedAigcWaitTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_estimatedAigcWaitTime;
+ (const void *)aigcContextData;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_aigcContextData;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (id)draftWithCover:(id)arg1 draftID:(id)arg2 createTime:(double)arg3 draftBusinessType:(unsigned long long)arg4;
- (id)initWithCover:(id)arg1 draftID:(id)arg2 createTime:(double)arg3 draftBusinessType:(unsigned long long)arg4;
- (id)getDraftImage;
- (id)getCoverSavePath;
- (void)asyncSaveCoverToDiskWithCompletion:(id /* block */)arg1;
- (void)asyncDeleteCoverFromDiskWithCompletion:(id /* block */)arg1;
- (unsigned long long)draftType;
- (unsigned long long)localDraftBusiness;
- (id)draftId;
- (void)setDraftId:(id)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (unsigned long long)draftBusinessType;
- (void)setDraftBusinessType:(unsigned long long)arg1;
- (unsigned long long)draftTaskState;
- (void)setDraftTaskState:(unsigned long long)arg1;
- (id)draftComposing;
- (void)setDraftComposing:(id)arg1;
- (double)aigcTaskCompletionProgress;
- (void)setAigcTaskCompletionProgress:(double)arg1;
- (unsigned int)estimatedAigcWaitTime;
- (void)setEstimatedAigcWaitTime:(unsigned int)arg1;
- (id)aigcContextData;
- (void)setAigcContextData:(id)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (id)coverImageFromDisk;
- (void)setCoverImageFromDisk:(id)arg1;
- (void).cxx_destruct;
@end
