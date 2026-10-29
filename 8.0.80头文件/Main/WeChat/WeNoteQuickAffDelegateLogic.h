@interface WeNoteQuickAffDelegateLogic : WeNoteAffDelegateLogic
{
    NSMutableDictionary * _quickAttachmentFavDataByHtmlId; // +0x90
}
- (id)initWithDelegate:(id)arg1;
- (id)addAttachmentNativeItemWith:(id)arg1;
- (void)clearAttachmentCache;
- (id)registeredAttachmentHtmlIdsForSaveNoteAsync;
- (id)favDataFieldForAttachmentId:(id)arg1;
- (id)getFavDataWithAttachmentId:(id)arg1;
- (id)quickAttachmentFavDataByHtmlId;
- (void)setQuickAttachmentFavDataByHtmlId:(id)arg1;
- (void).cxx_destruct;
@end
