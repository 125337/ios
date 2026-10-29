@interface WCFinderTabSwitchView : UIView
{
    BOOL _allowEmptySelect; // +0x8
    BOOL _enableSelectBack; // +0x9
    BOOL _dataSourceImplUniqueFunc; // +0xa
    BOOL _delegateImplExposeFunc; // +0xb
    BOOL _ignoreScrollProcess; // +0xc
    id <WCFinderTabSwitchViewDelegate> _delegate; // +0x10
    id <WCFinderTabSwitchViewDataSource> _dataSource; // +0x18
    unsigned long long _tabNumber; // +0x20
    double _itemPadding; // +0x28
    double _cursorPaddingTitle; // +0x30
    double _switchAnimationDuration; // +0x38
    double _titleFontSize; // +0x40
    double _barExpandSize; // +0x48
    NSMutableArray * _entryBtnArray; // +0x50
    NSMutableSet * _exposeItems; // +0x58
    UIView * _bar; // +0x60
    UIScrollView * _scrollView; // +0x68
    UIView * _lineView; // +0x70
    NSMutableDictionary * _textColors; // +0x78
    NSMutableDictionary * _customViewInfos; // +0x80
    unsigned long long _processDequeueIdx; // +0x88
    WCFinderTabSwitchCustomViewInfo * _dequeueUseInfo; // +0x90
    NSMutableArray * _reuseTabButtons; // +0x98
    NSMutableArray * _selectedStack; // +0xa0
    WCFinderTabFontFactory * _fontFactory; // +0xa8
    UIEdgeInsets _contentInsets; // +0xb0
}
+ (double)displayHeightWithInsets:(UIEdgeInsets)arg1;
+ (double)displayHeightWithInsets:(UIEdgeInsets)arg1 titleFontSize:(double)arg2 cursorPaddingTitle:(double)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitleFontSize:(double)arg1;
- (void)setupUI;
- (void)setTextColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setDisplayBottomLine:(BOOL)arg1;
- (BOOL)displayBottomLine;
- (void)setDisplayCursorBar:(BOOL)arg1;
- (BOOL)displayCursorBar;
- (id)containerView;
- (id)scrollView;
- (double)scrollOffsetX;
- (void)setScrollOffsetX:(double)arg1;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)reloadData;
- (id)ensureDisplayTabItemAtIndex:(long long)arg1;
- (id)findReuseButton:(long long)arg1 hash:(unsigned long long)arg2;
- (void)updateItemTextColor:(id)arg1;
- (void)updateCustomViewBtnColor:(id)arg1;
- (void)updateAllItemTextColor;
- (unsigned long long)selected;
- (id)selectedItemBtn;
- (void)updateButtons;
- (void)reloadTab:(long long)arg1;
- (void)clearTabUnreadCount:(long long)arg1;
- (id)tabViewAtIdx:(long long)arg1;
- (id)bar;
- (void)selectedIdx:(long long)arg1;
- (void)selectedIdx:(long long)arg1 animated:(BOOL)arg2 context:(void *)arg3 completion:(id /* block */)arg4;
- (void)onClickTabButton:(id)arg1;
- (void)updateSelectedWithButton:(id)arg1 animated:(BOOL)arg2 context:(void *)arg3 completion:(id /* block */)arg4;
- (void)setSelectedItem:(id)arg1;
- (CGRect)displayBarFrameForBtn:(id)arg1;
- (void)sizeToFit;
- (void)didMoveToWindow;
- (void)checkEposeItems;
- (void)cleanExposeItem;
- (void)layoutSubviews;
- (void)showToastForItem:(long long)arg1 toastView:(id)arg2 bgColor:(id)arg3 duration:(double)arg4;
- (void)updateScrollProgress:(double)arg1;
- (void)updateSelectedIndex:(long long)arg1;
- (long long)backSelected;
- (void)registerCustomView:(Class)arg1 forIdentifier:(id)arg2 configer:(id /* block */)arg3 updater:(id /* block */)arg4;
- (id)dequeueCustomView:(id)arg1;
- (id)delegate;
- (id)dataSource;
- (unsigned long long)tabNumber;
- (void)setTabNumber:(unsigned long long)arg1;
- (UIEdgeInsets)contentInsets;
- (double)itemPadding;
- (void)setItemPadding:(double)arg1;
- (double)cursorPaddingTitle;
- (void)setCursorPaddingTitle:(double)arg1;
- (BOOL)allowEmptySelect;
- (void)setAllowEmptySelect:(BOOL)arg1;
- (double)switchAnimationDuration;
- (void)setSwitchAnimationDuration:(double)arg1;
- (double)titleFontSize;
- (double)barExpandSize;
- (void)setBarExpandSize:(double)arg1;
- (BOOL)enableSelectBack;
- (void)setEnableSelectBack:(BOOL)arg1;
- (id)entryBtnArray;
- (void)setEntryBtnArray:(id)arg1;
- (id)exposeItems;
- (void)setExposeItems:(id)arg1;
- (BOOL)dataSourceImplUniqueFunc;
- (void)setDataSourceImplUniqueFunc:(BOOL)arg1;
- (BOOL)delegateImplExposeFunc;
- (void)setDelegateImplExposeFunc:(BOOL)arg1;
- (void)setBar:(id)arg1;
- (void)setScrollView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)textColors;
- (void)setTextColors:(id)arg1;
- (BOOL)ignoreScrollProcess;
- (void)setIgnoreScrollProcess:(BOOL)arg1;
- (id)customViewInfos;
- (void)setCustomViewInfos:(id)arg1;
- (unsigned long long)processDequeueIdx;
- (void)setProcessDequeueIdx:(unsigned long long)arg1;
- (id)dequeueUseInfo;
- (void)setDequeueUseInfo:(id)arg1;
- (id)reuseTabButtons;
- (void)setReuseTabButtons:(id)arg1;
- (id)selectedStack;
- (void)setSelectedStack:(id)arg1;
- (id)fontFactory;
- (void)setFontFactory:(id)arg1;
- (void).cxx_destruct;
@end

