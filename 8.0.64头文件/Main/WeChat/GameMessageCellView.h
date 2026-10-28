@interface GameMessageCellView : CommonMessageCellView
{
    unsigned int m_uiCurrImageIndex; // +0xb0
    unsigned int m_uiAnimationTimes; // +0xb4
    UIImageView * m_gameImageView; // +0xb8
    MMTimer * m_gameTimer; // +0xc0
}
+ (id)getGameImageByIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onAppear;
- (void)startGameTimer;
- (void)stopGameTimer;
- (void)handleGameTimer:(id)arg1;
- (void)doAnimation;
- (void)stopAnimation;
- (id)operationMenuItems;
- (void).cxx_destruct;
@end
