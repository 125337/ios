@interface InternalLoadingFavor : NSObject <WCPayBusiF2FGetFavorCgiDelegate>
{
    id <InternalLoadingFavorDelegate> _m_delegate; // +0x8
}
- (void)onWCPayBusiF2FGetFavorCgiResp:(id)arg1;
- (void)onWCPayBusiF2FGetFavorCgiError:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
