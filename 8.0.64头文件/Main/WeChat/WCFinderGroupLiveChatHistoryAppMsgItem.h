@interface WCFinderGroupLiveChatHistoryAppMsgItem : NSObject <PBCoding>
{
    BOOL _isLike; // +0x8
    unsigned int _likeNumber; // +0xc
    FinderLiveAppMsg * _liveAppMsg; // +0x10
    NSString * _itemKey; // +0x18
}
+ (void)PBArrayAdd_isLike;
+ (void)PBArrayAdd_likeNumber;
+ (void)PBArrayAdd_liveAppMsg;
+ (void)PBArrayAdd_itemKey;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isLike;
- (void)setIsLike:(BOOL)arg1;
- (unsigned int)likeNumber;
- (void)setLikeNumber:(unsigned int)arg1;
- (id)liveAppMsg;
- (void)setLiveAppMsg:(id)arg1;
- (id)itemKey;
- (void)setItemKey:(id)arg1;
- (void).cxx_destruct;
@end
