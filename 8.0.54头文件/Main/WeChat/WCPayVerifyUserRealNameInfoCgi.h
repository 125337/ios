@interface WCPayVerifyUserRealNameInfoCgi : WCPayBaseTenPayCgi
{
    int _verify_scene; // +0x8
    NSString * _cre_id; // +0x10
    NSString * _cre_type; // +0x18
    NSString * _true_name; // +0x20
    WCPayVerifyUserRealNameInfoResp * _resp; // +0x28
    id <WCPayVerifyUserRealNameInfoCgiDelegate> _cgiDelegate; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (id)cre_id;
- (void)setCre_id:(id)arg1;
- (id)cre_type;
- (void)setCre_type:(id)arg1;
- (id)true_name;
- (void)setTrue_name:(id)arg1;
- (int)verify_scene;
- (void)setVerify_scene:(int)arg1;
- (id)resp;
- (void)setResp:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end

