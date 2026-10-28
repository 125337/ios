@interface MMFinderLiveShopContext_HintModel : NSObject
{
    MMFinderLiveShopShelfHintInfo * _nextHint; // +0x8
    MMFinderLiveShopContext * _context; // +0x10
}
- (id)initWithContext:(id)arg1;
- (id)history;
- (void)updateWithShopShelfInfo:(id)arg1;
- (void)willShowHint:(id)arg1;
- (id)nextHint;
- (void)setNextHint:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
