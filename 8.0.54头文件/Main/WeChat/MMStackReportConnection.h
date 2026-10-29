@interface MMStackReportConnection : NSObject <IMatrixCustomIssueExt>
{
    id <MMStackReportConnectionDelegate> _delegate; // +0x8
    NSMutableArray * _uploadedCustomIssue; // +0x10
    NSObject<OS_dispatch_queue> * _reportQueue; // +0x18
}
- (id)init;
- (void)stackReportWithData:(id)arg1 reportType:(unsigned long long)arg2;
- (void)stackReportDict:(id)arg1 reportType:(unsigned long long)arg2;
- (void)onCustomIssue:(id)arg1 uploadComplete:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)uploadedCustomIssue;
- (void)setUploadedCustomIssue:(id)arg1;
- (id)reportQueue;
- (void)setReportQueue:(id)arg1;
- (void).cxx_destruct;
@end

