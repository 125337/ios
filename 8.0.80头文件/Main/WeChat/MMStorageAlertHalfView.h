@interface MMStorageAlertHalfView : MMPageSheetBaseView <ILinkEventExt, KindaNotifyExt>
{
    MMUILabel * m_titleLabel; // +0x8
    float wechatRatio; // +0x10
    BOOL noTotalSize; // +0x14
    BOOL appeared; // +0x15
    NSString * _disableThreshold; // +0x18
}
- (id)initWithDisableThreshold:(id)arg1;
- (void)setupView;
- (void)setUiLabelAutoNewLine:(id)arg1;
- (void)goToCleanView:(id)arg1;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)onAppEnterForeground:(id)arg1;
- (void)checkCleanSucc;
- (void)handleDoubleTap:(id)arg1;
- (void)reportStorageAlert:(int)arg1 num:(unsigned long long)arg2;
- (void)dealloc;
- (void)onKindaNotify:(id)arg1 value:(id)arg2;
- (id)disableThreshold;
- (void)setDisableThreshold:(id)arg1;
- (void).cxx_destruct;
@end
