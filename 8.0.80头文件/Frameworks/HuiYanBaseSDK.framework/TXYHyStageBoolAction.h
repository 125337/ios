@interface TXYHyStageBoolAction : TXYHyStageAction
{
    BOOL _boolValue; // +0x20
}
- (BOOL)runCheck;
- (void)setBoolValue:(BOOL)arg1;
- (BOOL)boolValue;
@end
