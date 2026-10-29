@interface WCSnsABTestTipActionResult : NSObject
{
    int tipViewType; // +0x8
    unsigned long long buttonCount; // +0x10
    unsigned long long buttonClickedIndex; // +0x18
    int buttonActionType; // +0x20
}
- (id)init;
- (id)genStatInfo;
- (int)tipViewType;
- (void)setTipViewType:(int)arg1;
- (unsigned long long)buttonCount;
- (void)setButtonCount:(unsigned long long)arg1;
- (unsigned long long)buttonClickedIndex;
- (void)setButtonClickedIndex:(unsigned long long)arg1;
- (int)buttonActionType;
- (void)setButtonActionType:(int)arg1;
@end
