@interface MMFinderLiveSetQuickReplyView : MMPageSheetBaseView <MMFinderLiveSetQuickReplyTableDataDelegate>
{
    MMFinderLiveSetQuickReplyTableViewModel * _tableViewModel; // +0x8
    BOOL _hasContent; // +0x10
    BOOL _hasEdit; // +0x11
    id <MMFinderLiveSetQuickReplyViewDelegate> _operationDelegate; // +0x18
    CAShapeLayer * _shapeLayer; // +0x20
    UIView * _contentView; // +0x28
    MMFinderLiveQuickReplyViewNavBar * _navBar; // +0x30
    MMTableView * _quickReplyTableView; // +0x38
    FinderLiveQuickReplyWordingInfo * _model; // +0x40
    double _keyboardHeight; // +0x48
    long long _previousOrientation; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)pageSheetDidRotation;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)dealloc;
- (id)initWithQuickReplyModel:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)updateModel:(id)arg1;
- (void)updateInnerModel:(id)arg1;
- (void)pageSheetDidAppear;
- (id)changeModelWithModel:(id)arg1;
- (id)getNewWordingInfoWithModel:(id)arg1;
- (id)getEmptyQuickReplyModel;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (id)quickReplyTableView;
- (double)getLotteryTableHeight;
- (id)tableViewModel;
- (id)contentView;
- (id)navBar;
- (void)actionClick:(BOOL)arg1;
- (void)handleModelList:(id)arg1;
- (void)handleTextWithModel:(id)arg1;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (void)quickReplyTableAddButtonClick;
- (void)quickReplyTableCleanButtonClick:(id)arg1 dataArray:(id)arg2;
- (void)quickReplyTableTextViewDidChange:(id)arg1;
- (void)judgeCompleButtonState:(id)arg1;
- (BOOL)isEmptyDataArray:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setQuickReplyTableView:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)hasContent;
- (void)setHasContent:(BOOL)arg1;
- (BOOL)hasEdit;
- (void)setHasEdit:(BOOL)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (void).cxx_destruct;
@end
