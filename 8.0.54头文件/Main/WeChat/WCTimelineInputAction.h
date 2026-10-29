@interface WCTimelineInputAction : NSObject <NSCoding, PBCoding>
{
    BOOL _isFinished; // +0x8
    long long _lastInputLength; // +0x10
    NSString * _changeHistoryList; // +0x18
    NSString * _commitContent; // +0x20
    long long _cf; // +0x28
    NSString * _inLenList; // +0x30
    NSString * _reportDataXml; // +0x38
}
+ (void)PBArrayAdd_lastInputLength;
+ (void)PBArrayAdd_changeHistoryList;
+ (void)PBArrayAdd_commitContent;
+ (void)PBArrayAdd_cf;
+ (void)PBArrayAdd_inLenList;
+ (void)PBArrayAdd_reportDataXml;
+ (void)PBArrayAdd_isFinished;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (long long)lastInputLength;
- (void)setLastInputLength:(long long)arg1;
- (id)changeHistoryList;
- (void)setChangeHistoryList:(id)arg1;
- (id)commitContent;
- (void)setCommitContent:(id)arg1;
- (long long)cf;
- (void)setCf:(long long)arg1;
- (id)inLenList;
- (void)setInLenList:(id)arg1;
- (id)reportDataXml;
- (void)setReportDataXml:(id)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end

