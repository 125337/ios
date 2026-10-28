@interface ChatRoomContactSelectModel : MMObject
{
    NSArray * _sectionList; // +0x8
    NSArray * _normalSectionList; // +0x10
    ChatRoomContactSelectSectionModel * _atAllSection; // +0x18
    ChatRoomContactSelectSectionModel * _referMsgSection; // +0x20
    ChatRoomContactSelectSectionModel * _recentAtSection; // +0x28
    id <ChatRoomContactSelectModelDelegate> _delegate; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)reloadData;
- (unsigned long long)recentAtCount;
- (id)sectionList;
- (void)setSectionList:(id)arg1;
- (id)normalSectionList;
- (void)setNormalSectionList:(id)arg1;
- (id)atAllSection;
- (void)setAtAllSection:(id)arg1;
- (id)referMsgSection;
- (void)setReferMsgSection:(id)arg1;
- (id)recentAtSection;
- (void)setRecentAtSection:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
