@interface AppHardWareRankMessageCellView : BaseMessageCellView
{
    UIImageView * m_bgImageView; // +0x28
    UILabel * m_scoreDisplay; // +0x30
    UILabel * m_scoreTitle; // +0x38
    UILabel * m_rankDisplay; // +0x40
    UILabel * m_rankTitle; // +0x48
    UIButton * m_stateBtn; // +0x50
    AppHardWareRankMessageLogicController * _logicController; // +0x58
}
- (void)layoutContentView;
- (void)setHighlighted:(BOOL)arg1;
- (void)initStateBtn:(int)arg1 offsetY:(double *)arg2;
- (id)getBackgroundImage;
- (id)getBackgroundImageHL;
- (id)getFontColor;
- (void)onTouchUpInside;
- (void)onClickStateBtn;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)logicController;
- (void)setupAccessibility;
- (id)removeAllNumberAndComma:(id)arg1;
- (void)setLogicController:(id)arg1;
- (void).cxx_destruct;
@end

