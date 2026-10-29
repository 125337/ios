@interface MultiSelectMsgTipView : MMUIView
{
    unsigned int m_selectMaxCount; // +0x8
    BOOL m_isArrowUp; // +0xc
    BOOL isDisableStatus; // +0xd
    MMUIView * m_contentView; // +0x10
    MMUIButton * m_bgButton; // +0x18
    MMUILabel * m_titleLabel; // +0x20
    MMUIImageView * m_arrowIcon; // +0x28
    BOOL m_isDisableStatus; // +0x30
    id <MultiSelectMsgTipViewDelegate> _delegate; // +0x38
}
+ (id)showTipWithDelegate:(id)arg1 parentView:(id)arg2 selectMaxCount:(unsigned int)arg3;
+ (double)getMultiSelectMsgTipViewHeight;
- (id)init;
- (void)initView;
- (void)performBgAction;
- (void)setContentHighlighted;
- (void)setContentNormal;
- (void)setArrowIconImage:(BOOL)arg1;
- (id)getArrowIconImage;
- (id)getArrowIconImageColor;
- (void)updateMultiSelectMsgTipViewStatue:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isDisableStatus;
- (void)setIsDisableStatus:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
