@interface MMFinderLiveUpdateNewSongListTask : NSObject
{
    int _type; // +0x8
    NSArray * _songItems; // +0x10
    id /* block */ _completeBlock; // +0x18
}
- (int)type;
- (void)setType:(int)arg1;
- (id)songItems;
- (void)setSongItems:(id)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
