@interface MMNexusIntroCardAdapter : NSObject
{
    id /* block */ _onConfirm; // +0x8
    id /* block */ _onCancel; // +0x10
    id /* block */ _onOpenUrl; // +0x18
    id /* block */ _onDismiss; // +0x20
    NSDictionary * _styleOverride; // +0x28
    MMNexusInstance * _lastPresentedInstance; // +0x30
    UINavigationController * _lastNav; // +0x38
    NSDictionary * _extraInitialData; // +0x40
    double _overrideHeightPx; // +0x48
}
+ (void)registerPageIfNeeded;
+ (BOOL)isNexusEnabled;
- (BOOL)presentGiftPackagePolicyFromNav:(id)arg1 fallback:(id /* block */)arg2;
- (BOOL)presentPopularGiftPolicyFromNav:(id)arg1 fallback:(id /* block */)arg2;
- (BOOL)_presentGiftPolicyFromNav:(id)arg1 config:(id)arg2 variantEnum:(long long)arg3 fallback:(id /* block */)arg4;
- (BOOL)presentPaymentPolicyFromNav:(id)arg1 forAnchor:(BOOL)arg2 fallback:(id /* block */)arg3;
- (BOOL)presentCreateNoticePolicyFromNav:(id)arg1 forAnchor:(BOOL)arg2 fallback:(id /* block */)arg3;
- (BOOL)presentReplayPaymentPolicyFromNav:(id)arg1 fallback:(id /* block */)arg2;
- (double)_estimateReplayPolicyHeightWithTitle:(id)arg1 points:(id)arg2 agreementHtml:(id)arg3;
- (id)_svgDataUrlNamed:(id)arg1 color:(id)arg2;
- (BOOL)presentHiddenAudienceNameTipsFromNav:(id)arg1 fallback:(id /* block */)arg2;
- (BOOL)presentExposedGiftIntroFromNav:(id)arg1 isKTVGift:(BOOL)arg2 wecoinCount:(unsigned int)arg3 fallback:(id /* block */)arg4;
- (BOOL)_showFromNav:(id)arg1 variant:(id)arg2 title:(id)arg3 hideTitle:(BOOL)arg4 detailHtml:(id)arg5 descHtml:(id)arg6 confirmText:(id)arg7 cancelText:(id)arg8 confirmCoinCount:(unsigned int)arg9 centered:(BOOL)arg10 fallback:(id /* block */)arg11;
- (id)_variantString:(long long)arg1;
- (id)_wcCustomLinkToHtml:(id)arg1;
- (id)_normalizeNewlineToBr:(id)arg1;
- (BOOL)_isRTL;
- (id)_wecoinIconDataUrl;
- (id)_defaultStyleForVariant:(id)arg1;
- (id)_mergedStyleForVariant:(id)arg1 override:(id)arg2;
- (double)_styleNumber:(id)arg1 key:(id)arg2 fallback:(double)arg3;
- (double)_estimateHeightPxTitle:(id)arg1 hideTitle:(BOOL)arg2 detailHtml:(id)arg3 descHtml:(id)arg4 style:(id)arg5;
- (id)_htmlToPlainText:(id)arg1;
- (double)_measureHtml:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 width:(double)arg4;
- (double)_safeAreaBottom;
- (void)_openUrlInWebView:(id)arg1 fromInst:(id)arg2;
- (long long)_depthFromRoot:(id)arg1 to:(id)arg2;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id /* block */)onOpenUrl;
- (void)setOnOpenUrl:(id /* block */)arg1;
- (id /* block */)onDismiss;
- (void)setOnDismiss:(id /* block */)arg1;
- (id)styleOverride;
- (void)setStyleOverride:(id)arg1;
- (id)lastPresentedInstance;
- (void)setLastPresentedInstance:(id)arg1;
- (id)lastNav;
- (void)setLastNav:(id)arg1;
- (id)extraInitialData;
- (void)setExtraInitialData:(id)arg1;
- (double)overrideHeightPx;
- (void)setOverrideHeightPx:(double)arg1;
- (void).cxx_destruct;
@end
