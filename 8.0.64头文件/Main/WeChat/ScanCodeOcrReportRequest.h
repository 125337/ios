@interface ScanCodeOcrReportRequest : NSObject
{
    BOOL _isPaymentCode; // +0x8
    int _codeType; // +0xc
    int _getA8KeyScene; // +0x10
    int _getA8KeyRequestId; // +0x14
    int _paymentCodeType; // +0x18
    NSString * _codeContent; // +0x20
    NSString * _msgId; // +0x28
    long long _scanRawFronScene; // +0x30
    UIImage * _resultOriginalImage; // +0x38
}
- (id)initWithCodeContent:(id)arg1 codeType:(int)arg2 paymentCodeType:(int)arg3 isPaymentCode:(BOOL)arg4 originalImage:(id)arg5 getA8KeyScene:(int)arg6 getA8KeyRequestId:(int)arg7 msgId:(id)arg8 fromRawScene:(long long)arg9;
- (id)codeContent;
- (void)setCodeContent:(id)arg1;
- (int)codeType;
- (void)setCodeType:(int)arg1;
- (int)getA8KeyScene;
- (void)setGetA8KeyScene:(int)arg1;
- (int)getA8KeyRequestId;
- (void)setGetA8KeyRequestId:(int)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (long long)scanRawFronScene;
- (void)setScanRawFronScene:(long long)arg1;
- (int)paymentCodeType;
- (void)setPaymentCodeType:(int)arg1;
- (BOOL)isPaymentCode;
- (void)setIsPaymentCode:(BOOL)arg1;
- (id)resultOriginalImage;
- (void).cxx_destruct;
@end
