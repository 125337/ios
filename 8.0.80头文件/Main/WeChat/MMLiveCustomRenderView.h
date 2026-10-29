@interface MMLiveCustomRenderView : UIView
{
    UIView * _customContentView; // +0x8
    id /* block */ _getRenderWHPercentBlock; // +0x10
    id /* block */ _getPlayerWHPercentBlock; // +0x18
}
- (void)attachCustomContentView:(id)arg1;
- (void)deAttachCustomContentView:(id)arg1;
- (void)layoutCustomContentView;
- (double)renderWHPercent;
- (double)playerWHPercent;
- (void)layoutSubviews;
- (id)customContentView;
- (void)setCustomContentView:(id)arg1;
- (id /* block */)getRenderWHPercentBlock;
- (void)setGetRenderWHPercentBlock:(id /* block */)arg1;
- (id /* block */)getPlayerWHPercentBlock;
- (void)setGetPlayerWHPercentBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
