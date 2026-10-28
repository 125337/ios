@interface SolitaireDisplayViewController : MMUIViewController <SolitaireToolViewDelegate, SolitaireToolLogicControllerDelegate, TransitioningAnimationDelegate, MMRTCMenuResponderDelegate, MMRichTextSelectEventDelegate, scrollViewDelegate, UITableViewDelegate, UITableViewDataSource, MMGrowTextViewDelegate, SolitaireDisplayTableViewCellDelegate, MMTableViewDelegate>
{
    BOOL _bAddNewLine; // +0x70
    BOOL _bFocusTitle; // +0x71
    BOOL _hasExampleItem; // +0x72
    BOOL _isTextViewFixOnKeyBoard; // +0x73
    id <SolitaireDisplayViewControllerDelegate> _delegate; // +0x78
    SolitaireObj * _solitaireObj; // +0x80
    MMGrowTextView * _headTextView; // +0x88
    MMGrowTextView * _tailTextView; // +0x90
    SolitaireToolView * _toolView; // +0x98
    SolitaireToolLogicController * _toolLogicController; // +0xa0
    MMTextView * _currentTextView; // +0xa8
    unsigned long long _enterScene; // +0xb0
    MMHeadImageView * _headImageView; // +0xb8
    UILabel * _infoLabel; // +0xc0
    CContact * _contact; // +0xc8
    MMGrowTextView * _textViewtoCalculate; // +0xd0
    CrossfadeAnimationController * _transitionInstance; // +0xd8
    MMTableView * _tableView; // +0xe0
    MMUIView * _tableHeadView; // +0xe8
    UIView * _headLineView; // +0xf0
    MMUIView * _tableTailView; // +0xf8
    NSMutableArray * _solitaireArray; // +0x100
    UIButton * _addButton; // +0x108
    double _keyboardHeight; // +0x110
    NSString * _cacheHeadText; // +0x118
    NSString * _cacheTailText; // +0x120
    NSMutableSet * _nameSet; // +0x128
    double _defaultKeyboardHeight; // +0x130
}
- (void)initToolView;
- (void)updateToolBarHeight:(double)arg1;
- (BOOL)checkFirstResponderIsMMTextView;
- (void)onClickLocationToolBtn;
- (void)onClickTelephoneToolBtn;
- (void)onClickTimeToolBtn;
- (void)reportClickType:(unsigned long long)arg1;
- (unsigned long long)getCurActiveInputSourceType;
- (id)getViewController;
- (void)onGetResult:(id)arg1 FromToolType:(unsigned int)arg2;
- (id)getChatName;
- (id)initWithSolitaireObj:(id)arg1;
- (id)tableView;
- (id)tableHeadView;
- (id)makeLineView;
- (id)headImageView;
- (id)infoLabel;
- (id)headTextView;
- (id)tailTextView;
- (id)addButton;
- (id)tableTailView;
- (void)initNavigationBar;
- (id)textViewtoCalculate;
- (void)resetTextViewtoCalculateSize:(CGSize)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)shouldInteractiveDismiss;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)getHeightWithText:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)keyboardWillShow:(double)arg1;
- (void)onKeyboardWillHide;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)textViewOfCellDidEnterNilOfOriginItem:(id)arg1;
- (void)textOfCellDidChange:(id)arg1 ofOriginItem:(id)arg2;
- (void)keyboardOfCellWillAppear:(double)arg1 ofCell:(id)arg2;
- (void)textViewOfCellBeginEditing:(id)arg1;
- (void)adjustTableContentOffsetWhenShowKeyboard:(id)arg1 keyboardHeight:(double)arg2;
- (void)textViewOfCellHeightDidChanged:(id)arg1 withOriginalText:(id)arg2 andNewText:(id)arg3;
- (BOOL)textViewOfCellForbidEdit:(id)arg1;
- (BOOL)isAddButtonHidden;
- (void)onBeFirstResponderAndShowKeyboard:(id)arg1 keyboardHeight:(double)arg2;
- (void)setSendButtonIfEnable;
- (BOOL)isSendButtonEnable;
- (BOOL)isSolitaireArrayHasTrueCotent;
- (void)checkRemoveNoCotentSolitaireItem;
- (BOOL)isAllContentChanged;
- (id)getTrimmedSoliatireArray;
- (void)scrollLastCellToVisible:(id)arg1;
- (void)onAddLineBtnClick;
- (void)addNewLine;
- (id)getNewItemCotent;
- (void)OnCancel;
- (void)onCancelAlertViewCancel;
- (void)exitSolitaireFormatInput;
- (void)onSolitaire:(id)arg1;
- (void)sendSolitaire;
- (void)onSolitaireAlertViewCancel;
- (void)onSolitaireAlertViewconfirm;
- (void)hideKeyboard;
- (BOOL)mmTableView:(id)arg1 shouldBeginRecognizeGesture:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bAddNewLine;
- (void)setBAddNewLine:(BOOL)arg1;
- (BOOL)bFocusTitle;
- (void)setBFocusTitle:(BOOL)arg1;
- (id)solitaireObj;
- (void)setSolitaireObj:(id)arg1;
- (void)setHeadTextView:(id)arg1;
- (void)setTailTextView:(id)arg1;
- (id)toolView;
- (void)setToolView:(id)arg1;
- (id)toolLogicController;
- (void)setToolLogicController:(id)arg1;
- (id)currentTextView;
- (void)setCurrentTextView:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void)setTextViewtoCalculate:(id)arg1;
- (id)transitionInstance;
- (void)setTransitionInstance:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTableHeadView:(id)arg1;
- (id)headLineView;
- (void)setHeadLineView:(id)arg1;
- (void)setTableTailView:(id)arg1;
- (id)solitaireArray;
- (void)setSolitaireArray:(id)arg1;
- (void)setAddButton:(id)arg1;
- (BOOL)hasExampleItem;
- (void)setHasExampleItem:(BOOL)arg1;
- (BOOL)isTextViewFixOnKeyBoard;
- (void)setIsTextViewFixOnKeyBoard:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)cacheHeadText;
- (void)setCacheHeadText:(id)arg1;
- (id)cacheTailText;
- (void)setCacheTailText:(id)arg1;
- (id)nameSet;
- (void)setNameSet:(id)arg1;
- (double)defaultKeyboardHeight;
- (void)setDefaultKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end
