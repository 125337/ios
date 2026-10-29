@interface WCTimelinePostTipsViewModel : NSObject
{
    long long _tipsViewType; // +0x8
    double _viewWidth; // +0x10
    NSString * _postTips; // +0x18
    WCDataItem * _dataItem; // +0x20
}
- (id)initWithDataItem:(id)arg1;
- (void)updateWithDataItem:(id)arg1;
- (id)postTips;
- (long long)tipsViewType;
- (void)setTipsViewType:(long long)arg1;
- (double)viewWidth;
- (void)setViewWidth:(double)arg1;
- (void)setPostTips:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
