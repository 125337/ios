@interface TXCFixNoSuffixUrlLoader : NSObject <AVAssetResourceLoaderDelegate>
{
    NSString * _url; // +0x8
}
- (id)initWithUrl:(id)arg1;
- (id)probeAudioTypeWithHeadData:(id)arg1 contentType:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

