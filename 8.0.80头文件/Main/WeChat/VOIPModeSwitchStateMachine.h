@interface VOIPModeSwitchStateMachine : NSObject
{
    unsigned long long _status; // +0x8
}
- (id)init;
- (void)resetStatus;
- (void)ChangeStatus:(int)arg1;
- (unsigned long long)doAction:(int)arg1;
- (unsigned long long)status;
@end
