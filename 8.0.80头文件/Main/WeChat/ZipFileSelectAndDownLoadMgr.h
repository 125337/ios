@interface ZipFileSelectAndDownLoadMgr : NSObject <UIDocumentPickerDelegate, UIDocumentBrowserViewControllerDelegate>
{
    NSDictionary * _downloadFileInfo; // +0x8
    id /* block */ _progressBlk; // +0x10
    id /* block */ _completeBlk; // +0x18
}
- (void)selectPathAndDownLoad:(id)arg1 fromSourceVC:(id)arg2 progress:(id /* block */)arg3 complete:(id /* block */)arg4;
- (void)startCdnDownloadWithFileInfo:(id)arg1 path:(id)arg2 progress:(id /* block */)arg3 complete:(id /* block */)arg4;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)handleUrl:(id)arg1 folderPath:(id)arg2;
- (id)downloadFileInfo;
- (void)setDownloadFileInfo:(id)arg1;
- (id /* block */)progressBlk;
- (void)setProgressBlk:(id /* block */)arg1;
- (id /* block */)completeBlk;
- (void)setCompleteBlk:(id /* block */)arg1;
- (void).cxx_destruct;
@end
