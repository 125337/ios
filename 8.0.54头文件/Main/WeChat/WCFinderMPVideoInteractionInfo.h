@interface WCFinderMPVideoInteractionInfo : NSObject
{
    BOOL _isLike; // +0x8
    BOOL _isFav; // +0x9
    NSString * _feedKey; // +0x10
    unsigned long long _likeCount; // +0x18
    unsigned long long _favCount; // +0x20
}
+ (id)interactionInfoWithDataItem:(id)arg1;
- (id)feedKey;
- (void)setFeedKey:(id)arg1;
- (BOOL)isLike;
- (void)setIsLike:(BOOL)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (unsigned long long)favCount;
- (void)setFavCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

