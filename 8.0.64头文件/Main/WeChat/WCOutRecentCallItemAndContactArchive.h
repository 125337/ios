@interface WCOutRecentCallItemAndContactArchive : NSObject
{
    WCOutRecentCallItem * _lastCallItem; // +0x8
    WCOutPhoneContact * _contact; // +0x10
}
- (id)lastCallItem;
- (void)setLastCallItem:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
