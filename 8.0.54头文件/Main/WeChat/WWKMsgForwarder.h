@interface WWKMsgForwarder : NSObject <HistoryMsgUploadMgrDelegate>
{
    long long _appType; // +0x8
    id <WWKMsgForwarderDelegate> _delegate; // +0x10
    HistoryMsgUploadMgr * _uploadMgr; // +0x18
}
- (id)init;
- (BOOL)shouldSendByBuffer:(id)arg1;
- (void)uploadMsgListToCdn:(id)arg1;
- (void)onUploadDataFail:(id)arg1;
- (void)onUploadMsgMediaFinished:(id)arg1;
- (void)sendMsgListByBuffer:(id)arg1;
- (void)sendSingleMsg:(id)arg1;
- (void)sendSingleWeAppMsg:(id)arg1 withImg:(id)arg2;
- (void)sendMultiMsg:(id)arg1 split:(BOOL)arg2;
- (id)buildMsgAttchmentFromMsgWrap:(id)arg1;
- (id)buildMusicAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgTextAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgAppTextAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgFileAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgImageAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgLinkAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgVideoAttachmentFromMsgWrap:(id)arg1;
- (id)builddMsgWeAppAttachmentFromMsgWrap:(id)arg1;
- (id)builddMsgOpenSDKWeAppAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgLocationAttachmentFromMsgWrap:(id)arg1;
- (id)getAppImgData:(id)arg1;
- (id)buildMsgAttchmentFromRecordDataFieldAr:(id)arg1 andRecordTitle:(id)arg2;
- (id)buildMsgAttchmentFromRecordDataField:(id)arg1;
- (id)buildMsgTextAttachmentFromNotSupportRecordDataField:(id)arg1;
- (id)buildMsgTextAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgFileAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgImageAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgLinkAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgVideoAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgLocationAttachmentFromRecordDataField:(id)arg1;
- (id)MsgWeAppAttachmentFromRecordDataField:(id)arg1;
- (long long)appType;
- (void)setAppType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)uploadMgr;
- (void)setUploadMgr:(id)arg1;
- (void).cxx_destruct;
@end

