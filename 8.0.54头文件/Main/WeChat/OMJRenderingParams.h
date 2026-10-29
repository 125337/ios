@interface OMJRenderingParams : NSObject
{
    BOOL _enableHDR; // +0x8
    BOOL _enablePrefetchSeqGen; // +0x9
}
- (id)initWithEnableHDR:(BOOL)arg1;
- (id)initWithEnableHDR:(BOOL)arg1 enablePrefetchSeqGen:(BOOL)arg2;
- (BOOL)enableHDR;
- (BOOL)enablePrefetchSeqGen;
@end

