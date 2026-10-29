@interface MMTextStateMediaMgr : MMUserService <MMTextStateMediaUploadCdnMgrDelegate, MMServiceProtocol>
{
    MMTextStateMediaDataPB * m_textStateMediaData; // +0x8
    MMTextStateMediaDownloadVideoCdnMgr * _downloadVideoCdnMgr; // +0x10
    MMTextStateMediaDownloadImageCdnMgr * _downloadImageCdnMgr; // +0x18
    MMTextStateMediaUploadCdnMgr * _uploadMediaCdnMgr; // +0x20
}
- (void)onServiceInit;
- (void)initData;
- (id)genTextStateTid:(id)arg1 createTime:(unsigned int)arg2;
- (id)genTextStateTid:(id)arg1 createTime:(unsigned int)arg2 modifyTime:(unsigned int)arg3;
- (id)downloadVideoCdnMgr;
- (id)downloadImageCdnMgr;
- (id)uploadMediaCdnMgr;
- (void)startUploadWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 tid:(id)arg4;
- (void)startUploadImageMedia:(id)arg1 tid:(id)arg2;
- (void)startUploadLivePhotoMedia:(id)arg1 tid:(id)arg2;
- (void)retryUploadMedia;
- (void)resetAndTryUploadTaskInfo;
- (void)StartPreloadImageWithItems:(id)arg1 isThumb:(BOOL)arg2;
- (void)StartDownloadImageWithMediaItem:(id)arg1 isThumb:(BOOL)arg2;
- (void)StartDownloadImageWithMediaItem:(id)arg1 Priority:(BOOL)arg2 isThumb:(BOOL)arg3;
- (void)StartVideoPreloadWithItems:(id)arg1;
- (void)StartVideoDownloadWithMediaWrap:(id)arg1;
- (BOOL)StopVideoDownloadWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)IsStreamDownloadingWithMediaItem:(id)arg1;
- (void)saveTextStateMediaUploadTaskInfo:(id)arg1;
- (void)setCurrentTextStateMediaUploadTaskInfoPublishType:(unsigned int)arg1;
- (id)p_getTextStateMediaDataFilePath;
- (void)p_saveTextStateMediaToDataFileInternal;
- (void)p_loadTextStateMediaInternal;
- (void)didTextStateMediaUploadSuccess:(id)arg1;
- (void)didTextStateMediaUploadFail:(id)arg1;
- (void)setDownloadVideoCdnMgr:(id)arg1;
- (void)setDownloadImageCdnMgr:(id)arg1;
- (void)setUploadMediaCdnMgr:(id)arg1;
- (void).cxx_destruct;
@end

