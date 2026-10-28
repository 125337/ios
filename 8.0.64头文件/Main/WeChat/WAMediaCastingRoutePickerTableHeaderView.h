@interface WAMediaCastingRoutePickerTableHeaderView : UIView
{
    unsigned long long _type; // +0x8
    MMUILabel * _label; // +0x10
    NSString * _text; // +0x18
    MMProgressViewEx * _loadingView; // +0x20
}
- (id)initWithType:(unsigned long long)arg1 viewModel:(id)arg2;
- (void)layoutSubviews;
- (id)label;
- (id)loadingView;
- (void)updateRefreshingStatus:(BOOL)arg1;
- (unsigned long long)type;
- (void)setLabel:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
