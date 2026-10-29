@interface WCFinderVideoSliderViewResult : NSObject
{
    unsigned long long _resultType; // +0x8
    UIImage * _speciallyImage; // +0x10
    double _coverTimeInVideo; // +0x18
}
- (unsigned long long)resultType;
- (void)setResultType:(unsigned long long)arg1;
- (id)speciallyImage;
- (void)setSpeciallyImage:(id)arg1;
- (double)coverTimeInVideo;
- (void)setCoverTimeInVideo:(double)arg1;
- (void).cxx_destruct;
@end
