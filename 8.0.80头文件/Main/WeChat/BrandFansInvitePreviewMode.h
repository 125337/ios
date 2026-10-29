@interface BrandFansInvitePreviewMode : NSObject
{
    NSString * _biz; // +0x8
    NSString * _targetFans; // +0x10
    NSString * _prefilledText; // +0x18
    id /* block */ _onSent; // +0x20
}
- (id)biz;
- (void)setBiz:(id)arg1;
- (id)targetFans;
- (void)setTargetFans:(id)arg1;
- (id)prefilledText;
- (void)setPrefilledText:(id)arg1;
- (id /* block */)onSent;
- (void)setOnSent:(id /* block */)arg1;
- (void).cxx_destruct;
@end
