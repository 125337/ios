@interface BrandExposeLog : NSObject
{
    BOOL _isTop; // +0x8
    BOOL _isRedDot; // +0x9
    BOOL _isClicked; // +0xa
    unsigned int _timestamp; // +0xc
    unsigned int _rank; // +0x10
    NSString * _bizUsername; // +0x18
    NSString * _mid; // +0x20
    NSString * _idx; // +0x28
}
- (id)logString;
- (unsigned int)timestamp;
- (void)setTimestamp:(unsigned int)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)mid;
- (void)setMid:(id)arg1;
- (id)idx;
- (void)setIdx:(id)arg1;
- (unsigned int)rank;
- (void)setRank:(unsigned int)arg1;
- (BOOL)isTop;
- (void)setIsTop:(BOOL)arg1;
- (BOOL)isRedDot;
- (void)setIsRedDot:(BOOL)arg1;
- (BOOL)isClicked;
- (void)setIsClicked:(BOOL)arg1;
- (void).cxx_destruct;
@end
