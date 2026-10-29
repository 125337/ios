@interface WCPayThirdC2CMessageCellView : WCPayBaseMessageCellView <MMWebImageViewDelegate>
{
    NSMutableDictionary * _showResourceMaskImageViewCache; // +0xc0
    WCPayWebImageView * _showResourceImageView; // +0xc8
    UIView * _showResourceBgView; // +0xd0
}
- (void)updateStatus;
- (void)initTitleLabel;
- (void)updateBackground;
- (id)generateMaskImage:(id)arg1 isSender:(BOOL)arg2;
- (void)initThirdC2CSoureViewInside;
- (void)initSourceViewInside;
- (void)onTouchUpInside;
- (id)showResourceMaskImageViewCache;
- (void)setShowResourceMaskImageViewCache:(id)arg1;
- (id)showResourceImageView;
- (void)setShowResourceImageView:(id)arg1;
- (id)showResourceBgView;
- (void)setShowResourceBgView:(id)arg1;
- (void).cxx_destruct;
@end

