@interface DarkBubbleStyleMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isEnabled; // +0x8
}
- (void)onServiceInit;
- (BOOL)isEnabled;
@end
