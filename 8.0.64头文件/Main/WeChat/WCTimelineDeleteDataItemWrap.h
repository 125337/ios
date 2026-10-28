@interface WCTimelineDeleteDataItemWrap : NSObject
{
    WCDataItem * _deleteDataItem; // +0x8
    CGPoint _tableViewContentOffset; // +0x10
}
- (id)initWithDeleteDataItem:(id)arg1 tableViewContentOffset:(CGPoint)arg2;
- (id)deleteDataItem;
- (CGPoint)tableViewContentOffset;
- (void).cxx_destruct;
@end
