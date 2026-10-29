@interface BrsResidentStrategyConfig : NSObject
{
    NSNumber * _isFoldNotificationByContactEnabled; // +0x8
    NSNumber * _isFoldWeakNotificationByContactEnabled; // +0x10
    NSNumber * _isNotifyEnabled; // +0x18
    NSNumber * _isFoldV2NotificationByContactEnabled; // +0x20
    NSNumber * _showSaArticleEntrance; // +0x28
    NSString * _personalCenterCellListBuffer; // +0x30
}
+ (id)makeWithIsFoldNotificationByContactEnabled:(id)arg1 isFoldWeakNotificationByContactEnabled:(id)arg2 isNotifyEnabled:(id)arg3 isFoldV2NotificationByContactEnabled:(id)arg4 showSaArticleEntrance:(id)arg5 personalCenterCellListBuffer:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)isFoldNotificationByContactEnabled;
- (void)setIsFoldNotificationByContactEnabled:(id)arg1;
- (id)isFoldWeakNotificationByContactEnabled;
- (void)setIsFoldWeakNotificationByContactEnabled:(id)arg1;
- (id)isNotifyEnabled;
- (void)setIsNotifyEnabled:(id)arg1;
- (id)isFoldV2NotificationByContactEnabled;
- (void)setIsFoldV2NotificationByContactEnabled:(id)arg1;
- (id)showSaArticleEntrance;
- (void)setShowSaArticleEntrance:(id)arg1;
- (id)personalCenterCellListBuffer;
- (void)setPersonalCenterCellListBuffer:(id)arg1;
- (void).cxx_destruct;
@end
