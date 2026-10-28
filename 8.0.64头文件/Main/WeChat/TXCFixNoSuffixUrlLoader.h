@interface TXCFixNoSuffixUrlLoader : NSObject <AVAssetResourceLoaderDelegate>
{
    NSString * _fileType; // +0x8
    NSURL * _url; // +0x10
}
- (id)initWithURL:(id)arg1 fileType:(id)arg2;
- (id)probeAudioTypeWithHeadData:(id)arg1 contentType:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (id)fileType;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
