@interface WCCanvasComponentFloatJumpInfo : MMObject <NSCoding>
{
    BOOL _autoJump; // +0x8
    NSString * _title; // +0x10
    WCCanvasComponentItem * _jumpButton; // +0x18
    double _swipeJumpOffset; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)jumpButton;
- (void)setJumpButton:(id)arg1;
- (BOOL)autoJump;
- (void)setAutoJump:(BOOL)arg1;
- (double)swipeJumpOffset;
- (void)setSwipeJumpOffset:(double)arg1;
- (void).cxx_destruct;
@end
