@interface FavSecurityLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * _infoArray; // +0x8
    unsigned int _curCheckingId; // +0x10
    id <FavSecurityDelegate> _delegate; // +0x18
}
- (id)init;
- (void)cancelCheck:(unsigned int)arg1;
- (void)checkSecurity:(id)arg1;
- (void)runCheck;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleResp:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

