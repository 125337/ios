@interface EJTouch : NSObject
{
    unsigned long long _identifier; // +0x8
    double _force; // +0x10
    double _maximumPossibleForce; // +0x18
    UIView * _view; // +0x20
    CGPoint _locationInView; // +0x28
    CGPoint _locationInScriptView; // +0x38
}
- (id)initWithExtTouch:(id)arg1 scriptView:(id)arg2;
- (CGPoint)locationInView;
- (void)setLocationInView:(CGPoint)arg1;
- (CGPoint)locationInScriptView;
- (void)setLocationInScriptView:(CGPoint)arg1;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (double)force;
- (void)setForce:(double)arg1;
- (double)maximumPossibleForce;
- (void)setMaximumPossibleForce:(double)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (void).cxx_destruct;
@end

