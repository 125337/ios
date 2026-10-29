@interface MMWebOptimJSContextTaskLoaderContext : MMObject
{
    MMWebOptimJSContextTaskConfig * _config; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failedBlock; // +0x18
}
- (id)config;
- (void)setConfig:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

