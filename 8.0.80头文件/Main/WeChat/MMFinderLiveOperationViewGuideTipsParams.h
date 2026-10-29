@interface MMFinderLiveOperationViewGuideTipsParams : NSObject
{
    BOOL _removeWhenTouchOthers; // +0x8
    BOOL _hideOnLandscape; // +0x9
    BOOL _hideOnPortrait; // +0xa
    NSString * _title; // +0x10
    UIView * _target; // +0x18
    long long _triangleOrientation; // +0x20
    NSArray * _dependentTypes; // +0x28
    double _duration; // +0x30
    id /* block */ _onRemoved; // +0x38
    UIFont * _titleFont; // +0x40
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (long long)triangleOrientation;
- (void)setTriangleOrientation:(long long)arg1;
- (id)dependentTypes;
- (void)setDependentTypes:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id /* block */)onRemoved;
- (void)setOnRemoved:(id /* block */)arg1;
- (BOOL)removeWhenTouchOthers;
- (void)setRemoveWhenTouchOthers:(BOOL)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (BOOL)hideOnLandscape;
- (void)setHideOnLandscape:(BOOL)arg1;
- (BOOL)hideOnPortrait;
- (void)setHideOnPortrait:(BOOL)arg1;
- (void).cxx_destruct;
@end
