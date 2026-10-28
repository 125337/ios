@interface OpenProfileLogicHelper : MMObject <PBMessageObserverDelegate, IStrangerContactMgrExt>
{
    id <OpenProfileLogicHelperDelegate> _delegate; // +0x8
    NSString * _ticket; // +0x10
    int _source; // +0x18
}
- (void)dealloc;
- (void)openProfile:(id)arg1;
- (void)handleOpenProfileResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
