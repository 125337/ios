@interface EcsGiftChatroomMessageCellView : CommonMessageCellView
{
    UILabel * _m_descLabel; // +0xb0
    UILabel * _m_titleLabel; // +0xb8
    UIImageView * _m_giftBubbleBgView; // +0xc0
    UIImageView * _m_iconView; // +0xc8
    UIView * _m_tmpIconView; // +0xd0
    UIView * _showResourceBgView; // +0xd8
    NSMutableDictionary * _showResourceMaskImageViewCache; // +0xe0
    MMWebImageView * _showResourceImageView; // +0xe8
    UIImageView * _showResourceMaskView; // +0xf0
    CAShapeLayer * _skinMaskLayer; // +0xf8
}
- (void)layoutContentView;
- (void)initIconView;
- (void)initGiftBubbleBgView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)updateStatus;
- (void)updateTitleLabel;
- (void)updateIconView;
- (void)updateDescLabel;
- (void)initSourceViewInside;
- (void)updateBgImageView:(BOOL)arg1;
- (void)updateGiftSourceImageView;
- (id)generateMaskImage:(id)arg1 isSender:(BOOL)arg2;
- (void)layoutInternal;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)onAppear;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)m_descLabel;
- (void)setM_descLabel:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_giftBubbleBgView;
- (void)setM_giftBubbleBgView:(id)arg1;
- (id)m_iconView;
- (void)setM_iconView:(id)arg1;
- (id)m_tmpIconView;
- (void)setM_tmpIconView:(id)arg1;
- (id)showResourceBgView;
- (void)setShowResourceBgView:(id)arg1;
- (id)showResourceMaskImageViewCache;
- (void)setShowResourceMaskImageViewCache:(id)arg1;
- (id)showResourceImageView;
- (void)setShowResourceImageView:(id)arg1;
- (id)showResourceMaskView;
- (void)setShowResourceMaskView:(id)arg1;
- (id)skinMaskLayer;
- (void)setSkinMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
