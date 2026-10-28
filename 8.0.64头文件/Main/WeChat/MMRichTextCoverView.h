@interface MMRichTextCoverView : UIView <WCActionSheetDelegate, MMSceneDelegateExt, UIGestureRecognizerDelegate, UIScrollViewDelegate, MMRTCMenuSelectDelegate, RichTextViewSelectProtocol>
{
    BOOL _disableCursor; // +0x8
    BOOL _bScrolling; // +0x9
    BOOL _disableSelectAll; // +0xa
    BOOL _disableForward; // +0xb
    BOOL _disableCopy; // +0xc
    BOOL _canBeRemoved; // +0xd
    BOOL _isSceneSizeChanged; // +0xe
    id <MMRichTextSelectEventDelegate> _textSelectEventDelegate; // +0x10
    id <MMRichTextCoverViewDelegate> _delegate; // +0x18
    UIColor * _selectedColor; // +0x20
    UIColor * _cursorColor; // +0x28
    NSArray * _searchKeyWords; // +0x30
    MMRTCMenuResponder * _menuResponder; // +0x38
    NSMutableArray * _pathRects; // +0x40
    MMCursorView * _leftCursor; // +0x48
    MMCursorView * _rightCursor; // +0x50
    MMMagnifiterView * _magnifiterView; // +0x58
    NSString * _textString; // +0x60
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x68
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x70
    UITapGestureRecognizer * _singleTapGestureRecognizer; // +0x78
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x80
    long long _scrollDecelerateSeq; // +0x88
    CAShapeLayer * _shapeLayer; // +0x90
    _NSRange _selectedRange; // +0x98
    CGPoint _touchPoint; // +0xa8
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1 EventDelegate:(id)arg2 MenuResponder:(id)arg3;
- (void)initShapeLayer;
- (void)setSelectedColor:(id)arg1;
- (void)dealloc;
- (id)textString;
- (void)onSingleTap:(id)arg1;
- (void)addGestureRecognizer;
- (void)addPanGestureRecognizer;
- (void)addSingleTapGestureRecognizer;
- (void)addLongPressGestureRecognizer;
- (void)addDoubleTapGestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)selectWithRange:(_NSRange)arg1;
- (void)selectAllText;
- (id)highlightTextWithRange:(_NSRange)arg1 showCursor:(BOOL)arg2;
- (void)onPanAction:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)setCanBeRemoved:(BOOL)arg1;
- (void)onMenuWillHide;
- (BOOL)onClickPreViewWithPoint:(CGPoint)arg1 DoubleClick:(BOOL)arg2;
- (void)exitSelectState;
- (BOOL)touchPointInSelectPath:(CGPoint)arg1;
- (void)longPressAction:(id)arg1;
- (void)searchAndHighlightKeyWord:(id)arg1;
- (_NSRange)getSelectRange;
- (void)setPathRects:(id)arg1;
- (void)setNeedsReloadView;
- (CGPath *)generateSelectAreaPathWithCorner;
- (void)drawInShapeLayer;
- (CGPoint)getLongPressSelectCenter;
- (BOOL)pointIsVisableInScreen:(CGPoint)arg1;
- (BOOL)CTRectContainsPointError:(CGRect)arg1 point:(CGPoint)arg2 error:(double)arg3;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)hideMenuUI;
- (void)showSelectMenu;
- (void)showMenuWithItems:(id)arg1;
- (CGRect)getSelectedRect;
- (void)resetCursor:(id)arg1;
- (id)getSelectContent;
- (_NSRange)getSelectContentRange;
- (id)getViewController;
- (void)clearSelectArea;
- (void)showCursor;
- (void)removeCursor;
- (void)removeMaginfierView;
- (id)magnifiterView;
- (void)scrollUp;
- (void)scrollDown;
- (void)onDidEndScrolling;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onBecomeActive;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)onMainSceneSizeChangedFrom:(CGSize)arg1 to:(CGSize)arg2;
- (id)textSelectEventDelegate;
- (void)setTextSelectEventDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedColor;
- (id)cursorColor;
- (void)setCursorColor:(id)arg1;
- (BOOL)disableCursor;
- (void)setDisableCursor:(BOOL)arg1;
- (id)searchKeyWords;
- (void)setSearchKeyWords:(id)arg1;
- (id)menuResponder;
- (void)setMenuResponder:(id)arg1;
- (BOOL)bScrolling;
- (void)setBScrolling:(BOOL)arg1;
- (BOOL)disableSelectAll;
- (void)setDisableSelectAll:(BOOL)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (BOOL)disableCopy;
- (void)setDisableCopy:(BOOL)arg1;
- (BOOL)canBeRemoved;
- (id)pathRects;
- (id)leftCursor;
- (void)setLeftCursor:(id)arg1;
- (id)rightCursor;
- (void)setRightCursor:(id)arg1;
- (void)setMagnifiterView:(id)arg1;
- (void)setTextString:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (id)singleTapGestureRecognizer;
- (void)setSingleTapGestureRecognizer:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (_NSRange)selectedRange;
- (void)setSelectedRange:(_NSRange)arg1;
- (CGPoint)touchPoint;
- (void)setTouchPoint:(CGPoint)arg1;
- (BOOL)isSceneSizeChanged;
- (void)setIsSceneSizeChanged:(BOOL)arg1;
- (long long)scrollDecelerateSeq;
- (void)setScrollDecelerateSeq:(long long)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void).cxx_destruct;
@end
