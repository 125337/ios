@interface WCFinderNotifySystemMsgSettingVC : WCFinderWCTableViewManagerVC
{
    int _notificationSubscene; // +0x70
    int _commentScene; // +0x74
    NSString * _finderUsername; // +0x78
    MMUILabel * _descriptionLabel; // +0x80
}
- (id)initWithFinderUsername:(id)arg1 notificationSubscene:(int)arg2 commentScene:(int)arg3;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onBuildTables;
- (void)onDoNotDisturbChanged:(id)arg1 cellInfo:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (int)notificationSubscene;
- (void)setNotificationSubscene:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end
