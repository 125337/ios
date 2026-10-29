@interface YYTextContainer : NSObject <NSCoding, NSCopying>
{
    BOOL _readonly; // +0x8
    NSObject<OS_dispatch_semaphore> * _lock; // +0x10
    CGSize _size; // +0x18
    UIEdgeInsets _insets; // +0x28
    UIBezierPath * _path; // +0x48
    NSArray * _exclusionPaths; // +0x50
    BOOL _pathFillEvenOdd; // +0x58
    double _pathLineWidth; // +0x60
    BOOL _verticalForm; // +0x68
    unsigned long long _maximumNumberOfRows; // +0x70
    unsigned long long _truncationType; // +0x78
    NSAttributedString * _truncationToken; // +0x80
    id <YYTextLinePositionModifier> _linePositionModifier; // +0x88
}
+ (id)containerWithSize:(CGSize)arg1;
+ (id)containerWithSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2;
+ (id)containerWithPath:(id)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (UIEdgeInsets)insets;
- (void)setInsets:(UIEdgeInsets)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)exclusionPaths;
- (void)setExclusionPaths:(id)arg1;
- (BOOL)isPathFillEvenOdd;
- (void)setPathFillEvenOdd:(BOOL)arg1;
- (double)pathLineWidth;
- (void)setPathLineWidth:(double)arg1;
- (BOOL)isVerticalForm;
- (void)setVerticalForm:(BOOL)arg1;
- (unsigned long long)maximumNumberOfRows;
- (void)setMaximumNumberOfRows:(unsigned long long)arg1;
- (unsigned long long)truncationType;
- (void)setTruncationType:(unsigned long long)arg1;
- (id)truncationToken;
- (void)setTruncationToken:(id)arg1;
- (void)setLinePositionModifier:(id)arg1;
- (id)linePositionModifier;
- (void).cxx_destruct;
@end
