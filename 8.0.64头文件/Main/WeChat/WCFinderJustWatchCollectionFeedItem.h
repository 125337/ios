@interface WCFinderJustWatchCollectionFeedItem : NSObject
{
    BOOL _videoCompleted; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
}
- (id)initWithDataItem:(id)arg1 videoCompleted:(BOOL)arg2;
- (id)collectionInfo;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)videoCompleted;
- (void)setVideoCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end
