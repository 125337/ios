@interface WNPasteMgr : MMObject <GroupNoticeDownloadExt>
{
    GroupNoticeItem * _downloadingItem; // +0x8
    id /* block */ _downloadCallback; // +0x10
}
+ (id)sharedManager;
+ (void)copy:(id)arg1 sections:(id)arg2 itemLocalId:(int)arg3 fromMessage:(id)arg4 isFromGroupNotice:(BOOL)arg5;
+ (void)tryRemoveRiskDataFromStorageForMsgScene:(id)arg1 msg:(id)arg2;
+ (BOOL)copyFromGroupNotice;
+ (void)resetFileInfoInPasteData;
+ (id)getTempPathWithMd5:(id)arg1 isThumb:(BOOL)arg2 dataFmt:(id)arg3;
+ (void)resetFilePathForMessageInfo:(id)arg1;
+ (id)getDescOfAttachment:(id)arg1;
+ (id)getPasteData;
+ (void)asyncGetPasteData:(id /* block */)arg1 viewController:(id)arg2;
+ (id)getPasteSection;
+ (void)clearPasteData;
+ (BOOL)hasPasteData;
+ (BOOL)hasCopyDataInTemp;
+ (void)tryClearPasteData:(int)arg1;
- (void)downloadPasteDataIfNeed:(id /* block */)arg1;
- (void)onGroupNoticeDownloadItem:(id)arg1 retCode:(int)arg2;
- (id)downloadingItem;
- (void)setDownloadingItem:(id)arg1;
- (id /* block */)downloadCallback;
- (void)setDownloadCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

