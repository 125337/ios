@interface MMPickLocationTopView : UIView
{
    id <MMPickLocationActionDelegate> _actionDelegate; // +0x8
    MMUIButton * _foldedBtn; // +0x10
}
+ (double)PickLocationTopViewHeight;
- (id)init;
- (void)layoutSubviews;
- (id)foldedBtn;
- (void)onClickFoldedBtn;
- (void)displayFoldBtn;
- (void)hideFoldBtn;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (void)setFoldedBtn:(id)arg1;
- (void).cxx_destruct;
@end
