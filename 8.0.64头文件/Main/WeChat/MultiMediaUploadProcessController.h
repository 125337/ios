@interface MultiMediaUploadProcessController : MMObject <UploadStateProcessorDelegate>
{
    BOOL _bJustUploadDataWithoutMD5Hit; // +0x8
    BOOL _isStopped; // +0x9
    NSString * _identifier; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    id <MultiMediaUploadProcessControllerDelegate> _delegate; // +0x20
    UploadStateProcessor * _state; // +0x28
    NSMutableArray * _uploadTaskList; // +0x30
}
- (id)initWithMsgWrap:(id)arg1;
- (void)startTask;
- (void)stopTask;
- (id)getMediaWrap;
- (id)getDataList;
- (id)getUploadTaskList;
- (void)updateUploadTaskList:(id)arg1;
- (void)changeToState:(id)arg1;
- (void)onStateProcessFinished:(BOOL)arg1;
- (void)onHistoryRecordDataUploadFinishWithCdnInfo:(id)arg1 errorMsg:(id)arg2;
- (void)updateMediaWrapWithBitset:(int)arg1;
- (void)updateUploadProgressWithTotal:(unsigned long long)arg1 remain:(unsigned long long)arg2;
- (void)onMediaDataUploadSuccess:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)uploadTaskList;
- (void)setUploadTaskList:(id)arg1;
- (void).cxx_destruct;
@end
