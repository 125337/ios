@interface FlutterSnsPlatformWebPlugin : NSObject <MMFlutterPlugin, PlatformWebApi>
{
    id <SNSPluginDelegate> _delegate; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)jumpToWebUrl:(id)arg1 isFromPublishPage:(BOOL)arg2 error:(id *)arg3;
- (void)startTopicSearchQuery:(id)arg1 isFromComment:(BOOL)arg2 error:(id *)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
