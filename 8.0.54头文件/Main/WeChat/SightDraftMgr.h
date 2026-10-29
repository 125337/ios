@interface SightDraftMgr : MMObject
{
    NSMutableArray * m_draftList; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)addDraft:(id)arg1;
- (void)insertDraft:(id)arg1;
- (void)removeDraft:(id)arg1;
- (void)removeDraft:(id)arg1 needWriteIndexFile:(BOOL)arg2;
- (id)getDraftList;
- (void).cxx_destruct;
@end

