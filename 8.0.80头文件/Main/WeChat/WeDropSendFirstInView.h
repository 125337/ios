@interface WeDropSendFirstInView : WeDropBaseView <WeDropStopWithStrongConfirmFooterDelegate, WeDropStopFooterDelegate>
- (id)init;
- (void)initSubviews;
- (void)onStopTapped;
- (void)onConfirmTapped;
@end
