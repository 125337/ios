@interface WCFinderPostModelSnapshot : NSObject
{
    WCFinderPostModelPredictor * _predictor; // +0x8
    NSString * _contentSHA256; // +0x10
}
- (id)initWithPredictor:(id)arg1 contentSHA256:(id)arg2;
- (id)description;
- (id)predictor;
- (id)contentSHA256;
- (void).cxx_destruct;
@end
