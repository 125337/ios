@interface CBTAsstReddotWeakObserverProxy : NSObject <CBTAsstReddotObserverBase>
{
    id <CBTAsstReddotObserverBase> _target; // +0x8
}
- (id)initWithTarget:(id)arg1;
- (void)onUpdate;
- (void)onNewbieAnimationAvailable;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end
