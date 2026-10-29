@interface QMCJsonDataProcessPipeline : NSObject
{
    QMCDataTypeAnalyzer * _dataTypeAnalyzer; // +0x8
    QMCDataPreProcessor * _dataPreProcessor; // +0x10
    QMCCommandGenerator * _commandGenerator; // +0x18
    QMCBusinessDataExtractor * _businessDataExtractor; // +0x20
}
- (id)init;
- (id)processWithMcpItem:(id)arg1 craftDataJson:(id)arg2 needsCommand:(BOOL)arg3 needsBusinessData:(BOOL)arg4;
- (id)dataTypeAnalyzer;
- (void)setDataTypeAnalyzer:(id)arg1;
- (id)dataPreProcessor;
- (void)setDataPreProcessor:(id)arg1;
- (id)commandGenerator;
- (void)setCommandGenerator:(id)arg1;
- (id)businessDataExtractor;
- (void)setBusinessDataExtractor:(id)arg1;
- (void).cxx_destruct;
@end
