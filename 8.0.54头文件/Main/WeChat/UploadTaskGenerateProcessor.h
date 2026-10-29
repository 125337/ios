@interface UploadTaskGenerateProcessor : UploadStateProcessor
{
    CMessageWrap * _msgWrap; // +0x8
    NSMutableArray * _uploadTaskList; // +0x10
}
- (id)initWithContext:(id)arg1;
- (void)start;
- (id)getStateName;
- (void)generateUploadTaskWithDataList:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)uploadTaskList;
- (void)setUploadTaskList:(id)arg1;
- (void).cxx_destruct;
@end

