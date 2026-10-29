@interface GameMessageCellView : CommonMessageCellView
{
    unsigned int m_uiCurrImageIndex; // +0xb8
    unsigned int m_uiAnimationTimes; // +0xbc
    UIImageView * m_gameImageView; // +0xc0
    MMTimer * m_gameTimer; // +0xc8
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
