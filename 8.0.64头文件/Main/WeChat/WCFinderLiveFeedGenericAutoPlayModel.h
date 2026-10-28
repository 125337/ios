@interface WCFinderLiveFeedGenericAutoPlayModel : NSObject
{
    NSIndexPath * _first; // +0x8
    NSIndexPath * _last; // +0x10
}
- (BOOL)isEmpty;
- (BOOL)isSinglePlay;
- (BOOL)containIndexPath:(id)arg1;
- (void)removeIndexPath:(id)arg1;
- (void)removeAll;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)first;
- (void)setFirst:(id)arg1;
- (id)last;
- (void)setLast:(id)arg1;
- (void).cxx_destruct;
@end
