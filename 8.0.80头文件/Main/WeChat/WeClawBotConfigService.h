@interface WeClawBotConfigService : MMUserService <MMServiceProtocol>
{
    BOOL _isStatusCheckEnabled; // +0x8
}
- (void)onServiceInit;
- (BOOL)isStatusCheckEnabled;
- (void)setIsStatusCheckEnabled:(BOOL)arg1;
@end
