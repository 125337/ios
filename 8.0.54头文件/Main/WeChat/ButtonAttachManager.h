@interface ButtonAttachManager : NSObject
{
    NSHashTable * _attachedButtons; // +0x8
    double _maxButtonWidth; // +0x10
}
- (id)init;
- (void)attachButton:(id)arg1;
- (void)detachButton:(id)arg1;
- (void)setNeedsTrigger;
- (void)forceTrigger;
- (void)trigger;
- (id)attachedButtons;
- (void)setAttachedButtons:(id)arg1;
- (double)maxButtonWidth;
- (void)setMaxButtonWidth:(double)arg1;
- (void).cxx_destruct;
@end

