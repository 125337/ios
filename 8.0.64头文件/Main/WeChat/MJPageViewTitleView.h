@interface MJPageViewTitleView : MMUIView <MJPageViewItemProtocol>
{
    id <MJPageViewDataSource> _dataSource; // +0x8
    id <MJPageViewInnerProtocol> _delegate; // +0x10
    NSArray * _items; // +0x18
    MMUIView * _contentView; // +0x20
    MJPageViewCursorView * _cursor; // +0x28
    double _progress; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setProgress:(double)arg1;
- (void)reloadData;
- (void)didTappedTitleItem:(id)arg1;
- (void)changeSelectedFrom:(long long)arg1 to:(long long)arg2 animated:(BOOL)arg3;
- (void)changeCursorProgress:(double)arg1;
- (id)contentView;
- (id)cursor;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCursor:(id)arg1;
- (double)progress;
- (void).cxx_destruct;
@end
