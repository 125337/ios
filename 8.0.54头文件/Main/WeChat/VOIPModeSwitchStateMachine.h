@interface VOIPModeSwitchStateMachine : NSObject
{
    int _status; // +0x8
}
- (id)init;
- (void)resetStatus;
- (void)ChangeStatus:(int)arg1;
- (int)doAction:(int)arg1;
- (int)status;
@end

