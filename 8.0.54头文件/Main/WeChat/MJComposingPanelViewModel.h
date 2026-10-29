@interface MJComposingPanelViewModel : NSObject
{
    BOOL _respondsToQuickExit; // +0x8
    unsigned long long _panelType; // +0x10
}
- (id)initWithPanelType:(unsigned long long)arg1 respondsToQuickExit:(BOOL)arg2;
- (id)description;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)handleApplicationWillEnterForeground:(id)arg1;
- (unsigned long long)panelType;
- (BOOL)respondsToQuickExit;
@end

