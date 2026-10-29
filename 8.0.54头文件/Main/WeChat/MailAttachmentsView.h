@interface MailAttachmentsView : MMUIButton <IQQMailExt>
{
    MMUIActivityIndicatorView * m_loadingView; // +0x8
    UILabel * m_labelName; // +0x10
    UILabel * m_labelPercent; // +0x18
    UILabel * m_labelUploadFail; // +0x20
    UIButton * m_btnResend; // +0x28
    unsigned int m_uiPercent; // +0x30
    id <MailAttachmentsViewDelegate> m_delegate; // +0x38
    MailAttachment * m_mailAttachment; // +0x40
}
- (void)initData;
- (BOOL)isUploadSuccess;
- (void)setUploadFailStatus;
- (void)setUploadSuccessStatus;
- (void)updateUploadPercent:(unsigned int)arg1;
- (void)setUploadingStatus;
- (void)updateUploadPercentForNewQQMail:(unsigned int)arg1;
- (void)setUploadSuccessStatusForNewQQMail:(unsigned int)arg1;
- (void)OnResend:(id)arg1;
- (void)initView;
- (void)adjustNameLabel;
- (unsigned long long)attachmentSize;
- (void)setDataID:(id)arg1;
- (void)setData:(id)arg1;
- (id)getData;
- (id)getDataID;
- (id)getDataName;
- (id)initWithMailAttachment:(id)arg1 frame:(CGRect)arg2;
- (void)startUploadData;
- (void)cancelUpload;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

