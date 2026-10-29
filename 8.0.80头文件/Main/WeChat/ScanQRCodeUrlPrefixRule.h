@interface ScanQRCodeUrlPrefixRule : NSObject
{
    NSMutableArray * _m_handlerArray; // +0x8
}
- (id)initWithDelegate:(id)arg1 scene:(long long)arg2 sourceType:(unsigned int)arg3 sourceInfo:(id)arg4;
- (BOOL)shouldHandleUrl:(id)arg1;
- (BOOL)isUrlMatchPrefixRule:(id)arg1 andTryGetCodeType:(char *)arg2;
- (BOOL)isTransferUrl:(id)arg1;
- (void)reportHandleCount;
- (id)m_handlerArray;
- (void)setM_handlerArray:(id)arg1;
- (void).cxx_destruct;
@end
