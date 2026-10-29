@interface WNImagePreviewView : UIView
{
    UIView * _headerView; // +0x8
    UIView * _bottomView; // +0x10
    UIView * _wnTextView; // +0x18
    UIColor * _bkgColor; // +0x20
}
- (id)initViewWithHeaderView:(id)arg1 andBottomView:(id)arg2 andWNTextView:(id)arg3 andBackgroundColor:(id)arg4 andSize:(CGSize)arg5;
- (void)setBkgColor:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)wnTextView;
- (void)setWnTextView:(id)arg1;
- (id)bkgColor;
- (void).cxx_destruct;
@end
