@interface WCAdPreviewMaskView : MMUIView
{
    WCDataItem * _dataItem; // +0x8
    MMUIImageView * _maskImageView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2;
- (void)initView;
- (void)layoutSubviews;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)maskImageView;
- (void)setMaskImageView:(id)arg1;
- (void).cxx_destruct;
@end
