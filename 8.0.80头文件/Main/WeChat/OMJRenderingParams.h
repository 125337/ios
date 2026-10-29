@interface OMJRenderingParams : NSObject
{
    BOOL _enableHDR; // +0x8
    BOOL _enablePrefetchSeqGen; // +0x9
    NSString * _p3To709LUTFilePath; // +0x10
}
- (id)initWithEnableHDR:(BOOL)arg1;
- (id)initWithEnableHDR:(BOOL)arg1 enablePrefetchSeqGen:(BOOL)arg2;
- (id)initWithEnableHDR:(BOOL)arg1 enablePrefetchSeqGen:(BOOL)arg2 p3To709LUTFilePath:(id)arg3;
- (BOOL)enableHDR;
- (BOOL)enablePrefetchSeqGen;
- (id)p3To709LUTFilePath;
- (void).cxx_destruct;
@end
