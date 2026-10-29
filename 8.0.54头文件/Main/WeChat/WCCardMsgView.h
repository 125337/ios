@interface WCCardMsgView : MMUIView <MMWebImageViewDelegate>
{
    WCCardPkgMsg * _cardMsg; // +0x8
    id <WCCardMsgViewDelegate> _delegate; // +0x10
}
+ (double)GetHeightForCardMsg:(id)arg1;
- (id)initWithCardMsg:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)onLoadImageOK:(id)arg1;
- (void)onAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

