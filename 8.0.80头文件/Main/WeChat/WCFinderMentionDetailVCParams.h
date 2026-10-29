@interface WCFinderMentionDetailVCParams : NSObject
{
    BOOL _fromFirstLike; // +0x8
    BOOL _showMoreAction; // +0x9
    BOOL _forbiddenMinimize; // +0xa
    BOOL _fromThankMention; // +0xb
    int _customTLFollowEnterType; // +0xc
    WCFinderFeedContentVM * _contentVM; // +0x10
    unsigned long long _autoShowListType; // +0x18
    NSArray * _refFriendUsernames; // +0x20
    WCFinderContact * _currentAuthorContact; // +0x28
    WCFinderJumpInfo * _enterShowJumpInfo; // +0x30
}
+ (id)paramsWithContentVM:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)autoShowListType;
- (void)setAutoShowListType:(unsigned long long)arg1;
- (BOOL)fromFirstLike;
- (void)setFromFirstLike:(BOOL)arg1;
- (BOOL)showMoreAction;
- (void)setShowMoreAction:(BOOL)arg1;
- (id)refFriendUsernames;
- (void)setRefFriendUsernames:(id)arg1;
- (id)currentAuthorContact;
- (void)setCurrentAuthorContact:(id)arg1;
- (BOOL)forbiddenMinimize;
- (void)setForbiddenMinimize:(BOOL)arg1;
- (BOOL)fromThankMention;
- (void)setFromThankMention:(BOOL)arg1;
- (int)customTLFollowEnterType;
- (void)setCustomTLFollowEnterType:(int)arg1;
- (id)enterShowJumpInfo;
- (void)setEnterShowJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
