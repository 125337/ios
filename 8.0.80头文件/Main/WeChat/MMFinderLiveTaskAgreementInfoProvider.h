@interface MMFinderLiveTaskAgreementInfoProvider : NSObject <MMFinderLiveAgreementInfoProviding>
{
    MMLiveTaskId * _taskId; // +0x8
}
- (id)initWithTaskId:(id)arg1;
- (id)agreementInfo;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
