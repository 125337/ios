@interface ContactRelatedGroupLogic : NSObject <IContactMgrExt>
{
    CContact * _contact; // +0x8
    NSMutableArray * _arrRelatedGroup; // +0x10
    BOOL _bSearchDone; // +0x18
    BOOL _bHasSearch; // +0x19
}
- (id)initWithContact:(id)arg1;
- (void)trySearchRelatedGroup;
- (void)sortChatRoom:(id)arg1;
- (BOOL)isSearchDone;
- (id)getContactRelatedGroup;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void).cxx_destruct;
@end
