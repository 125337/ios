@interface SolitaireSessionHandler : NSObject <PBCoding>
{
    NSString * _chatName; // +0x8
    NSMutableDictionary * _dicActiveSolitaire; // +0x10
    NSMutableDictionary * _dicSolitaireForMatch; // +0x18
}
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_dicActiveSolitaire;
+ (void)PBArrayAdd_dicSolitaireForMatch;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)dicActiveSolitaire;
- (id)dicSolitaireForMatch;
- (id)getSolitaireWithMsgWrap:(id)arg1;
- (BOOL)dropActiveSolitaire;
- (BOOL)dropForMatchSolitaire;
- (BOOL)checkAndDropSolitaire;
- (BOOL)matchSolitaireWithInfoObj:(id)arg1;
- (void)tryReportActive:(id)arg1 InfoObj:(id)arg2;
- (void)notifyActiveSolitaire:(id)arg1;
- (void)notifyDeactiveSolitaire:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (void)setDicActiveSolitaire:(id)arg1;
- (void)setDicSolitaireForMatch:(id)arg1;
- (void).cxx_destruct;
@end
