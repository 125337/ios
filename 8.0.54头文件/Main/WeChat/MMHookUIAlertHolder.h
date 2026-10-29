@interface MMHookUIAlertHolder : MMRootService <MMServiceProtocol>
{
    NSMutableSet * _alertViews; // +0x8
}
- (void)onServiceInit;
- (void)addAlertView:(id)arg1;
- (void)removeAlertView:(id)arg1;
- (id)alertViews;
- (void)setAlertViews:(id)arg1;
- (void).cxx_destruct;
@end

