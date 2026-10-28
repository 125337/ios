@interface WCAdModeSelectView : MMUIButton
{
    BOOL _isRecommend; // +0x8
    MMUILabel * _mTitleLabel; // +0x10
    MMUILabel * _recommendLabel; // +0x18
    MMUILabel * _descLabel; // +0x20
    UIImageView * _selectTipView; // +0x28
    MMUIView * _titleMaskView; // +0x30
    MMUIView * _descMaskView; // +0x38
    MMUIView * _clickMaskView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 isRecommend:(BOOL)arg2;
- (void)initSubviews;
- (void)adjustUI;
- (void)showViewWithSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)hideView;
- (void)updateHeight:(double)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)titleMaskView;
- (id)descMaskView;
- (id)createMaskViewWithFrame:(CGRect)arg1;
- (id)mTitleLabel;
- (id)recommendLabel;
- (id)selectTipView;
- (id)descLabel;
- (void)setMTitleLabel:(id)arg1;
- (void)setRecommendLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setSelectTipView:(id)arg1;
- (BOOL)isRecommend;
- (void)setIsRecommend:(BOOL)arg1;
- (void)setTitleMaskView:(id)arg1;
- (void)setDescMaskView:(id)arg1;
- (id)clickMaskView;
- (void)setClickMaskView:(id)arg1;
- (void).cxx_destruct;
@end
