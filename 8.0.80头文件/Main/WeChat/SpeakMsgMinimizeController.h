@interface SpeakMsgMinimizeController : NSObject <IMinimizeTaskDelegateInterface>
{
    id <SpeakMsgMinimizeControllerDelegate> _delegate; // +0x8
    MinimizeTaskData * _taskData; // +0x10
    NSString * _chatName; // +0x18
    NSString * _hearSessionID; // +0x20
}
- (void)initMinimizeViewWithMsg:(id)arg1;
- (void)updateMinimizeViewWithMsg:(id)arg1;
- (void)removeMinimizeView;
- (BOOL)isShowingMinimizeView;
- (id)taskData;
- (void)onRemoveMinimizedTask:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (void)onMinimizedTaskItemDisappear:(id)arg1;
- (BOOL)canShowMinimizeTaskEducation;
- (void)increaseShowMinimizeTaskCount;
- (id)getCommonReportParams;
- (void)reportExposeMinimizeView;
- (void)reportClickMinimizeView;
- (void)reportClickUnfoldedContent;
- (void)reportCloseMinimizeView;
- (void)reportFoldEnd;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTaskData:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)hearSessionID;
- (void)setHearSessionID:(id)arg1;
- (void).cxx_destruct;
@end
