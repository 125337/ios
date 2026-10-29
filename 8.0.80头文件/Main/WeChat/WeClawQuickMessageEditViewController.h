@interface WeClawQuickMessageEditViewController : MMUIViewController <MMGrowTextViewWithExtrasDelegate, UIScrollViewDelegate>
{
    BOOL _isNotFriend; // +0x70
    BOOL _isEditMode; // +0x71
    id <WeClawQuickMessageEditDelegate> _editDelegate; // +0x78
    NSString * _userName; // +0x80
    ShortcutCommand * _editingCommand; // +0x88
    unsigned long long _editingIndex; // +0x90
    UIScrollView * _scrollView; // +0x98
    UILabel * _contentHeaderLabel; // +0xa0
    MMGrowTextViewWithExtras * _contentTextView; // +0xa8
    UILabel * _nameHeaderLabel; // +0xb0
    MMGrowTextViewWithExtras * _nameTextView; // +0xb8
    UIBarButtonItem * _doneBarButtonItem; // +0xc0
    NSString * _originalContent; // +0xc8
    NSString * _originalName; // +0xd0
}
- (id)initWithUserName:(id)arg1;
- (id)initWithUserName:(id)arg1 command:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)setupNavigationBar;
- (void)updateDoneButtonState;
- (id)p_createTextViewWithExtras:(double)arg1 maxLength:(unsigned long long)arg2 warningThreshold:(long long)arg3 placeholder:(id)arg4;
- (void)setupFormViews;
- (void)relayoutFormViews;
- (void)TextViewWithExtrasHeightDidChanged:(id)arg1;
- (void)TextViewDidChanged:(id)arg1;
- (void)MMGrowTextViewWithExtrasBeginEditing:(id)arg1;
- (void)p_keyboardWillShow:(id)arg1;
- (void)p_keyboardWillHide:(id)arg1;
- (void)p_scrollToVisibleView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onDone;
- (void)p_dismissSelf;
- (void)onCancel;
- (void)applyOfflineMode;
- (id)editDelegate;
- (void)setEditDelegate:(id)arg1;
- (BOOL)isNotFriend;
- (void)setIsNotFriend:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (BOOL)isEditMode;
- (void)setIsEditMode:(BOOL)arg1;
- (id)editingCommand;
- (void)setEditingCommand:(id)arg1;
- (unsigned long long)editingIndex;
- (void)setEditingIndex:(unsigned long long)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)contentHeaderLabel;
- (void)setContentHeaderLabel:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)nameHeaderLabel;
- (void)setNameHeaderLabel:(id)arg1;
- (id)nameTextView;
- (void)setNameTextView:(id)arg1;
- (id)doneBarButtonItem;
- (void)setDoneBarButtonItem:(id)arg1;
- (id)originalContent;
- (void)setOriginalContent:(id)arg1;
- (id)originalName;
- (void)setOriginalName:(id)arg1;
- (void).cxx_destruct;
@end
