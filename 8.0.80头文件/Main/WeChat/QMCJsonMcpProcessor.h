@interface QMCJsonMcpProcessor : NSObject
{
    QMCJsonDataProcessPipeline * _pipeline; // +0x8
    QMCJsonDataCombineManager * _combineManager; // +0x10
}
- (id)init;
- (id)processMcpCommandsWithBusinessData:(id)arg1;
- (id)pipeline;
- (void)setPipeline:(id)arg1;
- (id)combineManager;
- (void)setCombineManager:(id)arg1;
- (void).cxx_destruct;
@end
