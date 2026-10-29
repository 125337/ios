@interface MMLiveResourceFetcherTaskBatchedPriorityChange : NSObject
{
    MMLiveResourceFetcherTask * _task; // +0x8
    struct _desiredPriority; // +0x10
}
- (id)task;
- (void)setTask:(id)arg1;
- (struct)desiredPriority;
- (void)setDesiredPriority:(struct)arg1;
- (void).cxx_destruct;
@end
