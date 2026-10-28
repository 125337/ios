@interface MultiTalkMemberCollectionItem : NSObject
{
    NSObject<MultiTalkMemberProtocol> * _member; // +0x8
    MultiTalkMemberCell * _memberCell; // +0x10
}
- (id)initWithMember:(id)arg1 memberCell:(id)arg2;
- (id)member;
- (void)setMember:(id)arg1;
- (id)memberCell;
- (void)setMemberCell:(id)arg1;
- (void).cxx_destruct;
@end
