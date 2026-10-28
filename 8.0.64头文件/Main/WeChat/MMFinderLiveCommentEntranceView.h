@interface MMFinderLiveCommentEntranceView : UIView
{
    BOOL _isSelected; // +0x8
    BOOL _hasRedDot; // +0x9
    id /* block */ _commentEntranceDidTapCallback; // +0x10
    id /* block */ _commentEntranceSizeDidChangeCallback; // +0x18
    id /* block */ _commentEntranceSelectedChangeCallback; // +0x20
    UILabel * _groupNameLabel; // +0x28
    UIView * _redDotView; // +0x30
    UIView * _bottomLineView; // +0x38
    FinderLiveBoxId * _boxId; // +0x40
}
+ (double)preferTopMargin;
+ (double)preferHeight;
- (id)initWithBoxId:(id)arg1;
- (void)addGestures;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutGroupNameLabel;
- (void)layoutRedDotView;
- (void)layoutBottomLineView;
- (void)updateGroupName;
- (void)updateGroupNameLabelAlpha;
- (void)updateSelfSize;
- (void)updateHasRedDot:(BOOL)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (void)onEntranceDidTaped:(id)arg1;
- (BOOL)isSelected;
- (id /* block */)commentEntranceDidTapCallback;
- (void)setCommentEntranceDidTapCallback:(id /* block */)arg1;
- (id /* block */)commentEntranceSizeDidChangeCallback;
- (void)setCommentEntranceSizeDidChangeCallback:(id /* block */)arg1;
- (id /* block */)commentEntranceSelectedChangeCallback;
- (void)setCommentEntranceSelectedChangeCallback:(id /* block */)arg1;
- (id)groupNameLabel;
- (void)setGroupNameLabel:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (id)boxId;
- (void)setBoxId:(id)arg1;
- (BOOL)hasRedDot;
- (void)setHasRedDot:(BOOL)arg1;
- (void).cxx_destruct;
@end
