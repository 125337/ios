@interface QMCJsonCraftDataProcessor : NSObject
{
    QMCJsonBusinessDataProcessor * _businessDataProcessor; // +0x8
}
- (id)init;
- (id)process:(id)arg1;
- (id)generateProcessedData:(id)arg1;
- (id)processInternal:(id)arg1;
- (id)parseAndProcess:(id)arg1;
- (id)processCraftData:(id)arg1;
- (id)businessDataProcessor;
- (void)setBusinessDataProcessor:(id)arg1;
- (void).cxx_destruct;
@end
