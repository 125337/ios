@interface FlutterSnsPlatformTextProcessingPlugin : NSObject <MMFlutterPlugin, PlatformTextProcessingApi>
{
    id <SNSPluginDelegate> _delegate; // +0x8
    MMURLHandler * _urlHandler; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)getWordSegmentText:(id)arg1 completion:(id /* block */)arg2;
- (void)addTextToFavouriteText:(id)arg1 completion:(id /* block */)arg2;
- (void)searchWebText:(id)arg1 completion:(id /* block */)arg2;
- (void)openWebLinkUrl:(id)arg1 completion:(id /* block */)arg2;
- (void)showPhoneNumberMenuPhone:(id)arg1 completion:(id /* block */)arg2;
- (void)showEmailMenuEmail:(id)arg1 completion:(id /* block */)arg2;
- (void)openTopicTopic:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)urlHandler;
- (void)setUrlHandler:(id)arg1;
- (void).cxx_destruct;
@end
