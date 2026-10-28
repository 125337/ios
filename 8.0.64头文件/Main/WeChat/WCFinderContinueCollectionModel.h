@interface WCFinderContinueCollectionModel : NSObject
{
    int _commentScene; // +0x8
    unsigned long long _index; // +0x10
    FinderCollectionWatchingInfo * _collectionWatchingInfo; // +0x18
    NSDictionary * _reportDic; // +0x20
}
+ (id)getCollectionList:(id)arg1;
- (id)reportDic;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)collectionWatchingInfo;
- (void)setCollectionWatchingInfo:(id)arg1;
- (void)setReportDic:(id)arg1;
- (void).cxx_destruct;
@end
