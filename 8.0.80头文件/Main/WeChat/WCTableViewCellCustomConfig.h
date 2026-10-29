@interface WCTableViewCellCustomConfig : NSObject
{
    SEL _makeCellSel; // +0x8
    id _makeCellTarget; // +0x10
    UIView * _customView; // +0x18
    long long _accessoryType; // +0x20
    UIView * _accessoryView; // +0x28
    NSString * _accessoryLabel; // +0x30
}
- (void)addMakeCellTarget:(id)arg1 selector:(SEL)arg2;
- (SEL)makeCellSel;
- (void)setMakeCellSel:(SEL)arg1;
- (id)makeCellTarget;
- (void)setMakeCellTarget:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (long long)accessoryType;
- (void)setAccessoryType:(long long)arg1;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
- (id)accessoryLabel;
- (void)setAccessoryLabel:(id)arg1;
- (void).cxx_destruct;
@end
