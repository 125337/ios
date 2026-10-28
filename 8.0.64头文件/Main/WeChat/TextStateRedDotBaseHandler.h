@interface TextStateRedDotBaseHandler : NSObject <MMConfigMgrExt, IExptServiceExt>
- (id)init;
- (BOOL)active;
- (BOOL)dispose;
- (unsigned int)configType;
- (void)onConfigChange;
- (void)onMMDynamicConfigUpdated;
- (void)onExptItemListChange;
@end
