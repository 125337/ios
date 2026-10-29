@interface MMFinderLiveGoodsRecommendWordingEditView : UIControl
{
    BOOL _hasContent; // +0x8
    id /* block */ _onEditClicked; // +0x10
    UIImageView * _pencilIconView; // +0x18
    EcsRichTextLabel * _contentLabel; // +0x20
    UILabel * _actionLabel; // +0x28
}
+ (BOOL)willShowWithInfo:(id)arg1;
+ (double)viewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)handleTouchDown;
- (void)handleTouchUp;
- (void)updateActionColor:(id)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (void)onTapped;
- (id /* block */)onEditClicked;
- (void)setOnEditClicked:(id /* block */)arg1;
- (id)pencilIconView;
- (void)setPencilIconView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)actionLabel;
- (void)setActionLabel:(id)arg1;
- (BOOL)hasContent;
- (void)setHasContent:(BOOL)arg1;
- (void).cxx_destruct;
@end
