@interface FTSAITipsItem : NSObject
{
    BOOL _showFriendLike; // +0x8
    BOOL _isCache; // +0x9
    unsigned int _totalLikeCount; // +0xc
    NSString * _query; // +0x10
    NSString * _searchId; // +0x18
    NSString * _bypassInfo; // +0x20
    NSString * _mixerCommonContext; // +0x28
    NSString * _docInfo; // +0x30
    NSArray * _friendLikeList; // +0x38
}
- (id)query;
- (void)setQuery:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (id)bypassInfo;
- (void)setBypassInfo:(id)arg1;
- (unsigned int)totalLikeCount;
- (void)setTotalLikeCount:(unsigned int)arg1;
- (id)mixerCommonContext;
- (void)setMixerCommonContext:(id)arg1;
- (id)docInfo;
- (void)setDocInfo:(id)arg1;
- (id)friendLikeList;
- (void)setFriendLikeList:(id)arg1;
- (BOOL)showFriendLike;
- (void)setShowFriendLike:(BOOL)arg1;
- (BOOL)isCache;
- (void)setIsCache:(BOOL)arg1;
- (void).cxx_destruct;
@end
