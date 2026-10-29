@interface NSURLRequest (MMNetworkMonitor)
- (BOOL)isQBPostSuffixURL;
- (id)requestByRemovingPostCheckKey;
- (id)URLByRemoveQBPostSuffix;
- (id)WX_SR_SSLPinnedCertificates;
- (BOOL)WX_TLSSkipHostnameCheck;
- (void)setQmapStateData:(id)arg1;
- (id)qmapStateData;
- (unsigned long long)qmapFlowSize;
- (unsigned long long)mmGetBytesSent;
- (unsigned long long)mmGetLineLength;
- (unsigned long long)mmGetHeadersLengthWithCookie;
- (id)mmGetCookies;
- (unsigned long long)mmGetBodyLength;
@end
