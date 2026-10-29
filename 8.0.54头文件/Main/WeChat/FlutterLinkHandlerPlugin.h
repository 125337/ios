@interface FlutterLinkHandlerPlugin : NSObject <MMFlutterPlugin, LinkHandlerApi>
{
    WAAppIdToUsernameTransfer * _appIdTransfer; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)openLinkUrl:(id)arg1 error:(id *)arg2;
- (void)openWeAppLinkLinkWrap:(id)arg1 error:(id *)arg2;
- (void)openLocationLinkWrap:(id)arg1 error:(id *)arg2;
- (id)appIdTransfer;
- (void)setAppIdTransfer:(id)arg1;
- (void).cxx_destruct;
@end

