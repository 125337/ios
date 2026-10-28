@interface MJShootFaceGenderSwitchItem : NSObject <MJShootBubbleSwitchItem>
{
    NSString * _title; // +0x8
    long long _faceGender; // +0x10
}
- (id)initWithTitle:(id)arg1 faceGender:(long long)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)faceGender;
- (void)setFaceGender:(long long)arg1;
- (void).cxx_destruct;
@end
