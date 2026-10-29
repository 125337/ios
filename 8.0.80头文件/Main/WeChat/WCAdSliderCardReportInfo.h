@interface WCAdSliderCardReportInfo : NSObject
{
    unsigned int _slideJumpCount; // +0x8
    unsigned int _touchCount; // +0xc
    unsigned int _slideCount; // +0x10
    NSMutableArray * _reportItemList; // +0x18
    unsigned long long _touchDuraion; // +0x20
}
- (id)reportItemList;
- (void)setReportItemList:(id)arg1;
- (unsigned int)slideJumpCount;
- (void)setSlideJumpCount:(unsigned int)arg1;
- (unsigned long long)touchDuraion;
- (void)setTouchDuraion:(unsigned long long)arg1;
- (unsigned int)touchCount;
- (void)setTouchCount:(unsigned int)arg1;
- (unsigned int)slideCount;
- (void)setSlideCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
