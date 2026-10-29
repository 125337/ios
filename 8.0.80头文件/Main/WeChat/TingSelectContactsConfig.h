@interface TingSelectContactsConfig : NSObject
{
    NSArray * _presetUsername; // +0x8
    NSNumber * _presetCancelable; // +0x10
    NSNumber * _maxSelectCount; // +0x18
    NSString * _overLimitAlert; // +0x20
    NSString * _rightBarButtonTitle; // +0x28
    NSNumber * _useSessionMode; // +0x30
    NSNumber * _singleSelectMode; // +0x38
}
+ (id)makeWithPresetUsername:(id)arg1 presetCancelable:(id)arg2 maxSelectCount:(id)arg3 overLimitAlert:(id)arg4 rightBarButtonTitle:(id)arg5 useSessionMode:(id)arg6 singleSelectMode:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)presetUsername;
- (void)setPresetUsername:(id)arg1;
- (id)presetCancelable;
- (void)setPresetCancelable:(id)arg1;
- (id)maxSelectCount;
- (void)setMaxSelectCount:(id)arg1;
- (id)overLimitAlert;
- (void)setOverLimitAlert:(id)arg1;
- (id)rightBarButtonTitle;
- (void)setRightBarButtonTitle:(id)arg1;
- (id)useSessionMode;
- (void)setUseSessionMode:(id)arg1;
- (id)singleSelectMode;
- (void)setSingleSelectMode:(id)arg1;
- (void).cxx_destruct;
@end
