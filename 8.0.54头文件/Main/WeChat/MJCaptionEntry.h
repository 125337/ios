@interface MJCaptionEntry : NSObject
{
    NSString * _launguage; // +0x8
    NSArray * _captionItems; // +0x10
}
- (id)initWithLaunguage:(id)arg1 captionItems:(id)arg2;
- (id)copyWithSpeedRatio:(double)arg1 parentStartTime:(struct)arg2;
- (id)description;
- (id)launguage;
- (id)captionItems;
- (void).cxx_destruct;
@end

