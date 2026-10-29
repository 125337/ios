@interface WCFinderLiveCommitGiftNewCustomizationCgi : WCFinderLiveBaseCgi
{
    BOOL _modifyNewCustomText; // +0x8
    NSData * _liveCookies; // +0x10
    NSString * _giftProductId; // +0x18
    NSString * _targetCustomText; // +0x20
    NSMutableArray * _componentKeyList; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithTaskId:(id)arg1 liveCookies:(id)arg2 giftProductId:(id)arg3 modifyNewCustomText:(BOOL)arg4 newCustomText:(id)arg5 componentKeyList:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)giftProductId;
- (void)setGiftProductId:(id)arg1;
- (BOOL)modifyNewCustomText;
- (void)setModifyNewCustomText:(BOOL)arg1;
- (id)targetCustomText;
- (void)setTargetCustomText:(id)arg1;
- (id)componentKeyList;
- (void)setComponentKeyList:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

