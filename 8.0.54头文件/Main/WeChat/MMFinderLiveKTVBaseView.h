@interface MMFinderLiveKTVBaseView : UIView
{
    id <MMLiveUniqueTaskId> _taskId; // +0x8
    MMFinderLiveKTVReporter * _reporter; // +0x10
}
+ (double)getAdaptedValue:(double)arg1;
+ (double)getAdaptedRatio;
- (id)initWithTaskId:(id)arg1;
- (id)ktvBox;
- (id)anchorSdkUserId;
- (id)finderDataItem;
- (id)getSingerContact;
- (id)allConnectedMicUsersInfo;
- (id)ktvReporter;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end

