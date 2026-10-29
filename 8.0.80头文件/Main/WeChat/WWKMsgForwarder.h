@interface WWKMsgForwarder : NSObject <HistoryMsgUploadMgrDelegate, MMTipsViewControllerDelegate>
{
    BOOL _isSplitForward; // +0x8
    long long _appType; // +0x10
    id <WWKMsgForwarderDelegate> _delegate; // +0x18
    NSDictionary * _reportParams; // +0x20
    HistoryMsgUploadMgr * _uploadMgr; // +0x28
    NSMutableArray * _arrForwardWxworkMsg; // +0x30
    NSArray * _arrForwardMsg; // +0x38
}
- (id)init;
- (BOOL)shouldSendByBufferRecursiveForMsg:(id)arg1;
- (BOOL)shouldSendByBufferForMsg:(id)arg1;
- (BOOL)shouldSendByBufferForData:(id)arg1 recursiveCheck:(BOOL)arg2;
- (void)uploadMsgListToCdn:(id)arg1;
- (void)onUploadDataFail:(id)arg1;
- (void)onUploadMsgMediaFinished:(id)arg1;
- (void)sendMsgListByBuffer:(id)arg1;
- (id)getViewController;
- (void)sendSingleMsg:(id)arg1;
- (void)sendSingleWeAppMsg:(id)arg1 withImg:(id)arg2;
- (id)convertMsgList2AttachmentList:(id)arg1;
- (void)sendMultiMsg:(id)arg1 split:(BOOL)arg2;
- (void)sendAttachments:(id)arg1 withEncryptData:(id)arg2;
- (void)sendAttachment:(id)arg1;
- (id)convertMsg2ForwardWxworkMsg:(id)arg1 clientMsgId:(id)arg2;
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
- (BOOL)isRecordDataFileMissing:(id)arg1;
- (id)buildUndownloadFallbackTextAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgAttchmentFromRecordDataField:(id)arg1;
- (id)buildMsgTextAttachmentFromNotSupportRecordDataField:(id)arg1;
- (id)buildMsgTextAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgFileAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgImageAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgLinkAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgVideoAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgLocationAttachmentFromRecordDataField:(id)arg1;
- (id)MsgWeAppAttachmentFromRecordDataField:(id)arg1;
- (void)onClickEmptyBackgroundViewToHideTips:(id)arg1;
- (long long)appType;
- (void)setAppType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (id)uploadMgr;
- (void)setUploadMgr:(id)arg1;
- (id)arrForwardWxworkMsg;
- (void)setArrForwardWxworkMsg:(id)arg1;
- (id)arrForwardMsg;
- (void)setArrForwardMsg:(id)arg1;
- (BOOL)isSplitForward;
- (void)setIsSplitForward:(BOOL)arg1;
- (void).cxx_destruct;
@end
