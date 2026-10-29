@interface WCTextSearchEntity : WCSearchEntity
{
    NSString * _queryText; // +0x18
    WCFingertipSearchReportModel * _reporter; // +0x20
    NSString * _exposedFingerWord; // +0x28
    NSString * _matchedFingerWord; // +0x30
}
- (id)initWithText:(id)arg1;
- (void)setReporter:(id)arg1;
- (id)queryText;
- (void)setQueryText:(id)arg1;
- (id)reporter;
- (id)exposedFingerWord;
- (void)setExposedFingerWord:(id)arg1;
- (id)matchedFingerWord;
- (void)setMatchedFingerWord:(id)arg1;
- (void).cxx_destruct;
@end
