@interface TingPlayStatusView : UIView
{
    double _pagWidth; // +0x8
    PAGView * _pagView; // +0x10
    UIView * _coverLayerView; // +0x18
    NSString * _listenId; // +0x20
    TingItem * _tingItem; // +0x28
    NSString * _tid; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setPagWidth:(double)arg1;
- (void)updateTingItem:(id)arg1;
- (void)setPlayStatus:(int)arg1;
- (int)getCurPlayStatus;
- (void)layoutSubviews;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (id)player;
- (id)pagView;
- (id)coverLayerView;
- (double)pagWidth;
- (void)setPagView:(id)arg1;
- (void)setCoverLayerView:(id)arg1;
- (id)listenId;
- (void)setListenId:(id)arg1;
- (id)tingItem;
- (void)setTingItem:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (void).cxx_destruct;
@end
