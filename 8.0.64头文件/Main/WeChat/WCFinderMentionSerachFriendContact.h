@interface WCFinderMentionSerachFriendContact : NSObject
{
    WCFinderContact * _finderContact; // +0x8
    NSString * _matchDesc; // +0x10
    NSString * _highlightDesc; // +0x18
}
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)matchDesc;
- (void)setMatchDesc:(id)arg1;
- (id)highlightDesc;
- (void)setHighlightDesc:(id)arg1;
- (void).cxx_destruct;
@end
