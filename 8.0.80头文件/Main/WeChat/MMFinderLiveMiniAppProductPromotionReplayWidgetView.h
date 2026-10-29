@interface MMFinderLiveMiniAppProductPromotionReplayWidgetView : UIView
{
    unsigned long long _productID; // +0x8
    MMFinderLiveTaskId * _taskID; // +0x10
    FinderLiveGetProductPromoteReplayWidgetResp * _data; // +0x18
    AnyPromise * _loadDataPromise; // +0x20
    MMWebImageView * _imageView; // +0x28
    UIImageView * _iconView; // +0x30
    UILabel * _label; // +0x38
    UIView * _borderView; // +0x40
}
- (id)initWithTaskID:(id)arg1 productID:(unsigned long long)arg2;
- (void)loadDataIfNever;
- (void)requestWillDisplayOrNot:(id /* block */)arg1;
- (void)onClicked;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutOnParent;
- (unsigned long long)productID;
- (void)setProductID:(unsigned long long)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)loadDataPromise;
- (void)setLoadDataPromise:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (void).cxx_destruct;
@end
