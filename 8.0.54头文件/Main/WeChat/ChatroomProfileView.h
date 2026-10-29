@interface ChatroomProfileView : MMTableViewInfo <ChatRoomMemberGridViewDelegate>
{
    NSArray * m_arrContacts; // +0x8
    BOOL _wrapItemAccessibilityElement; // +0x10
    id <ChatroomProfileViewLayoutDelegate> _layoutDelegate; // +0x18
}
- (void)updateContactList:(id)arg1;
- (void)updateContactList:(id)arg1 delegate:(id)arg2;
- (void)initMemberView;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListSection:(id)arg1;
- (unsigned long long)getMemberViewColumnCount;
- (unsigned long long)getMemberViewRowCount;
- (double)getMemberViewHeight;
- (double)getProfileViewHeadLength;
- (double)getProfileViewLeftRightMargin;
- (double)getProfileViewHeadInnerMargin;
- (double)getProfileViewRowHeight;
- (double)getProfileViewNameFontSize;
- (double)getProfileViewCellLeftMargin;
- (double)getMemberItemViewWitdh;
- (void)openContactInfo:(id)arg1;
- (BOOL)wrapItemAccessibilityElement;
- (void)setWrapItemAccessibilityElement:(BOOL)arg1;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (void).cxx_destruct;
@end

