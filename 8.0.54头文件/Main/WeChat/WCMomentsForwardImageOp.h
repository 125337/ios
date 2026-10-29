@interface WCMomentsForwardImageOp : WCMomentsForwardBaseOp <WCFacadeExt>
- (BOOL)startForwardToCustomContact:(id)arg1;
- (void)updateMessageWrap;
- (void)subscribeImageDownload;
- (void)startDownloadImage;
- (id)getImageFromCache:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)OnForwardMessageFailUpdate:(id)arg1;
@end

