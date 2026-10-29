@interface WAAppContactPreloaderContext : NSObject
{
    WAAppOpenParameter * _openParameter; // +0x8
    WAAppTaskExtInfo * _taskInfo; // +0x10
    WAAppTaskHandlerWrapper * _handlerWrapper; // +0x18
}
- (id)openParameter;
- (void)setOpenParameter:(id)arg1;
- (id)taskInfo;
- (void)setTaskInfo:(id)arg1;
- (id)handlerWrapper;
- (void)setHandlerWrapper:(id)arg1;
- (void).cxx_destruct;
@end
