@interface WCAlbumForwardFinderUtil : NSObject <WCFacadeExt, WCFinderSnsPostProcessMgrDelegate, WCFinderPostViewControllerDelegate>
{
    id /* block */ _onAllMediaDownloadFinish; // +0x8
    id /* block */ _onConfirmSend; // +0x10
    WCDataItem * _feed; // +0x18
    NSMutableArray * _mediaList; // +0x20
    NSMutableArray * _prepardDownloadMediaInfos; // +0x28
    MMUIViewController * _currentVc; // +0x30
    WCFinderSnsPostProcessMgr * _finderPostMgr; // +0x38
}
+ (id)selectMediaListNotDownloadFinish:(id)arg1;
+ (id)selectMediaListFilePaths:(id)arg1;
+ (long long)mediaListType:(id)arg1;
+ (id)getPostTimeStampWith:(unsigned int)arg1;
+ (id)getSelectedMediaContent:(id)arg1 mediaList:(id)arg2;
- (void)forwardFeed:(id)arg1 currentVc:(id)arg2;
- (void)downloadMediaList:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)callAllDownloadSuccess;
- (void)callSomeDownloadFailed;
- (id)finderPostMgr;
- (void)pushToEditViewController;
- (void)finderPostMgrOnSendMediaWith:(id)arg1;
- (id)finderPostMgrGetSelectedMediaContent;
- (void)finderPostMgrCancelPostProcess;
- (void)postViewControllerStartUpload;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postViewControllerDidSaveDraft;
- (id /* block */)onAllMediaDownloadFinish;
- (void)setOnAllMediaDownloadFinish:(id /* block */)arg1;
- (id /* block */)onConfirmSend;
- (void)setOnConfirmSend:(id /* block */)arg1;
- (id)feed;
- (void)setFeed:(id)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (id)prepardDownloadMediaInfos;
- (void)setPrepardDownloadMediaInfos:(id)arg1;
- (id)currentVc;
- (void)setCurrentVc:(id)arg1;
- (void)setFinderPostMgr:(id)arg1;
- (void).cxx_destruct;
@end
