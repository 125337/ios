@interface ShakeSingleView : MMUIView <IHeadImageExt>
{
    UIView * m_bkgView; // +0x8
    UIImageView * m_indicatorImageView; // +0x10
    UIImageView * m_sexImageView; // +0x18
    MMHeadImageView * m_headImageView; // +0x20
    UILabel * m_labelLoc; // +0x28
    UILabel * m_labelNickName; // +0x30
    UILabel * m_labelCity; // +0x38
    UILabel * m_labelFriend; // +0x40
    ShakeGetItem * m_oShakeGetItem; // +0x48
    unsigned int m_uiScene; // +0x50
    id <shakeSingleViewDelegate> m_delegate; // +0x58
    UIView * _coverView; // +0x60
}
- (void)setM_Delegate:(id)arg1;
- (void)stopAllAnimation;
- (void)finishShowAnimation;
- (void)doShowAnimation;
- (BOOL)isInMyContactList:(id)arg1;
- (id)initWithItem:(id)arg1 andScene:(unsigned int)arg2;
- (BOOL)isPointInView:(CGPoint)arg1;
- (BOOL)isClickHead:(CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (void).cxx_destruct;
@end
