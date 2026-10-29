@interface SearchEmoticonExceptionCell : UICollectionViewCell
{
    BOOL _loading; // +0x8
    BOOL _enableWebSearch; // +0x9
    NSString * _wording; // +0x10
    id <EmoticonSearchCollectionComponentDelegate> _delegate; // +0x18
    SightIconView * _sightIconView; // +0x20
    UILabel * _wordingLabel; // +0x28
    EmoticonCellLikeButton * _webSearchButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)sightIconView;
- (id)wordingLabel;
- (void)setLoading:(BOOL)arg1;
- (void)setWording:(id)arg1;
- (void)refreshView;
- (void)setEnableWebSearch:(BOOL)arg1;
- (id)genWebSearchButton;
- (void)onTapWebSearchButton;
- (id)wording;
- (BOOL)isLoading;
- (BOOL)enableWebSearch;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSightIconView:(id)arg1;
- (void)setWordingLabel:(id)arg1;
- (id)webSearchButton;
- (void)setWebSearchButton:(id)arg1;
- (void).cxx_destruct;
@end
