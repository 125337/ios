@interface MMFinderLiveBottomButtonAnimationItem : NSObject
{
    unsigned int _countdownSeconds; // +0x8
    FinderLiveButtonAnimationInfo * _animationInfo; // +0x10
    NSString * _localFilePath; // +0x18
}
- (id)initWithAnimationInfo:(id)arg1;
- (id)animationInfo;
- (void)setAnimationInfo:(id)arg1;
- (id)localFilePath;
- (void)setLocalFilePath:(id)arg1;
- (unsigned int)countdownSeconds;
- (void)setCountdownSeconds:(unsigned int)arg1;
- (void).cxx_destruct;
@end
