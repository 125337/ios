@interface WCPayOverseaIBGGetWalletCgi : NSObject <PBMessageObserverDelegate>
{
    BOOL _m_isCgiEnd; // +0x8
    id <WCPayOverseaIBGGetWalletCgiDelegate> _m_delegate; // +0x10
}
+ (id)getSaveRootDir;
+ (id)getSavePathWithTpaCountry:(unsigned int)arg1;
+ (void)checkFileWithTpaCountry:(unsigned int)arg1;
+ (id)GetCacheRespWithTpaCountry:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (BOOL)isCgiEnd;
- (void)startRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)callOkDelegateWithRespObject:(id)arg1;
- (id)cacheFromResp:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_isCgiEnd;
- (void)setM_isCgiEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end

