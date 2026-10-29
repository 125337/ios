@interface ContactSearchLogic : NSObject <PBMessageObserverDelegate>
{
    unsigned int m_uiQRFromScene; // +0x8
    unsigned int m_uiThirdFromScene; // +0xc
    NSString * _openIMContactUrl; // +0x10
    id <ContactSearchLogicDelegate> _delegate; // +0x18
}
+ (void)fillToCContact:(id)arg1 from:(id)arg2;
+ (void)fillToSearchReq:(id)arg1 fromContext:(id)arg2;
- (void)qrSearchOpenIMContact:(id)arg1 FromScene:(unsigned int)arg2 a8keyScene:(unsigned int)arg3 subScene:(unsigned int)arg4 context:(id)arg5;
- (void)searchOpenIMContactForThird:(id)arg1 scene:(unsigned int)arg2 spamContext:(id)arg3 context:(id)arg4 extInfo:(id)arg5;
- (void)searchOpenIMContactForThirdWithDic:(id)arg1 scene:(unsigned int)arg2 spamContext:(id)arg3 context:(id)arg4 extInfo:(id)arg5;
- (void)searchOpenIMContactWithPhoneNumber:(id)arg1;
- (void)handleSearchOpenIMContactResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)openIMContactUrl;
- (void)setOpenIMContactUrl:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
