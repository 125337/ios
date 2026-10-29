@interface WCFinderTagListView : UIView
{
    BOOL _autoAdjustHeight; // +0x8
    id <WCFinderTagListViewDelegate> _delegate; // +0x10
    WCFinderTagListViewLayout * _layout; // +0x18
    WCFinderTagListViewOptions * _options; // +0x20
    NSMutableArray * _tagLabels; // +0x28
    UIButton * _expandButton; // +0x30
    double _allTagNoWrapWidth; // +0x38
    long long _mmUIUserInterfaceStyle; // +0x40
}
+ (double)displayHeightWithItems:(id)arg1 options:(id)arg2 width:(double)arg3;
+ (double)displayHeightWithLayout:(id)arg1 options:(id)arg2 width:(double)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (id)options;
- (void)setItems:(id)arg1;
- (id)items;
- (void)setLayout:(id)arg1;
- (void)reLayout;
- (void)updateTagsLabels;
- (void)updateExpandButton;
- (void)updateExpandButtonStyle;
- (void)setupCloseBtnTextStyle;
- (void)setupCloseBtnIconStyle;
- (id)createLabel;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)updateLabel:(id)arg1 selected:(BOOL)arg2;
- (void)updateAccessibilityForLabel:(id)arg1;
- (BOOL)isLabelSelected:(id)arg1;
- (id)selectedLabel;
- (id)selectedItem;
- (void)setSelectedItem:(id)arg1;
- (void)onTapLabel:(id)arg1;
- (void)onExpandButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)layout;
- (void)setOptions:(id)arg1;
- (BOOL)autoAdjustHeight;
- (void)setAutoAdjustHeight:(BOOL)arg1;
- (id)tagLabels;
- (void)setTagLabels:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (double)allTagNoWrapWidth;
- (void)setAllTagNoWrapWidth:(double)arg1;
- (long long)mmUIUserInterfaceStyle;
- (void)setMmUIUserInterfaceStyle:(long long)arg1;
- (void).cxx_destruct;
@end

