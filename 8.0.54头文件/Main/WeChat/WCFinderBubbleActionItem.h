@interface WCFinderBubbleActionItem : NSObject
{
    id /* block */ _availableCheckBlock; // +0x8
    id /* block */ _prepareAnimationBlock; // +0x10
    id /* block */ _showAnimationBlock; // +0x18
    id /* block */ _dismissAnimationBlock; // +0x20
    unsigned long long _itemType; // +0x28
    WCFinderBubbleReadyRequirements * _requirements; // +0x30
}
- (id /* block */)availableCheckBlock;
- (void)setAvailableCheckBlock:(id /* block */)arg1;
- (id /* block */)prepareAnimationBlock;
- (void)setPrepareAnimationBlock:(id /* block */)arg1;
- (id /* block */)showAnimationBlock;
- (void)setShowAnimationBlock:(id /* block */)arg1;
- (id /* block */)dismissAnimationBlock;
- (void)setDismissAnimationBlock:(id /* block */)arg1;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg1;
- (id)requirements;
- (void)setRequirements:(id)arg1;
- (void).cxx_destruct;
@end

