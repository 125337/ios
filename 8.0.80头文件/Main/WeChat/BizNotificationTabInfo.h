@interface BizNotificationTabInfo : NSObject
{
    NSNumber * _notifyMsgVersion; // +0x8
    NSArray * _tabList; // +0x10
}
+ (id)makeWithNotifyMsgVersion:(id)arg1 tabList:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)notifyMsgVersion;
- (void)setNotifyMsgVersion:(id)arg1;
- (id)tabList;
- (void)setTabList:(id)arg1;
- (void).cxx_destruct;
@end
