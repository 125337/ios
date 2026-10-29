@interface NSHTTPURLResponse (Extend)
- (unsigned long long)qmapFlowSize;
- (id)mm_contentTypeIfHasPrefixApplication;
- (unsigned long long)mm_contentLength;
- (id)mm_contentDispositionType;
- (BOOL)mm_isContentDispositionAttachment;
- (id)mm_contentDispositionFileName;
@end

