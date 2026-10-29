@interface MMFinderLiveConnectedMicCellHeaderViewAction : NSObject
{
    UIImage * _iconImage; // +0x8
    UIImage * _highlightedIconImage; // +0x10
    NSString * _accessibilityLabel; // +0x18
    id /* block */ _action; // +0x20
}
+ (id)actionWithIcon:(id)arg1 highlightedIcon:(id)arg2 accessibilityLabel:(id)arg3 actionBlock:(id /* block */)arg4;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)highlightedIconImage;
- (void)setHighlightedIconImage:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

