@interface EmoticonMsgDeleteReport : NSObject
{
    NSMutableArray * _emoticonDeleteReportList; // +0x8
    id /* block */ _reportTask; // +0x10
}
- (id)init;
- (void)doReportMsgDelete:(id)arg1 createTime:(unsigned int)arg2 isSender:(BOOL)arg3 talker:(id)arg4;
- (void)flushReportTask:(id)arg1;
- (void)doReportTalkerDelete:(id)arg1;
- (id)emoticonDeleteReportList;
- (void)setEmoticonDeleteReportList:(id)arg1;
- (id /* block */)reportTask;
- (void)setReportTask:(id /* block */)arg1;
- (void).cxx_destruct;
@end
