@interface WeDropSendLocalNetworkNoPermissionView : WeDropBaseView <WeDropStopWithRetryFooterDelegate, WeDropStopFooterDelegate>
- (id)init;
- (void)initSubviews;
- (void)onStopTapped;
- (void)onRetryTapped;
@end
