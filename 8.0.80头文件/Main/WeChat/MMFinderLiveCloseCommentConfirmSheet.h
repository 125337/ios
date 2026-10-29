@interface MMFinderLiveCloseCommentConfirmSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    BOOL _hasConsumedInteraction; // +0x8
    UIViewController * _fromVC; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    id /* block */ _onConfirm; // +0x20
    id /* block */ _onCancel; // +0x28
    id /* block */ _onSensitiveLinkTap; // +0x30
    UILabel * _titleLabel; // +0x38
    RichTextView * _descView; // +0x40
    double _lastLayoutWidth; // +0x48
}
+ (void)showFromVC:(id)arg1 taskId:(id)arg2 onConfirm:(id /* block */)arg3 onCancel:(id /* block */)arg4 onSensitiveLinkTap:(id /* block */)arg5;
- (id)initWithFromVC:(id)arg1 taskId:(id)arg2 onConfirm:(id /* block */)arg3 onCancel:(id /* block */)arg4 onSensitiveLinkTap:(id /* block */)arg5;
- (void)initializeComponents;
- (id)sensitiveDescContent;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (void)layoutContentIfNeeded;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id /* block */)onSensitiveLinkTap;
- (void)setOnSensitiveLinkTap:(id /* block */)arg1;
- (BOOL)hasConsumedInteraction;
- (void)setHasConsumedInteraction:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
