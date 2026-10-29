@interface NewChatRoomMemberContainView : MMUIView <NewChatRoomMemberItemViewDelegate>
{
    NSMutableArray * m_arrItemViews; // +0x8
    CContact * m_groupContact; // +0x10
    unsigned long long m_column; // +0x18
    double m_margin; // +0x20
    double m_fHeadWidth; // +0x28
    double m_fNameSize; // +0x30
    BOOL m_bDeleteStatue; // +0x38
    BOOL _wrapItemAccessibilityElement; // +0x39
    BOOL _isShowOpenIMTypeInGroupContact; // +0x3a
    unsigned int _m_scence; // +0x3c
    id <ChatRoomMemberGridViewDelegate> m_delegate; // +0x40
    WCColorProxy * _colorProxy; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 column:(unsigned long long)arg2;
- (id)initWithFrame:(CGRect)arg1 column:(unsigned long long)arg2 headWidth:(double)arg3 nameSize:(double)arg4;
- (id)colorProxy;
- (void)updateColumn:(unsigned long long)arg1;
- (void)addItemView:(id)arg1;
- (double)getCenterX:(unsigned long long)arg1 itemView:(id)arg2;
- (void)layoutSubviews;
- (void)setGroupContact:(id)arg1;
- (id)getItemAt:(unsigned int)arg1;
- (BOOL)showTrackFlag:(id)arg1 contact:(id)arg2 trackUserNameList:(id)arg3;
- (void)updateSubViewWithContacts:(id)arg1 editBtn:(unsigned long long)arg2 withTrackUserNameList:(id)arg3 withTalkList:(id)arg4;
- (id)getViewController;
- (void)openContactInfo:(id)arg1;
- (void)onAddMember:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)setShowRemoveMember;
- (void)onLongPressEx:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bDeleteStatue;
- (void)setM_bDeleteStatue:(BOOL)arg1;
- (id)groupContact;
- (unsigned int)m_scence;
- (void)setM_scence:(unsigned int)arg1;
- (BOOL)wrapItemAccessibilityElement;
- (void)setWrapItemAccessibilityElement:(BOOL)arg1;
- (void)setColorProxy:(id)arg1;
- (BOOL)isShowOpenIMTypeInGroupContact;
- (void)setIsShowOpenIMTypeInGroupContact:(BOOL)arg1;
- (void).cxx_destruct;
@end

