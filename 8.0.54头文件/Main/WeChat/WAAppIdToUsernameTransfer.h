@interface WAAppIdToUsernameTransfer : MMObject
{
    WAContactGetter * _contactGetter; // +0x8
}
- (void)transferAppidToUsernameWithAppId:(id)arg1 handler:(id /* block */)arg2;
- (id)contactGetter;
- (void)setContactGetter:(id)arg1;
- (void).cxx_destruct;
@end

