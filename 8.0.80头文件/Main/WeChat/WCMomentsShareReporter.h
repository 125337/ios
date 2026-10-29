@interface WCMomentsShareReporter : NSObject
{
    WCMomentsPostShareBaseViewModel * _model; // +0x8
}
- (id)initWithModel:(id)arg1;
- (id)viewReportID;
- (id)genCommonReportParams;
- (long long)hasPoi;
- (unsigned long long)picCnt;
- (id)genReportParamsWithAction:(long long)arg1;
- (void)reportCustomWithAction:(long long)arg1 withCustomInfo:(id)arg2;
- (id)model;
- (void).cxx_destruct;
@end
