@interface RelatedEmoticonCollectionExceptionCell : UICollectionViewCell
{
    BOOL _loading; // +0x8
    NSString * _wording; // +0x10
    MMUIActivityIndicatorView * _indicatorView; // +0x18
    UILabel * _wordingLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setWording:(id)arg1;
- (void)refreshView;
- (id)wording;
- (BOOL)isLoading;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (void).cxx_destruct;
@end

