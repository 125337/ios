@interface WCFinderMentionSearchSection : NSObject
{
    NSString * _title; // +0x8
    NSMutableArray * _items; // +0x10
    long long _moreState; // +0x18
    unsigned long long _mentionType; // +0x20
    NSString * _showMoreWording; // +0x28
}
- (id)init;
- (void)reset;
- (long long)displayMoreState;
- (BOOL)hasMore;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (long long)moreState;
- (void)setMoreState:(long long)arg1;
- (unsigned long long)mentionType;
- (void)setMentionType:(unsigned long long)arg1;
- (id)showMoreWording;
- (void)setShowMoreWording:(id)arg1;
- (void).cxx_destruct;
@end
