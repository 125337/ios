@interface MatrixIssue : NSObject
{
    int _reportType; // +0x8
    NSString * _issueTag; // +0x10
    NSString * _issueID; // +0x18
    unsigned long long _dataType; // +0x20
    NSString * _filePath; // +0x28
    NSData * _issueData; // +0x30
    NSDictionary * _customInfo; // +0x38
}
- (id)description;
- (id)issueTag;
- (void)setIssueTag:(id)arg1;
- (id)issueID;
- (void)setIssueID:(id)arg1;
- (unsigned long long)dataType;
- (void)setDataType:(unsigned long long)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)issueData;
- (void)setIssueData:(id)arg1;
- (int)reportType;
- (void)setReportType:(int)arg1;
- (id)customInfo;
- (void)setCustomInfo:(id)arg1;
- (void).cxx_destruct;
@end

