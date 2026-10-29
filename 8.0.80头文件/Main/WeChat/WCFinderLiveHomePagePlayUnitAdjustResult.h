@interface WCFinderLiveHomePagePlayUnitAdjustResult : NSObject
{
    BOOL _shouldRemoveUnit; // +0x8
    NSArray * _toStop; // +0x10
    NSArray * _toStart; // +0x18
}
- (id)initWithToStop:(id)arg1 toStart:(id)arg2 shouldRemoveUnit:(BOOL)arg3;
- (id)toStop;
- (id)toStart;
- (BOOL)shouldRemoveUnit;
- (void).cxx_destruct;
@end
