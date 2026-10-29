@interface WCFinderProfileCoverUploadCdnMgr : NSObject <ICdnComMgrExt>
{
    id <WCFinderProfileCoverUploadCdnMgrDelegate> _delegate; // +0x8
    WCFinderProfileCoverUploadTask * _currentTask; // +0x10
}
- (id)init;
- (void)startUploadFinderWithDataItem:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (void).cxx_destruct;
@end

