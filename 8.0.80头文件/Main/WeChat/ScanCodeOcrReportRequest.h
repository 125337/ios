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
    unsigned long long _reportType; // +0x38
    UIImage * _resultOriginalImage; // +0x40
    CGRect _codeRect; // +0x48
}
- (id)initWithCodeContent:(id)arg1 codeType:(int)arg2 codeRect:(CGRect)arg3 paymentCodeType:(int)arg4 isPaymentCode:(BOOL)arg5 originalImage:(id)arg6 getA8KeyScene:(int)arg7 getA8KeyRequestId:(int)arg8 msgId:(id)arg9 fromRawScene:(long long)arg10 reportType:(unsigned long long)arg11;
- (id)codeContent;
- (void)setCodeContent:(id)arg1;
- (int)codeType;
- (void)setCodeType:(int)arg1;
- (CGRect)codeRect;
- (void)setCodeRect:(CGRect)arg1;
- (int)getA8KeyScene;
- (void)setGetA8KeyScene:(int)arg1;
- (int)getA8KeyRequestId;
- (void)setGetA8KeyRequestId:(int)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (long long)scanRawFronScene;
- (void)setScanRawFronScene:(long long)arg1;
- (unsigned long long)reportType;
- (void)setReportType:(unsigned long long)arg1;
- (int)paymentCodeType;
- (void)setPaymentCodeType:(int)arg1;
- (BOOL)isPaymentCode;
- (void)setIsPaymentCode:(BOOL)arg1;
- (id)resultOriginalImage;
- (void).cxx_destruct;
@end
