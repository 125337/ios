@interface WCWebEventsBaseAction : MMObject <WCWebEventsBaseAction>
{
    BOOL _bPerformed; // +0x8
}
- (id)targetEventSets;
- (BOOL)canPerformEventAction;
- (void)performEventAction;
- (id)actionDescription;
- (BOOL)bPerformed;
- (void)setBPerformed:(BOOL)arg1;
@end
