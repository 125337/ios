@interface MMFinderLiveFeedStreamWidgetBaseView : UIView
{
    BOOL _isExposing; // +0x8
    MMLiveTaskId * _taskId; // +0x10
}
- (void)prepareForReuse;
- (id)liveTask;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isExposing;
- (void)setIsExposing:(BOOL)arg1;
- (void).cxx_destruct;
@end

