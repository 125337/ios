@interface MMFinderLiveQuickCommentView : UIView <IMMFontMgrExt>
{
    id <MMFinderLiveQuickCommentViewDelegate> _delegate; // +0x8
    double _preferHeight; // +0x10
    double _preferWidth; // +0x18
    double _maxWidthLimit; // +0x20
    NSMutableArray * _itemViewArr; // +0x28
    NSMutableArray * _lineViewArr; // +0x30
    UIView * _backgroundView; // +0x38
    double _itemViewHeight; // +0x40
}
- (id)init;
- (void)layoutSubviews;
- (void)layoutCommentLines;
- (void)layoutBackgroundView;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)updatePreferHeight;
- (void)updatePreferWidth;
- (void)updateMaxWidthLimit:(double)arg1;
- (void)updateWithItemArray:(id)arg1 taskId:(id)arg2;
- (void)updateQuickCommentItemView:(id)arg1 taskId:(id)arg2;
- (BOOL)checkDataChanged:(id)arg1;
- (void)updateQuickCommentLine;
- (void)checkIfCurrentViewExposed;
- (unsigned long long)getLineViewCount;
- (void)onQuickCommentItemViewClicked:(id)arg1;
- (void)onQuickCommentItemViewExposed:(id)arg1;
- (id)backgroundView;
- (double)lineViewHeight;
- (void)onFontSizeChange;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)preferHeight;
- (void)setPreferHeight:(double)arg1;
- (double)preferWidth;
- (void)setPreferWidth:(double)arg1;
- (double)maxWidthLimit;
- (void)setMaxWidthLimit:(double)arg1;
- (id)itemViewArr;
- (void)setItemViewArr:(id)arg1;
- (id)lineViewArr;
- (void)setLineViewArr:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (double)itemViewHeight;
- (void)setItemViewHeight:(double)arg1;
- (void).cxx_destruct;
@end
