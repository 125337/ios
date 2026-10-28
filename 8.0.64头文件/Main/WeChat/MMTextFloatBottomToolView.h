@interface MMTextFloatBottomToolView : WCBottomBar
{
    UIButton * m_btnDetail; // +0x8
    NSString * m_nsTipsUrl; // +0x10
    id <MMTextFloatBottomToolViewDelegate> m_delegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 TipUrl:(id)arg2;
- (void)initSubView;
- (void)layoutSubviews;
- (void)onDetailBtnClicked;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
