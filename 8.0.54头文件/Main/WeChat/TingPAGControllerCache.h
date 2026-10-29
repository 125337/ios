@interface TingPAGControllerCache : NSObject
{
    NSMutableDictionary * _dictControllerCache; // +0x8
}
- (id)init;
- (BOOL)canUsePAGCover:(id)arg1;
- (id)getOrCreatePAGCoverController:(id)arg1;
- (id)dictControllerCache;
- (void)setDictControllerCache:(id)arg1;
- (void).cxx_destruct;
@end

