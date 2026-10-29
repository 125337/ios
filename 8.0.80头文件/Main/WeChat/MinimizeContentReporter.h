@interface MinimizeContentReporter : NSObject
{
    unsigned long long _listExpandTime; // +0x8
    long long _stickEdge; // +0x10
    long long _type; // +0x18
    long long _action; // +0x20
    NSString * _taskIdList; // +0x28
    unsigned long long _expandStartTime; // +0x30
}
+ (void)reportOperate:(long long)arg1 onTask:(id)arg2 taskCount:(long long)arg3;
+ (void)reportAddMinimizeTask:(id)arg1 taskCount:(long long)arg2;
+ (id /* block */)contentMinimizeActionSheetReport:(long long)arg1;
+ (void)directReportcontentMinimizeActionSheetView:(id)arg1 scene:(long long)arg2 event:(long long)arg3 btnRow:(unsigned long long)arg4 btnIdex:(unsigned long long)arg5;
+ (id /* block */)starMinimizeActionSheetReport:(long long)arg1;
- (void)updateWithTaskList:(id)arg1;
- (void)onTaskListExpand;
- (void)reportFloatListAction:(long long)arg1 result:(long long)arg2;
- (unsigned long long)listExpandTime;
- (void)setListExpandTime:(unsigned long long)arg1;
- (long long)stickEdge;
- (void)setStickEdge:(long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (id)taskIdList;
- (void)setTaskIdList:(id)arg1;
- (unsigned long long)expandStartTime;
- (void)setExpandStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
