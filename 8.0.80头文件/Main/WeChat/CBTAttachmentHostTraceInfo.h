@interface CBTAttachmentHostTraceInfo : NSObject
{
    BOOL _imagePagingForceCloudHistory; // +0x8
    int _messageLocalId; // +0xc
    long long _messageSvrId; // +0x10
    unsigned long long _messageCreateTime; // +0x18
    NSString * _traceMsgid; // +0x20
    long long _messageDialogueId; // +0x28
    NSString * _reportVoipSessionID; // +0x30
    long long _reportEnterScene; // +0x38
    unsigned long long _reportRefQueryId; // +0x40
    long long _viewSource; // +0x48
}
- (BOOL)imagePagingForceCloudHistory;
- (void)setImagePagingForceCloudHistory:(BOOL)arg1;
- (long long)messageSvrId;
- (void)setMessageSvrId:(long long)arg1;
- (unsigned long long)messageCreateTime;
- (void)setMessageCreateTime:(unsigned long long)arg1;
- (int)messageLocalId;
- (void)setMessageLocalId:(int)arg1;
- (id)traceMsgid;
- (void)setTraceMsgid:(id)arg1;
- (long long)messageDialogueId;
- (void)setMessageDialogueId:(long long)arg1;
- (id)reportVoipSessionID;
- (void)setReportVoipSessionID:(id)arg1;
- (long long)reportEnterScene;
- (void)setReportEnterScene:(long long)arg1;
- (unsigned long long)reportRefQueryId;
- (void)setReportRefQueryId:(unsigned long long)arg1;
- (long long)viewSource;
- (void)setViewSource:(long long)arg1;
- (void).cxx_destruct;
@end
