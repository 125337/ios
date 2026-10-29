@interface TextStateBrandPaySignature : TextStateBrandBaseSignature
{
    NSString * _payTransactionId; // +0x8
    NSString * _paySignature; // +0x10
}
- (id)businessInfo;
- (BOOL)isValid;
- (id)description;
- (id)payTransactionId;
- (void)setPayTransactionId:(id)arg1;
- (id)paySignature;
- (void)setPaySignature:(id)arg1;
- (void).cxx_destruct;
@end
