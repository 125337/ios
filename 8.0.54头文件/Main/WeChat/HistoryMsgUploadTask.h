@interface HistoryMsgUploadTask : NSObject <UploadImageCDNMgrDelegate, UploadVideoCDNMgrDelegate, RecordUploadCDNMgrDelegate, OpenUploadCDNMgrDelegate>
{
    CMessageWrap * _msgWrap; // +0x8
    id <HistoryMsgUploadTaskDelegate> _delegate; // +0x10
    UploadImageCDNMgr * _uploadImageCdnMgr; // +0x18
    VideoUploadUnifyMgr * _uploadVideoCdnMgr; // +0x20
    RecordUploadCDNMgr * _recordUploadCDNMgr; // +0x28
    MultiMediaUploadUnifyMgr * _multiMediaUploadUnifyMgr; // +0x30
    OpenUploadCDNMgr * _openUploadCDNMgr; // +0x38
    OpenUploadVideoCDNMgr * _openUploadVideoCDNMgr; // +0x40
}
- (id)initWithDelegate:(id)arg1 MsgWrap:(id)arg2;
- (id)genOpenUploadQueuePath;
- (id)genImageMsgWrap:(id)arg1;
- (id)uploadImageCdnMgr;
- (id)uploadVideoCdnMgr;
- (id)recordUploadCDNMgr;
- (id)multiMediaUploadUnifyMgr;
- (id)openUploadCDNMgr;
- (id)openUploadVideoCDNMgr;
- (void)startUpload;
- (void)stopUpload;
- (void)OnUploadMsgDataSuccess:(id)arg1;
- (void)OnUploadRecordMsgDataSuccess:(id)arg1;
- (void)OnUploadMsgDataFail:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setUploadImageCdnMgr:(id)arg1;
- (void)setUploadVideoCdnMgr:(id)arg1;
- (void)setRecordUploadCDNMgr:(id)arg1;
- (void)setMultiMediaUploadUnifyMgr:(id)arg1;
- (void)setOpenUploadCDNMgr:(id)arg1;
- (void)setOpenUploadVideoCDNMgr:(id)arg1;
- (void).cxx_destruct;
@end

