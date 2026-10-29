@interface WCFinderEnhanceTriggerInfo : NSObject
{
    int _lastTriggerType; // +0x8
    int _enhanceType; // +0xc
    NSNumber * _lastTriggerEvent; // +0x10
    WCFinderDataItem * _enhancedByThisItem; // +0x18
    NSArray * _enhancingTidList; // +0x20
    NSMutableSet * _requestingEventSet; // +0x28
    NSMutableSet * _triggerEventSet; // +0x30
}
- (id)requestingEventSet;
- (id)triggerEventSet;
- (int)lastTriggerType;
- (void)setLastTriggerType:(int)arg1;
- (id)lastTriggerEvent;
- (void)setLastTriggerEvent:(id)arg1;
- (id)enhancedByThisItem;
- (void)setEnhancedByThisItem:(id)arg1;
- (id)enhancingTidList;
- (void)setEnhancingTidList:(id)arg1;
- (int)enhanceType;
- (void)setEnhanceType:(int)arg1;
- (void)setRequestingEventSet:(id)arg1;
- (void)setTriggerEventSet:(id)arg1;
- (void).cxx_destruct;
@end
