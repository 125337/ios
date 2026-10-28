@interface WCMusicSearchTextFieldController : MMUIViewController <UITextFieldDelegate>
{
    BOOL _showLeftBackButton; // +0x70
    BOOL _showRightCancelButton; // +0x71
    double _lazySearchTimeInterval; // +0x78
    UIView * _contentView; // +0x80
    double _customCancelButtonFontSize; // +0x88
    long long _clearButtonMode; // +0x90
    UIColor * _headerSearchTextFieldBgViewColor; // +0x98
    double _searchTextFieldBgViewLayerCornerRadius; // +0xa0
    double _searchTextIconAndBgViewExpandMargin; // +0xa8
    double _searchTextFieldIconExpandMargin; // +0xb0
    double _textFieldFontSize; // +0xb8
    NSString * _textFieldPlaceholderStr; // +0xc0
    UIView * _emptyMaskView; // +0xc8
    MMTagTextField * _headerSearchTextField; // +0xd0
    UIView * _headerSearchTextFieldBgView; // +0xd8
    UIImageView * _headerSearchLeftIconView; // +0xe0
    UIView * _searchHeaderBgView; // +0xe8
    MMUIButton * _leftBackButton; // +0xf0
    MMUIButton * _cancelButton; // +0xf8
    CGSize _customHeaderSearchLeftIconViewSize; // +0x100
    UIEdgeInsets _searchAreaContentEdgeInsets; // +0x110
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initSearchTextField;
- (void)setSearchTextFieldBgViewLayerCornerRadius:(double)arg1;
- (void)setTextFieldFontSize:(double)arg1;
- (void)setTextFieldPlaceholderStr:(id)arg1;
- (void)initSearchHeaderBgView;
- (void)initLeftBackButton;
- (void)setClearButtonMode:(long long)arg1;
- (void)setHeaderSearchTextFieldBgViewColor:(id)arg1;
- (void)layoutSearchHeaderView;
- (void)viewWillLayoutSubviews;
- (void)updateText:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)handleScrollViewWillBeginDragging:(id)arg1;
- (void)onTextChanged:(id)arg1;
- (void)onTextCleared;
- (void)onDoneButtonClicked;
- (void)onLeftBackButtonClicked;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onBackButtonClicked;
- (id)emptyMaskView;
- (id)contentView;
- (id)cancelButton;
- (double)lazySearchTimeInterval;
- (void)setLazySearchTimeInterval:(double)arg1;
- (void)setContentView:(id)arg1;
- (BOOL)showLeftBackButton;
- (void)setShowLeftBackButton:(BOOL)arg1;
- (BOOL)showRightCancelButton;
- (void)setShowRightCancelButton:(BOOL)arg1;
- (double)customCancelButtonFontSize;
- (void)setCustomCancelButtonFontSize:(double)arg1;
- (CGSize)customHeaderSearchLeftIconViewSize;
- (void)setCustomHeaderSearchLeftIconViewSize:(CGSize)arg1;
- (long long)clearButtonMode;
- (id)headerSearchTextFieldBgViewColor;
- (UIEdgeInsets)searchAreaContentEdgeInsets;
- (void)setSearchAreaContentEdgeInsets:(UIEdgeInsets)arg1;
- (double)searchTextFieldBgViewLayerCornerRadius;
- (double)searchTextIconAndBgViewExpandMargin;
- (void)setSearchTextIconAndBgViewExpandMargin:(double)arg1;
- (double)searchTextFieldIconExpandMargin;
- (void)setSearchTextFieldIconExpandMargin:(double)arg1;
- (double)textFieldFontSize;
- (id)textFieldPlaceholderStr;
- (void)setEmptyMaskView:(id)arg1;
- (id)headerSearchTextField;
- (void)setHeaderSearchTextField:(id)arg1;
- (id)headerSearchTextFieldBgView;
- (void)setHeaderSearchTextFieldBgView:(id)arg1;
- (id)headerSearchLeftIconView;
- (void)setHeaderSearchLeftIconView:(id)arg1;
- (id)searchHeaderBgView;
- (void)setSearchHeaderBgView:(id)arg1;
- (id)leftBackButton;
- (void)setLeftBackButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end
