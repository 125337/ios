@interface NotifyTabInfo : NSObject
{
    NSString * _tabName; // +0x8
    NSArray * _notifyScene; // +0x10
    NSNumber * _isDefaultTab; // +0x18
}
+ (id)makeWithTabName:(id)arg1 notifyScene:(id)arg2 isDefaultTab:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)tabName;
- (void)setTabName:(id)arg1;
- (id)notifyScene;
- (void)setNotifyScene:(id)arg1;
- (id)isDefaultTab;
- (void)setIsDefaultTab:(id)arg1;
- (void).cxx_destruct;
@end
