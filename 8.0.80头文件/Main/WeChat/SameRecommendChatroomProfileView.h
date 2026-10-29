@interface SameRecommendChatroomProfileView : ChatroomProfileView <MMPageSheetAdapterDelegate>
{
    NSArray * _memberContacts; // +0x8
    id <ChatroomProfileViewLayoutDelegate> _memberLayoutDelegate; // +0x10
    double _layoutWidth; // +0x18
}
- (void)updateContactList:(id)arg1 delegate:(id)arg2;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidRotation:(id)arg1;
- (id)memberContacts;
- (void)setMemberContacts:(id)arg1;
- (id)memberLayoutDelegate;
- (void)setMemberLayoutDelegate:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
