@interface TempSaveFileOperation : NSOperation
{
    WCTempSaveModel * _model; // +0x8
    NSString * _filePath; // +0x10
}
+ (id)operationWithModel:(id)arg1 filePath:(id)arg2;
- (void)main;
- (id)model;
- (void)setModel:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void).cxx_destruct;
@end

