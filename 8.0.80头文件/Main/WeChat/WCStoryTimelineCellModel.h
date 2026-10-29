@interface WCStoryTimelineCellModel : NSObject
{
    BOOL _isFavour; // +0x8
    BOOL _hasRead; // +0x9
    BOOL _isMessageCell; // +0xa
    NSString * _displayName; // +0x10
    NSString * _username; // +0x18
    long long _cornerCount; // +0x20
    NSArray * _interactiveUsernameArray; // +0x28
}
+ (id)timelineCellWithContact:(id)arg1;
+ (id)timelineCellWithContact:(id)arg1 dataItem:(id)arg2;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (BOOL)isFavour;
- (void)setIsFavour:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)hasRead;
- (void)setHasRead:(BOOL)arg1;
- (BOOL)isMessageCell;
- (void)setIsMessageCell:(BOOL)arg1;
- (long long)cornerCount;
- (void)setCornerCount:(long long)arg1;
- (id)interactiveUsernameArray;
- (void)setInteractiveUsernameArray:(id)arg1;
- (void).cxx_destruct;
@end
