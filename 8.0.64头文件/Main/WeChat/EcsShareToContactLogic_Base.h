@interface EcsShareToContactLogic_Base : NSObject <ForwardMessageLogicDelegate>
{
    UIView * _view; // +0x8
    NSArray * _toContacts; // +0x10
    EcsShareToContactEventCallback * _cb; // +0x18
    ForwardMessageLogicController * _forwardLogic; // +0x20
    CMessageWrap * _messageWrap; // +0x28
    WAShareAppMessageThumbImagePool * _thumbImagePool; // +0x30
}
+ (void)share:(id)arg1 withExtraData:(id)arg2 toContacts:(id)arg3 callback:(id)arg4 fromView:(id)arg5;
+ (id)generateKey;
- (void)genMessage:(id /* block */)arg1;
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (id)forwardLogic;
- (void)share;
- (void)loadNetImg:(id)arg1 callback:(id /* block */)arg2;
- (id)checkCanShow;
- (void)onSuc:(id)arg1;
- (void)onCancel;
- (void)onFail:(id)arg1;
- (void)bindToView;
- (void)clear;
- (id)thumbImagePool;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)toContacts;
- (void)setToContacts:(id)arg1;
- (id)cb;
- (void)setCb:(id)arg1;
- (void)setForwardLogic:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (void)setThumbImagePool:(id)arg1;
- (void).cxx_destruct;
@end
