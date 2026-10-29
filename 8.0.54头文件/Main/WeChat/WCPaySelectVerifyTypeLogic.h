@interface WCPaySelectVerifyTypeLogic : WCPayControlLogic <WCPayRealnameVerifyLogicDelegate, WCPaySelectVerifyTypeViewControllerDelegate, IWCPayControlLogicExt>
{
    BOOL _hasStartAddCard; // +0x38
    int _fromScene; // +0x3c
    int _payScene; // +0x40
    long long _scene; // +0x48
    NSString * _sessionId; // +0x50
    MMVoidCallback * _successCallback; // +0x58
    MMVoidCallback * _cancelCallback; // +0x60
    WCPayRealnameRouteCgi * _realnameRouteCgi; // +0x68
}
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (void)startLogic;
- (void)openLiteAppFromRealname:(id)arg1;
- (void)OnSelectBindCard;
- (id)onWCPaySelectVerifyTypeViewControllerSessionId;
- (void)OnSelectRealnameVerify:(id)arg1;
- (void)OnSelectBindCardVerify;
- (void)OnBack;
- (void)DirectBindCard;
- (void)realnameVerifyLogicDidFinishWithTinyAppUri:(id)arg1;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnRealnameVerfitySuccessNotification:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)successCallback;
- (void)setSuccessCallback:(id)arg1;
- (id)cancelCallback;
- (void)setCancelCallback:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (int)payScene;
- (void)setPayScene:(int)arg1;
- (BOOL)hasStartAddCard;
- (void)setHasStartAddCard:(BOOL)arg1;
- (id)realnameRouteCgi;
- (void)setRealnameRouteCgi:(id)arg1;
- (void).cxx_destruct;
@end

