@interface TPAssetResourceLoadingContentInformationRequest : NSObject
{
    BOOL _usePollingMode; // +0x8
    NSString * _contentType; // +0x10
    unsigned long long _contentLength; // +0x18
    NSString * _dataReadFilePath; // +0x20
    id <TPAssetResourceLoadingContentInformationRequestDelegate> _delegate; // +0x28
}
- (void)setContentType:(id)arg1;
- (void)setContentLength:(unsigned long long)arg1;
- (void)setInformationRequestDelegate:(id)arg1;
- (id)contentType;
- (unsigned long long)contentLength;
- (id)dataReadFilePath;
- (void)setDataReadFilePath:(id)arg1;
- (BOOL)usePollingMode;
- (void)setUsePollingMode:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

