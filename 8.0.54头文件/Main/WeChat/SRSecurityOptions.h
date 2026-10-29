@interface SRSecurityOptions : NSObject
{
    BOOL _requestRequiresSSL; // +0x8
    BOOL _TLSSkipHostnameCheck; // +0x9
    BOOL _validatesCertificateChain; // +0xa
    NSURLRequest * _request; // +0x10
    NSArray * _pinnedCertificates; // +0x18
}
- (id)initWithRequest:(id)arg1 pinnedCertificates:(id)arg2 chainValidationEnabled:(BOOL)arg3 TLSSkipHostnameCheck:(BOOL)arg4;
- (void)updateSecurityOptionsInStream:(id)arg1;
- (BOOL)securityTrustContainsPinnedCertificates:(__SecTrust *)arg1;
- (id)request;
- (BOOL)requestRequiresSSL;
- (id)pinnedCertificates;
- (BOOL)TLSSkipHostnameCheck;
- (void)setTLSSkipHostnameCheck:(BOOL)arg1;
- (BOOL)validatesCertificateChain;
- (void).cxx_destruct;
@end

