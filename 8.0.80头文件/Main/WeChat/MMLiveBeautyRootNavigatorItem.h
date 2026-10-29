@interface MMLiveBeautyRootNavigatorItem : NSObject
{
    NSString * _label; // +0x8
    Class _controlPanelProviderClass; // +0x10
}
+ (id)availableItems;
+ (id)itemWithLabel:(id)arg1 controlPanelProviderClass:(Class)arg2;
- (id)label;
- (void)setLabel:(id)arg1;
- (Class)controlPanelProviderClass;
- (void)setControlPanelProviderClass:(Class)arg1;
- (void).cxx_destruct;
@end
