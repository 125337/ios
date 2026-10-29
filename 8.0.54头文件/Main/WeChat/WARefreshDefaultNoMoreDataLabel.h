@interface WARefreshDefaultNoMoreDataLabel : UIView
{
    int _lineWordsInterval; // +0x8
    UIView * _lineLeftView; // +0x10
    UIView * _lineRightView; // +0x18
    MMUILabel * _noMoreTipsLabel; // +0x20
}
- (id)init;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)updateWords:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (id)lineLeftView;
- (id)lineRightView;
- (id)noMoreTipsLabel;
- (void)setLineLeftView:(id)arg1;
- (void)setLineRightView:(id)arg1;
- (void)setNoMoreTipsLabel:(id)arg1;
- (int)lineWordsInterval;
- (void)setLineWordsInterval:(int)arg1;
- (void).cxx_destruct;
@end

