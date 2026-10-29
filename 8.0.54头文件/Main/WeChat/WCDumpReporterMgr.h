@interface WCDumpReporterMgr : MMRootService <MMServiceProtocol>
{
    NSMutableArray * _uploadedIssueArray; // +0x8
    NSMutableArray * _uploadingIssueArray; // +0x10
}
- (id)init;
- (void)uploadAllDump;
- (void)uploadDumpWithDate:(id)arg1;
- (void)onIPXX:(id)arg1;
- (id)getDataPath;
- (void)asyncUploadFolderData:(id)arg1;
- (void)uploadDumpOnIPXX:(id)arg1;
- (void)handleBeginReportLagIssue:(id)arg1;
- (void)handleReportLagIssue:(id)arg1 success:(BOOL)arg2;
- (id)uploadedIssueArray;
- (void)setUploadedIssueArray:(id)arg1;
- (id)uploadingIssueArray;
- (void)setUploadingIssueArray:(id)arg1;
- (void).cxx_destruct;
@end

