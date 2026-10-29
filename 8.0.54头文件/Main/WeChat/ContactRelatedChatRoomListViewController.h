@interface ContactRelatedChatRoomListViewController : MemberListViewController <IContactRelatedGroupDataExt>
{
    NSString * _customTitle; // +0x98
    ContactRelatedGroupLogic * _relatedGroupLogic; // +0xa0
    CContact * _contact; // +0xa8
}
- (id)init;
- (void)viewDidLoad;
- (void)showContactInfoView:(id)arg1;
- (double)cellHeight;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)JumpToChatRoom:(id)arg1;
- (long long)getEditingStyleForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onCRGDataUpdated;
- (id)customTitle;
- (void)setCustomTitle:(id)arg1;
- (id)relatedGroupLogic;
- (void)setRelatedGroupLogic:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

