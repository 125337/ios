@interface MMNexusGuideWalkthroughAdapter : NSObject
{
    id /* block */ _onConfirm; // +0x8
    id /* block */ _onCancel; // +0x10
    id /* block */ _onJump; // +0x18
    id /* block */ _onDetailLink; // +0x20
}
+ (void)registerPageIfNeeded;
+ (BOOL)isNexusEnabled;
- (BOOL)presentPIPSettingGuideFromNav:(id)arg1 fallback:(id /* block */)arg2;
- (BOOL)presentScreenRecordGuideFromNav:(id)arg1 fallback:(id /* block */)arg2;
- (double)_screenRecordHeightPx;
- (BOOL)_showFromNav:(id)arg1 variant:(id)arg2 title:(id)arg3 descHtml:(id)arg4 detailLinkText:(id)arg5 guideImgUrl:(id)arg6 confirmText:(id)arg7 cancelText:(id)arg8 jumpText:(id)arg9 hideNavBar:(BOOL)arg10 dragDownStyle:(unsigned long long)arg11 dragDownBarColor:(id)arg12 dragDownArrowColor:(id)arg13 sheetBackgroundColor:(id)arg14 navTitle:(id)arg15 heightPx:(double)arg16 fallback:(id /* block */)arg17;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id /* block */)onJump;
- (void)setOnJump:(id /* block */)arg1;
- (id /* block */)onDetailLink;
- (void)setOnDetailLink:(id /* block */)arg1;
- (void).cxx_destruct;
@end
