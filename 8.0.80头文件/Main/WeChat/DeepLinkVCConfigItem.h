@interface DeepLinkVCConfigItem : NSObject
{
    NSString * linkName; // +0x8
    unsigned long long actionType; // +0x10
    NSString * actionName; // +0x18
}
+ (id)genItemWithLinkName:(id)arg1 actionType:(unsigned long long)arg2 actionName:(id)arg3;
- (id)init;
- (id)linkName;
- (void)setLinkName:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (id)actionName;
- (void)setActionName:(id)arg1;
- (void).cxx_destruct;
@end
