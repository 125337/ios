@interface WCAdvertiseWaitUpdateItem : MMObject
{
    unsigned int _uiFromScene; // +0x8
    int _source; // +0xc
    int _reportScene; // +0x10
    NSString * _itemID; // +0x18
    NSString * _syncBuffer; // +0x20
    NSData * _remindFriendsInfo; // +0x28
}
- (id)description;
- (id)itemID;
- (void)setItemID:(id)arg1;
- (unsigned int)uiFromScene;
- (void)setUiFromScene:(unsigned int)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (id)syncBuffer;
- (void)setSyncBuffer:(id)arg1;
- (id)remindFriendsInfo;
- (void)setRemindFriendsInfo:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (void).cxx_destruct;
@end
