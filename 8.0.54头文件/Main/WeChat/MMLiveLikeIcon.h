@interface MMLiveLikeIcon : NSObject
{
    BOOL _fixedRate; // +0x8
    float _rate; // +0xc
    UIImage * _icon; // +0x10
}
- (id)initWithImage:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (float)rate;
- (void)setRate:(float)arg1;
- (BOOL)fixedRate;
- (void)setFixedRate:(BOOL)arg1;
- (void).cxx_destruct;
@end

