@interface WCPayGPSolitaireData : NSObject
{
    NSString * _launchTheme; // +0x8
    NSDictionary * _solitaireItems; // +0x10
    NSArray * _contactList; // +0x18
    NSDictionary * _user2Content; // +0x20
    NSArray * _confirmContactList; // +0x28
    NSArray * _launchSolitaireItems; // +0x30
    SolitaireObj * _solitaireOriginData; // +0x38
}
- (id)launchTheme;
- (void)setLaunchTheme:(id)arg1;
- (id)solitaireItems;
- (void)setSolitaireItems:(id)arg1;
- (id)contactList;
- (void)setContactList:(id)arg1;
- (id)user2Content;
- (void)setUser2Content:(id)arg1;
- (id)confirmContactList;
- (void)setConfirmContactList:(id)arg1;
- (id)launchSolitaireItems;
- (void)setLaunchSolitaireItems:(id)arg1;
- (id)solitaireOriginData;
- (void)setSolitaireOriginData:(id)arg1;
- (void).cxx_destruct;
@end

