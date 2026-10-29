@interface KindaPatternLockView : KindaView <MMPatternLockViewDelegate, MMKPatternLockView>
{
    MMPatternLockView * _lockView; // +0xa8
    MMKPatternLockViewEndWithPatternCallback * _callback; // +0xb0
    MMKPatternLockViewOnInputInvalidPatternCallback * _invalidInputCallback; // +0xb8
}
- (id)init;
- (id)getView;
- (int)getViewWidth;
- (int)getViewHeight;
- (void)onVerifyPatternOK;
- (void)onVerifyPatternFail;
- (void)resetPatternView;
- (void)setEnableInput:(BOOL)arg1;
- (void)setEndWithPatternCallback:(id)arg1;
- (void)setOnInputInvalidPatternCallback:(id)arg1;
- (void)lockView:(id)arg1 didEndWithPattern:(id)arg2;
- (BOOL)isContinueWhenlockViewResultInValid:(id)arg1;
- (id)lockView;
- (void)setLockView:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)invalidInputCallback;
- (void)setInvalidInputCallback:(id)arg1;
- (void).cxx_destruct;
@end

