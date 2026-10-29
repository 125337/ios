@interface EditImageModView : MMObject <NSCopying>
{
    BOOL _hide; // +0x8
    unsigned int _modProperty; // +0xc
    unsigned int _pViewIndex; // +0x10
    EditImageUIView * _czUIView; // +0x18
    double _pViewScale; // +0x20
    NSString * _pText; // +0x28
    double _pScale; // +0x30
    unsigned long long _pOrientation; // +0x38
    UIColor * _pTextColor; // +0x40
    CGPoint _pCenter; // +0x48
    CGPoint _pAnchorPoint; // +0x58
    CGPoint _pOffset; // +0x68
    CGRect _pFrame; // +0x78
    CGRect _pGridFrame; // +0x98
    CGRect _pCropFrame; // +0xb8
    CGAffineTransform _pTransform; // +0xd8
}
- (id)init;
- (id)initWithNewView:(id)arg1;
- (id)initWithCurrentView:(id)arg1;
- (id)initWithCropGridFrame:(CGRect)arg1 withScale:(double)arg2 withOffset:(CGPoint)arg3 withCropFrame:(CGRect)arg4 withImageFrame:(CGRect)arg5 withOrientation:(unsigned long long)arg6;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isChanged;
- (void)set_pViewIndex:(unsigned int)arg1;
- (id)_czUIView;
- (void)set_czUIView:(id)arg1;
- (unsigned int)_modProperty;
- (void)set_modProperty:(unsigned int)arg1;
- (CGRect)_pFrame;
- (void)set_pFrame:(CGRect)arg1;
- (CGAffineTransform)_pTransform;
- (void)set_pTransform:(CGAffineTransform)arg1;
- (CGPoint)_pCenter;
- (void)set_pCenter:(CGPoint)arg1;
- (CGPoint)_pAnchorPoint;
- (void)set_pAnchorPoint:(CGPoint)arg1;
- (double)_pViewScale;
- (void)set_pViewScale:(double)arg1;
- (id)_pText;
- (void)set_pText:(id)arg1;
- (BOOL)_hide;
- (void)set_hide:(BOOL)arg1;
- (CGRect)_pGridFrame;
- (void)set_pGridFrame:(CGRect)arg1;
- (double)_pScale;
- (void)set_pScale:(double)arg1;
- (CGPoint)_pOffset;
- (void)set_pOffset:(CGPoint)arg1;
- (CGRect)_pCropFrame;
- (void)set_pCropFrame:(CGRect)arg1;
- (unsigned int)_pViewIndex;
- (unsigned long long)_pOrientation;
- (void)set_pOrientation:(unsigned long long)arg1;
- (id)_pTextColor;
- (void)set_pTextColor:(id)arg1;
- (void).cxx_destruct;
@end

