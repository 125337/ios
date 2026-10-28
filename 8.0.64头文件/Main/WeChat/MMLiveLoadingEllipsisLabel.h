@interface MMLiveLoadingEllipsisLabel : UILabel
{
    NSString * _internalText; // +0x8
    MMTimer * _ellipsisRotationTimer; // +0x10
    unsigned long long _ellipsisDotCount; // +0x18
}
- (id)text;
- (void)setText:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)didMoveToSuperview;
- (void)resetEllipisRotationTimer;
- (void)ellipsisRotationTimerTick;
- (id)internalText;
- (void)setInternalText:(id)arg1;
- (id)ellipsisRotationTimer;
- (void)setEllipsisRotationTimer:(id)arg1;
- (unsigned long long)ellipsisDotCount;
- (void)setEllipsisDotCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
