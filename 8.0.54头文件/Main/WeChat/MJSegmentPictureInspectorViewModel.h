@interface MJSegmentPictureInspectorViewModel : MJSegmentInspectorViewModel
{
    float _brightnessOriginalValue; // +0x40
    float _contrastOriginalValue; // +0x44
    float _saturationOriginalValue; // +0x48
    float _temperatureOriginalValue; // +0x4c
    float _sharpnessOriginalValue; // +0x50
    float _vignetteOriginalValue; // +0x54
    NSArray * _valueItems; // +0x58
}
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;
- (void)setupOriginalValues;
- (void)setupMenuItems;
- (void)handleAdjustActionWithItem:(id)arg1;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (id)adjustableProtocols;
- (BOOL)hasChanges;
- (void)notifyDidCancel;
- (void)notifyDidReset;
- (void)setValuesToOriginal;
- (void)notifyDidApplyToAll:(id)arg1;
- (id)valueItems;
- (void)setValueItems:(id)arg1;
- (void).cxx_destruct;
@end

