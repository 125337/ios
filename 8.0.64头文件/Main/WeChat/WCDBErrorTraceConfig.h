@interface WCDBErrorTraceConfig : NSObject
{
    BOOL _showTableUsage; // +0x8
    int _errorCode; // +0xc
    NSSet * _dbTag; // +0x10
    NSString * _messageMatchReg; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)dbTag;
- (void)setDbTag:(id)arg1;
- (id)messageMatchReg;
- (void)setMessageMatchReg:(id)arg1;
- (BOOL)showTableUsage;
- (void)setShowTableUsage:(BOOL)arg1;
- (void).cxx_destruct;
@end
