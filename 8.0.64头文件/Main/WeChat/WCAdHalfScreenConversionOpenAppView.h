@interface WCAdHalfScreenConversionOpenAppView : MMPageSheetBaseView
{
    WCAdSchemaJumpInfo * _schemaJumpInfo; // +0x8
    id /* block */ _resultBlock; // +0x10
    WCAdURLImageView * _appIconView; // +0x18
    MMUILabel * _appNameView; // +0x20
    MMUILabel * _tipsView1; // +0x28
    MMUILabel * _tipsView2; // +0x30
    FixTitleColorButton * _confirmButtonView; // +0x38
    MaskButtonView * _maskButtonView; // +0x40
}
- (id)initWithSchemaJumpInfo:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)initCommonUI;
- (void)initDetailUI;
- (id)appIconView;
- (id)createLabel:(id)arg1 height:(double)arg2 font:(id)arg3 textColor:(id)arg4;
- (id)appNameView;
- (id)tipsView1;
- (id)tipsView2;
- (id)confirmButtonView;
- (id)maskButtonView;
- (void)onConfirmButtonClick:(id)arg1;
- (void)directLaunchAppWithDeeplink;
- (void)directLaunchAppWithUlink;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)schemaJumpInfo;
- (void)setSchemaJumpInfo:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (void)setAppIconView:(id)arg1;
- (void)setAppNameView:(id)arg1;
- (void)setTipsView1:(id)arg1;
- (void)setTipsView2:(id)arg1;
- (void)setConfirmButtonView:(id)arg1;
- (void)setMaskButtonView:(id)arg1;
- (void).cxx_destruct;
@end
