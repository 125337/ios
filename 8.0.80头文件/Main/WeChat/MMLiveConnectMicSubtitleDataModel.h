@interface MMLiveConnectMicSubtitleDataModel : NSObject
{
    NSMutableArray * _recalledIndexList; // +0x8
    MMLiveTaskId * _taskId; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)isSubtitleRecalledWithIndex:(unsigned long long)arg1;
- (void)updateSubtitleRecallDataWithIndexList:(id)arg1 fromScene:(unsigned long long)arg2 shouldNotify:(BOOL)arg3;
- (id)recalledIndexList;
- (void)setRecalledIndexList:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
