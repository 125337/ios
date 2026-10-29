@interface TextStateMediaBackgroundView : UIImageView <MMTextStateMediaDownloadImageCdnMgrExt>
{
    BOOL _useCustomBlurEffect; // +0x8
    MMTextStateMediaItem * _mediaItem; // +0x10
    long long _customBlurEffectType; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setMediaItem:(id)arg1;
- (void)refresh;
- (void)onTextStateMediaThumbDownloadSuccess:(id)arg1;
- (void)onTextStateMediaThumbDownloadFail:(id)arg1;
- (void)updateImage:(id)arg1 effectCacheKey:(id)arg2;
- (id)mediaItem;
- (BOOL)useCustomBlurEffect;
- (void)setUseCustomBlurEffect:(BOOL)arg1;
- (long long)customBlurEffectType;
- (void)setCustomBlurEffectType:(long long)arg1;
- (void).cxx_destruct;
@end
