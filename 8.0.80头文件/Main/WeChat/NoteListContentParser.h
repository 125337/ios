@interface NoteListContentParser : NSObject <IFavCdnDownloadMgrExt>
{
    os_unfair_lock_s _stateLock; // +0x8
    id /* block */ _onItemReady; // +0x10
    NSOperationQueue * _parseQueue; // +0x18
    NSMutableArray * _pendingBatches; // +0x20
    NSMutableDictionary * _htmlDownloadSlots; // +0x28
    NSMutableDictionary * _attachmentBackrefs; // +0x30
    NSMutableDictionary * _attachmentItemRefs; // +0x38
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)startBatchWithItems:(id)arg1 hasMore:(BOOL)arg2 readyBlock:(id /* block */)arg3 finishBlock:(id /* block */)arg4;
- (void)refreshItem:(id)arg1;
- (id)_makeResult:(id)arg1 bytes:(id)arg2 previews:(id)arg3;
- (id)_parseSingleItem:(id)arg1;
- (BOOL)_downloadHtmlBlocking:(id)arg1 dataField:(id)arg2;
- (id)_buildPreviewsFromList:(const void *)arg1 item:(id)arg2;
- (void)_registerAttachmentBackref:(id)arg1 localId:(unsigned long long)arg2 attachmentId:(id)arg3 item:(id)arg4;
- (void)_markBatch:(id)arg1 index:(unsigned long long)arg2 result:(id)arg3;
- (void)_finalizeBatchIfReady:(id)arg1;
- (id)_findHtmlDataField:(id)arg1;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (id /* block */)onItemReady;
- (void)setOnItemReady:(id /* block */)arg1;
- (id)parseQueue;
- (void)setParseQueue:(id)arg1;
- (os_unfair_lock_s)stateLock;
- (void)setStateLock:(os_unfair_lock_s)arg1;
- (id)pendingBatches;
- (void)setPendingBatches:(id)arg1;
- (id)htmlDownloadSlots;
- (void)setHtmlDownloadSlots:(id)arg1;
- (id)attachmentBackrefs;
- (void)setAttachmentBackrefs:(id)arg1;
- (id)attachmentItemRefs;
- (void)setAttachmentItemRefs:(id)arg1;
- (void).cxx_destruct;
@end
