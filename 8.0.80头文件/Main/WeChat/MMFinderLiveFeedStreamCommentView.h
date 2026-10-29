@interface MMFinderLiveFeedStreamCommentView : MMFinderLiveFeedStreamWidgetBaseView <IMMFontMgrExt>
{
    BOOL _isCloseComment; // +0x8
    BOOL _hasAppendComment; // +0x9
    BOOL _isLayoutStandardChanged; // +0xa
    BOOL _isLayoutFontScaleChanged; // +0xb
    unsigned long long _style; // +0x10
    unsigned long long _limitedDisplayCommentCount; // +0x18
    id /* block */ _actionBlock; // +0x20
    MMLiveFeedStreamCommentContentView * _commentContentView; // +0x28
    double _currentLayoutStandardWidth; // +0x30
    double _currentLayoutStandardLeft; // +0x38
    double _currentLayoutFontScale; // +0x40
}
- (void)setTaskId:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)handleLayoutOrientationChangedBeforeLayout;
- (void)handleLayoutOrientationChangedAfterLayout;
- (void)judgeLayoutStandardWidthChanged;
- (void)judgeLayoutFontScaleChanged;
- (void)initDefaultLayoutStandard;
- (void)initDefaultLayoutFontScale;
- (void)updateLayoutStandardWidth;
- (double)commentTableContentWidth;
- (double)commentTableWidth;
- (void)updateLayoutFontScale;
- (BOOL)needPreAppendAnchorNotice;
- (void)preAppendComments:(id)arg1;
- (void)appendScrollToBottom:(BOOL)arg1;
- (void)appendCommentDataItemList:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3 preAppend:(BOOL)arg4;
- (id)createCommentTableViewModelForCommentContentView:(id)arg1 boxId:(id)arg2;
- (id)createCommentContentView;
- (id)commentTableViewModel;
- (void)onFontSizeChange;
- (void)startExposeAction;
- (void)endExposeAction;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)limitedDisplayCommentCount;
- (void)setLimitedDisplayCommentCount:(unsigned long long)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)commentContentView;
- (void)setCommentContentView:(id)arg1;
- (BOOL)isCloseComment;
- (void)setIsCloseComment:(BOOL)arg1;
- (BOOL)hasAppendComment;
- (void)setHasAppendComment:(BOOL)arg1;
- (double)currentLayoutStandardWidth;
- (void)setCurrentLayoutStandardWidth:(double)arg1;
- (double)currentLayoutStandardLeft;
- (void)setCurrentLayoutStandardLeft:(double)arg1;
- (BOOL)isLayoutStandardChanged;
- (void)setIsLayoutStandardChanged:(BOOL)arg1;
- (double)currentLayoutFontScale;
- (void)setCurrentLayoutFontScale:(double)arg1;
- (BOOL)isLayoutFontScaleChanged;
- (void)setIsLayoutFontScaleChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end
