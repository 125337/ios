@interface MMFinderLiveSensitiveActionItem : NSObject
{
    unsigned long long _actionType; // +0x8
    MMFinderLiveSensitiveDataItem * _sensitiveItem; // +0x10
    unsigned long long _actionId; // +0x18
}
- (id)description;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (id)sensitiveItem;
- (void)setSensitiveItem:(id)arg1;
- (unsigned long long)actionId;
- (void)setActionId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

