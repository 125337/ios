@interface NewLifeSelectIdentityHandler : NewLifeActionHandler <WCActionSheetDelegate>
{
    unsigned long long _identity; // +0x8
}
- (void)handleRequest:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned long long)identity;
- (void)setIdentity:(unsigned long long)arg1;
@end

