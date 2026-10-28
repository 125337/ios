@interface MMMusicNoDotSelectItemDisplayViewBgView : MMUIView
{
    UIImageView * _hintImageView; // +0x8
    unsigned long long _curItemCount; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)changeSizeWithItemCount:(unsigned long long)arg1 itemSize:(CGSize)arg2 itemMargin:(double)arg3 itemInsets:(UIEdgeInsets)arg4;
- (id)hintImageView;
- (void)setHintImageView:(id)arg1;
- (unsigned long long)curItemCount;
- (void)setCurItemCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
