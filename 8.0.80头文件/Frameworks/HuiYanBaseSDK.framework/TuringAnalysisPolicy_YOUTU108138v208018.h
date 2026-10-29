@interface TuringAnalysisPolicy_YOUTU108138v208018 : NSObject
{
    UIView * _associatedView; // +0x8
    double _motionSamplingInterval; // +0x10
    double _expectedTotalTrackingTime; // +0x18
    double _extraTrackingTime; // +0x20
    unsigned long long _maximumNumberOfAlysisRecordsPerDay; // +0x28
    unsigned long long _maximumNumberOfAlysisRecordsPerHour; // +0x30
    unsigned long long _maximumNumberOfAlysisRecordsPerTask; // +0x38
    double _intervalBetweenRecords; // +0x40
    unsigned long long _recognizer; // +0x48
    unsigned long long _analyticTerm; // +0x50
    unsigned long long _numberOfCollectedRecords; // +0x58
}
- (id)initWithRecognizer:(unsigned long long)arg1 analyticTerm:(unsigned long long)arg2;
- (void)markRecordingForScene:(unsigned long long)arg1;
- (BOOL)shouldContiuneRecordingForScene:(unsigned long long)arg1;
- (id)associatedView;
- (void)setAssociatedView:(id)arg1;
- (double)motionSamplingInterval;
- (void)setMotionSamplingInterval:(double)arg1;
- (double)expectedTotalTrackingTime;
- (void)setExpectedTotalTrackingTime:(double)arg1;
- (double)extraTrackingTime;
- (void)setExtraTrackingTime:(double)arg1;
- (unsigned long long)maximumNumberOfAlysisRecordsPerDay;
- (void)setMaximumNumberOfAlysisRecordsPerDay:(unsigned long long)arg1;
- (unsigned long long)maximumNumberOfAlysisRecordsPerHour;
- (void)setMaximumNumberOfAlysisRecordsPerHour:(unsigned long long)arg1;
- (unsigned long long)maximumNumberOfAlysisRecordsPerTask;
- (void)setMaximumNumberOfAlysisRecordsPerTask:(unsigned long long)arg1;
- (double)intervalBetweenRecords;
- (void)setIntervalBetweenRecords:(double)arg1;
- (unsigned long long)recognizer;
- (void)setRecognizer:(unsigned long long)arg1;
- (unsigned long long)analyticTerm;
- (void)setAnalyticTerm:(unsigned long long)arg1;
- (unsigned long long)numberOfCollectedRecords;
- (void)setNumberOfCollectedRecords:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
