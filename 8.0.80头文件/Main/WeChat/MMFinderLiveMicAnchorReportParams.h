@interface MMFinderLiveMicAnchorReportParams : NSObject
{
    NSString * _finderUsername; // +0x8
    NSString * _feedId; // +0x10
    NSString * _candidateRequestId; // +0x18
}
- (id)initWithFinderUsername:(id)arg1 feedId:(id)arg2 candidateRequestId:(id)arg3;
- (id)initWithMicUser:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)candidateRequestId;
- (void)setCandidateRequestId:(id)arg1;
- (void).cxx_destruct;
@end
