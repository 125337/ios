@interface MMFinderLiveFansGroupSignUIStateInfo : NSObject
{
    BOOL _autoAdjustWidth; // +0x8
    BOOL _autoAdjustHeight; // +0x9
    BOOL _isSuperfan; // +0xa
    BOOL _isFansGroupIconCenter; // +0xb
    double _width; // +0x10
    double _height; // +0x18
    long long _uiStyle; // +0x20
    long long _uiMode; // +0x28
    long long _uiShape; // +0x30
    NSString * _fansGroupText; // +0x38
    unsigned long long _fansGroupRank; // +0x40
    double _fansGroupIconLeft; // +0x48
    UIFont * _fanGroupTextFont; // +0x50
    CGSize _fanGroupIconSize; // +0x58
}
- (BOOL)isEqual:(id)arg1;
- (void)setUiShape:(long long)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (long long)uiStyle;
- (void)setUiStyle:(long long)arg1;
- (long long)uiMode;
- (void)setUiMode:(long long)arg1;
- (long long)uiShape;
- (id)fansGroupText;
- (void)setFansGroupText:(id)arg1;
- (unsigned long long)fansGroupRank;
- (void)setFansGroupRank:(unsigned long long)arg1;
- (BOOL)autoAdjustWidth;
- (void)setAutoAdjustWidth:(BOOL)arg1;
- (BOOL)autoAdjustHeight;
- (void)setAutoAdjustHeight:(BOOL)arg1;
- (BOOL)isSuperfan;
- (void)setIsSuperfan:(BOOL)arg1;
- (CGSize)fanGroupIconSize;
- (void)setFanGroupIconSize:(CGSize)arg1;
- (BOOL)isFansGroupIconCenter;
- (void)setIsFansGroupIconCenter:(BOOL)arg1;
- (double)fansGroupIconLeft;
- (void)setFansGroupIconLeft:(double)arg1;
- (id)fanGroupTextFont;
- (void)setFanGroupTextFont:(id)arg1;
- (void).cxx_destruct;
@end

