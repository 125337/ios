@interface MMLiveResourceFetcherBatchResultItem : NSObject
{
    BOOL _success; // +0x8
    MMLiveResourceFetcherTask * _task; // +0x10
}
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (void).cxx_destruct;
@end

