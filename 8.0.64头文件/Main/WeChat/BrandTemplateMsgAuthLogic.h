@interface BrandTemplateMsgAuthLogic : MMObject <WAPageSheetDelegate, WASubscriptionMessagePageSheetDelegate, MMTipsViewControllerDelegate>
{
    BOOL _cancel; // +0x8
    unsigned int _popupScene; // +0xc
    id <BrandTemplateMsgAuthLogicDelegate> _delegate; // +0x10
    NSString * _subscriptionUrl; // +0x18
    NSString * _msgContentByUrlEncoded; // +0x20
    NSArray * _templateIDArray; // +0x28
    NSString * _username; // +0x30
    NSString * _appid; // +0x38
    NSString * _sessionId; // +0x40
    NSString * _extInfo; // +0x48
    WASubscriptionMessageRequestListByIDCgi * _requestListByIDCgi; // +0x50
    WASubscriptionMessageRequestSubscribeCgi * _requestSubscribeCgi; // +0x58
}
- (id)initWithSubscriptionUrl:(id)arg1 username:(id)arg2 msgContent:(id)arg3;
- (id)initWithTemplateIDArray:(id)arg1 username:(id)arg2 appid:(id)arg3 popupScene:(unsigned int)arg4 sessionId:(id)arg5 extInfo:(id)arg6;
- (void)startSubscriptionUrl;
- (void)startTemplateIDArray;
- (void)sendSubscribeRequestWithViewModel:(id)arg1;
- (id /* block */)requestListByIDSucceessHandler;
- (id /* block */)requestListByIDFailHandler;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (id /* block */)requestSubscribeSuccessHandler;
- (id /* block */)requestSubscribeFailHandler;
- (id)containerViewController;
- (void)subscribeSuccessWithResult:(id)arg1 cacheMaxAge:(unsigned int)arg2;
- (void)callFinishedDelegateWithResult:(id)arg1 extInfo:(id)arg2 success:(BOOL)arg3 errorKey:(unsigned long long)arg4;
- (void)callFinishedDelegateWithResult:(id)arg1 extInfo:(id)arg2 success:(BOOL)arg3 errorCode:(long long)arg4 errorMessage:(id)arg5;
- (void)pageSheetWillShow:(id)arg1;
- (void)pageSheetWillClose:(id)arg1;
- (void)authorizeAccept:(id)arg1;
- (void)authorizeReject:(id)arg1;
- (void)authDecline:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (id)jsonFormatResult:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)cancel;
- (void)setCancel:(BOOL)arg1;
- (id)subscriptionUrl;
- (void)setSubscriptionUrl:(id)arg1;
- (id)msgContentByUrlEncoded;
- (void)setMsgContentByUrlEncoded:(id)arg1;
- (id)templateIDArray;
- (void)setTemplateIDArray:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)popupScene;
- (void)setPopupScene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)requestListByIDCgi;
- (void)setRequestListByIDCgi:(id)arg1;
- (id)requestSubscribeCgi;
- (void)setRequestSubscribeCgi:(id)arg1;
- (void).cxx_destruct;
@end
